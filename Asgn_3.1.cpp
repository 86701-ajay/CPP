#include <iostream>
using namespace std;

class Volume
{

    int length, width, height;

public:
    Volume() : Volume(1, 1, 1) {}

    // Volume()
    // {
    //     this->length = 1;
    //     this->width = 1;

    //     this->height = 1;

    //       display(length,width,height);

    // }

    Volume(int value) : Volume(value, value, value) {}

    Volume(int length, int width, int height)
    {

        this->length = length;
        this->width = width;
        this->height = height;
        display(length, width, height);
    }

    void display(int length, int width, int height)
    {

        int volume = length * width * height;

        cout << "Volume : " << volume << endl;
    }
};

int main()
{
    Volume v1;
    Volume v2(2);
    Volume v3(2, 3, 4);

    return 0;
}
