#include <iostream> 

using namespace std;

class CMyPoint
{
public:
    CMyPoint(int x)
    {
        cout << "CMyPoint(int)" << endl;
        
        if(x > 100) // x값이 100이 넘는지 검사하고 넘으면 100으로 맞춤
        {
            x = 100;
        }

        m_x = 100;
    }

    CMyPoint(int x, int y)
        :CMyPoint(x) // 호출
    {
        cout << "CMyPoint(int, int)" << endl;

        if(y > 200) // y값이 200이 넘는지 검사하고 넘으면 200으로 맞춤
        {
            y = 200;
        }

        m_y = 200;
    }

    void Print()
    {
        cout << "X: " << m_x << endl;
        cout << "Y: " << m_y << endl;
    }

private:
    int m_x = 0;
    int m_y = 0;
};

int main()
{
    CMyPoint ptBegin(110);
    ptBegin.Print();

    CMyPoint ptEnd(50, 250);
    ptEnd.Print();

    return 0;
}