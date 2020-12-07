// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

using Shared;
using System;
using System.IO;

namespace exportsample
{
    class Program
    {
        static int Main(string[] args)
        {
            // Read command line
            var options = new CommandLineOptions();
            
            var parser = new CommandLineParser(options);
            if (!parser.ParseCommandLine(args))
            {
                return 1;
            }

            var config = LoadConfig(options);

            // Export Samples
            foreach (var sample in config.Samples)
            {
                SampleExporter.Export(config, sample);
            }

            // Copy individual files
            foreach (var file in config.FilesToCopy)
            {
                File.Copy(Path.Combine(config.Options.Root, file), Path.Combine(config.Options.Dest, file), true);
            }

            return 0;
        }
        
        static private Configuration LoadConfig(CommandLineOptions options)
        {
            if (options.Config == null)
            { 
                options.Config = FindConfigFile();
            }

            if (options.Root == null)
            {
                string dir = Path.GetFullPath(options.Config);
                if (!FindEnlistmentRoot(dir, out options.Root))
                {
                    throw new FileNotFoundException("Couldn't find enlistment root");
                }
            }

            if (options.Win2DVersion == null)
            {
                options.Win2DVersion = File.ReadAllText(Path.Combine(options.Root, "build", "nuget", "VERSION")).Trim();
            }

            return new Configuration(options);
        }

        const string DefaultConfigFileName = "ExportSampleConfig.xml";

        static string FindConfigFile()
        {       
            // Check the current directory
            var candidate = Path.GetFullPath(Path.Combine(Environment.CurrentDirectory, DefaultConfigFileName));
            if (File.Exists(candidate))
                return candidate;

            // Otherwise, maybe we're in some other directory in the enlistment
            string enlistmentRoot;
            if (FindEnlistmentRoot(Environment.CurrentDirectory, out enlistmentRoot))
            {
                candidate = Path.GetFullPath(Path.Combine(enlistmentRoot, "tools", "exportsample", DefaultConfigFileName));
                if (File.Exists(candidate))
                    return candidate;
            }

            throw new FileNotFoundException("Couldn't find ExportSampleConfig.xml");
        }
        
        static bool FindEnlistmentRoot(string dir, out string root)
        {
            do
            {
                if (File.Exists(Path.Combine(dir, "Win2D.proj")))
                {
                    root = dir;
                    return true;
                }

                dir = Path.GetDirectoryName(dir);
            } while (dir.Length > 3);

            root = null;
            return false;
        }
    }


    public class CommandLineOptions
    {
        [CommandLineParser.Required]
        public string Dest = null;

        public string Config = null;
        public string Root = null;

        public string Win2DVersion = null;

        public string PackageSource = null;
    }
}
