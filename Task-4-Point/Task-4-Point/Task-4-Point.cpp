#include <iostream>

using namespace std;

class Point {
private:
    int x, y, z;

public:
    Point(int x_val = 0, int y_val = 0, int z_val = 0) : x(x_val), y(y_val), z(z_val) {}

    void display()
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    int get_x()
    {
        return x;
    }

    int get_y()
    {
        return y;
    }

    int get_z()
    {
        return z;
    }

    void set_x(int x_val)
    {
        x = x_val;
    }

    void set_y(int y_val)
    {
        y = y_val;
    }

    void set_z(int z_val)
    {
        z = z_val;
    }

    void move(int dx, int dy, int dz)
    {
        x += dx;
        y += dy;
        z += dz;
    }

    void moveRelativeTo(Point& other)
    {
        x = other.x + 1;
        y = other.y + 2;
        z = other.z + 3;
    }
};

int main() {
    Point p1;
    Point p2(1, 2, 3);
    Point p3(p2);

    cout << "Point 1 coordinates: ";
    p1.display();

    cout << "Point 2 coordinates: ";
    p2.display();

    cout << "Point 3 coordinates: ";
    p3.display();

    p1.move(10, 20, 30);

    cout << "Point 1's coordinates after movement: ";
    p1.display();

    p1.moveRelativeTo(p2);
    cout << "Point 1's coordinates relative to Point 2: ";
    p1.display();

}
