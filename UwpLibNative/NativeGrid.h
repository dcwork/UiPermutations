#pragma once

namespace UwpLibNative
{
    public ref class NativeGrid sealed : public Windows::UI::Xaml::Controls::Grid
    {
    public:
        NativeGrid();
    private:
        Windows::UI::Xaml::Controls::TextBlock^ textBlock{ref new Windows::UI::Xaml::Controls::TextBlock()};
    };
}
