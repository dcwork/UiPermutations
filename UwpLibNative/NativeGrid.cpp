#include "pch.h"
#include "NativeGrid.h"

using namespace UwpLibNative;
using namespace Platform;
using namespace Windows::UI;
using namespace Windows::UI::Xaml::Media;

NativeGrid::NativeGrid()
{
    Background = ref new SolidColorBrush(Colors::Red);
    textBlock->Text = "This is a native UWP control";
    Children->Append(textBlock);
}
