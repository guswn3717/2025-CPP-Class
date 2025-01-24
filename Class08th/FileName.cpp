#include <iostream>
#include "Paint.h"
#include "Pencil.h"
#include "Brush.h"

using namespace std;

class Fruit
{
public:
    Fruit()
    {
        cout << "Created Fruit" << endl;
    }

    virtual ~Fruit()
    {
        cout << "Destory Fruit" << endl;
    }
};

class Banana : public Fruit
{
public:
    Banana()
    {
        cout << "Created Banana" << endl;
    }

    virtual ~Banana()
    {
        cout << "Destory Banana" << endl;
    }
};

using namespace std;

int main()
{
#pragma region �߻� Ŭ����
    /*�Լ��� Ư���� ������ �����Ǿ� ���� �ʰ�, ���� �Ǿ��ִ� Ŭ�����Դϴ�.
    �߻� Ŭ������ ���ǵǾ� ���� ���� �Լ��� �����Ƿ�, ��ü�� ������ �� �����ϴ�.*/

    //Paint * paint = new Brush();
    //
    //paint->Draw();
    //
    //delete paint;
    //
    //paint = new Pencil();
    //
    //paint->Draw();
    //
    //delete paint;
    
    /**/
#pragma endregion

#pragma region ���� �Ҹ���
    /*��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü�� ������� ��� ȣ��Ǵ� �Ҹ����Դϴ�*/

    Fruit* fruit = new Banana();
    delete fruit;

    /*��ӵ� ��ü�� ������ �� ���� Ŭ������ �Ҹ��ڰ� ���� ����ǰ� ���� Ŭ������ �Ҹ��ڰ�
    ����Ǿ�� �ϱ� ������ ���� �ð��� �޸𸮿� �Ҵ�� ��ü�� Ȯ���ϰ� ���ʴ�� �Ҹ���Ѿ� �մϴ�*/
#pragma endregion

    return 0;
}
