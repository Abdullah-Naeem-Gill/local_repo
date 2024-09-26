#include <iostream>
using namespace std;
class student
{
    int rollno;
    string name;

public:
    void setdata(int a, string b)
    {
        rollno = a;
        name = b;
    }
    void getdata()
    {
        cout << "roll no : " << rollno << endl;
        cout << "name : " << name << endl;
    }
};
class exam : public student
{
    float oopmarks;

public:
    void setmarks(int a)
    {
        oopmarks = a;
    }
    void getmarks()
    {
        cout << "marks : " << oopmarks << endl;
    }
};
class result : public student
{
    float totalmarks;

public:
    void settotalmarks(float a)
    {
        totalmarks = a;
    }
    void gettotalmarks()
    {
        cout << "TOTAL MARKS : " << totalmarks << endl;
    }
};
int main()
{
    exam e;
    result r;

    r.setdata(43, "ABDULLAH");
    r.getdata();

    r.setmarks(12.3);
    r.getmarks();
    r.settotalmarks(1000.2);
    r.gettotalmarks();

    return 0;
}
