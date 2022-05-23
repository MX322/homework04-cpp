#include <iostream>
using namespace std;

int rectangle()
{
    double upX;
    double upY;
    double downX;
    double downY;

    double x;
    double y;

    cout << "Enter X for up : ";
    cin >> upX;

    cout << "Enter Y for up : ";
    cin >> upY;

    cout << "Enter X for down : ";
    cin >> downX;

    cout << "Enter Y for down : ";
    cin >> downY;

    cout << "Enter X : ";
    cin >> x;

    cout << "Enter Y : ";
    cin >> y;

    if (x > upX && x < downX && y > upY && y < downY)
    {
        cout << "point in rectangle \n\n";
    }
    
    else
    {
        cout << "point not in rectangle \n\n";
    }

    return 0;
}


int parallel()
{
    double startX;
    double startY;
    double endX;
    double endY;

    cout << "Enter X : ";
    cin >> startX;

    cout << "Enter Y : ";
    cin >> startY;

    cout << "Enter X : ";
    cin >> endX;

    cout << "Enter Y : ";
    cin >> endY;

    if (startX == endX || startY == endY)
    {
        cout << "line is parallel\n\n";
    }

    else
    {
        cout << "line is parallel\n\n";
    }

    return 0;
}


int fractional()
{
    double num;

    cout << "Enter num : ";
    cin >> num;

    int temp = int(num);
    double fractional = num - temp;


    if (fractional)
    {
        cout << "The number is fractional\n\n";
    }

    else
    {
        cout << "The number is not fractional\n\n";
    }

    return 0;
}


int ticket()
{
    int num;

    cout << "Enter num : ";
    cin >> num;

    int firstNum = num / 1000;
    int secondNum = num % 1000;

    if ((firstNum / 100 + firstNum / 10 % 10 + firstNum % 10) == (secondNum / 100 + secondNum / 10 % 10 + secondNum % 10))
    {
        cout << "num is lucky\n\n";
    }

    else
    {
        cout << "num is not lucky\n\n";
    }

    return 0;
}

int main()
{
    rectangle();
    parallel();
    fractional();
    ticket();
}