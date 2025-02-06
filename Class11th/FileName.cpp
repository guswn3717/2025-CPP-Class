#include <iostream>
using namespace std;
class Packet
{
private:
    int errorCode = -9999;
public:
    Packet()
    {
        cout << "Created Packet" << endl;
    }
    const int& ErrorCode()
    {
        return errorCode;
    }
    ~Packet()
    {
        cout << "Release Packet" << endl;
    }
};
class Resource
{
private:
    shared_ptr<Resource> sharedPointer;
public:
    Resource()
    {
        cout << "Created Resource" << endl;
    }
    void Share(const shared_ptr<Resource>& resource)
    {
        sharedPointer = resource;
    }
    ~Resource()
    {
        cout << "Release Resource" << endl;
    }
};
class Character
{
private:
    weak_ptr<Character> weakPointer;
public:
    Character()
    {
        cout << "Created Character" << endl;
    }
    void Partner(const weak_ptr<Character>& character)
    {
        weakPointer = character;
    }
    ~Character()
    {
        cout << "Release Character" << endl;
    }
};
int main()
{
#pragma region ����Ʈ ������
    // �����͸� ����ϴ� ���ÿ� �ڵ����� �޸� ������ 
    // ���ָ�, ��� Ȯ�ΰ� ���� �߰� ����� �����ϴ� �߻�
    // ������ ������ �����Դϴ�. 
#pragma region unique pointer
    // Ư���� ��ü�� �ϳ��� ����Ʈ �����͸� ����ų �� 
    // �ֵ��� �Ǿ� �ִ� �������Դϴ�.
    // unique_ptr<Packet> uniquePointer = make_unique<Packet>();
    // 
    // cout << "unique Pointer Error Code : " << uniquePointer->ErrorCode() << endl;
    // 
    // unique_ptr<Packet> uniqueReference = std::move(uniquePointer);
    // 
    // cout << "unique Pointer Error Code : " << uniquePointer->ErrorCode() << endl;
    // 
    // cout << "unique Reference Error Code : " << uniqueReference->ErrorCode() << endl;
#pragma endregion
#pragma region shared pointer
    // �ϳ��� �ڿ� ��ü�� ���� ������ ��ü�� ����ų �� ������,
    // ��� ������ ��ü�� �ڿ� ��ü�� �ʿ����� ���� �� �ڿ� ��ü�� 
    // �����ϵ��� ����Ǿ� �ִ� �������Դϴ�.
    // shared_ptr<Resource> oil = make_shared<Resource>();
    // shared_ptr<Resource> mineral = make_shared<Resource>();
    // 
    // oil->Share(mineral);
    // mineral->Share(oil);
    // 
    // cout << "Oil Reference Count : " << oil.use_count() << endl;
    // cout << "Mineral Reference Count : " << mineral.use_count() << endl;
#pragma endregion
#pragma region weak pointer
    // �ڿ� ��ü�� �������� �ʱ� ������ ���� �����ͷ� �����Ǵ�
    // �ڿ� ��ü�� �����Ѽ� ���� ������ ������ ��ġ�� �ʰ� �ϴ� �������Դϴ�.
    // 
    // shared_ptr<Character> warrior = make_shared<Character>();
    // 
    // shared_ptr<Character> wizard = make_shared<Character>();
    // 
    // warrior->Partner(wizard);
    // wizard->Partner(warrior);
    // 
    // cout << "Warrior Reference Count : " << warrior.use_count() << endl;
    // cout << "Wizard Reference Count : " << wizard.use_count() << endl;
#pragma endregion
#pragma endregion
    return 0;
}