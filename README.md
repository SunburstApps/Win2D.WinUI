# Win2D

Win2D is an easy-to-use Windows Runtime API for immediate mode 2D graphics
rendering with GPU acceleration. It is available to C#, C++ and VB developers
writing apps for the the Windows XAML Framework. It utilizes the power
of Direct2D, and integrates seamlessly with XAML and WinUI 3.

##### Where to get it
- [NuGet package](http://www.nuget.org/packages/Sunburst.Win2D.WinUI)
- [Source code](http://github.com/SunburstApps/Win2D.WinUI)

##### More info
- [Report a bug or ask a question](http://github.com/SunburstApps/Win2D.WinUI/issues)
- [Changelog](http://github.com/SunburstApps/Win2D.WinUI/blob/master/CHANGELOG.md)
- [License](http://opensource.org/licenses/MIT)
- [Contributing](http://github.com/SunburstApps/Win2D.WinUI/blob/master/CONTRIBUTING.md)

## Code Example
To give you a flavor of what the code looks like, here is a snippet of XAML:
```xml
xmlns:canvas="using:Microsoft.Graphics.Canvas.UI.Xaml"

<Grid>
    <canvas:CanvasControl Draw="canvasControl_Draw" ClearColor="CornflowerBlue" />
</Grid>
```
and C#:
```cs
void canvasControl_Draw(CanvasControl sender, CanvasDrawEventArgs args)
{
    args.DrawingSession.DrawEllipse(155, 115, 80, 30, Colors.Black, 3);
    args.DrawingSession.DrawText("Hello, world!", 100, 100, Colors.Yellow);
}
```
or C++/CX:
```cpp
void MainPage::CanvasControl_Draw(CanvasControl^ sender, CanvasDrawEventArgs^ args)
{
    args->DrawingSession->DrawEllipse(155, 115, 80, 30, Colors::Black, 3);
    args->DrawingSession->DrawText("Hello, world!", 100, 100, Colors::Yellow);
}
```
or C++/WinRT:
```cpp
void MainPage::CanvasControl_Draw(CanvasControl const& sender, CanvasDrawEventArgs const& args)
{
    args.DrawingSession().DrawEllipse(155, 115, 80, 30, Colors::Black(), 3);
    args.DrawingSession().DrawText(L"Hello, world!", 100, 100, Colors::Yellow());
}
```
or VB:
```vb
Sub canvasControl_Draw(sender As CanvasControl, args As CanvasDrawEventArgs)
    args.DrawingSession.DrawEllipse(155, 115, 80, 30, Colors.Black, 3)
    args.DrawingSession.DrawText("Hello, world!", 100, 100, Colors.Yellow)
End Sub
```
