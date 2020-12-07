﻿// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the MIT License. See LICENSE.txt in the project root for license information.

using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;

namespace test.managed
{
    static class Utils
    {
        public static void AssertThrowsException<T>(Action action, string expectedMessage)
            where T : Exception
        {
            try
            {
                action();
                Assert.Fail("should throw");
            }
            catch (T e)
            {
                VerifyExceptionMessage(expectedMessage, e.Message);
            }
        }


        static void VerifyExceptionMessage(string expected, string sourceMessage)
        {
            // Exception messages contain something like 
            // "Invalid pointer\r\n\r\nEffect source #0 is null",
            // The 'invalid pointer' part is locale 
            // dependent and is stripped out.

            string delimiterString = "\r\n\r\n";
            int delimiterPosition = sourceMessage.LastIndexOf(delimiterString);
            string exceptionMessage = sourceMessage.Substring(delimiterPosition + delimiterString.Length);

            // .NET Native formats HRESULT exception messages differently to other CLR versions.
            exceptionMessage = exceptionMessage.Replace("Excep_FromHResult", "Exception from HRESULT:");

            Assert.AreEqual(expected, exceptionMessage);
        }
    }
}
