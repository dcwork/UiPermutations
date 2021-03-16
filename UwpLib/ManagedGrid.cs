using Windows.UI;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Media;

namespace UwpLib
{
    public class ManagedGrid : Grid
    {
        public ManagedGrid()
        {
            Background = new SolidColorBrush(Colors.Purple);
            Children.Add(new TextBlock { Text = "This is a managed UWP control" });
        }
    }
}
