/// week12-1.cpp �Q�F�� Linked List �� Node
/// ������e�ǹL�� class vs. struct
#include <iostream>
#include <string> ///�A�[�o��
using namespace std;
///struct Node {};///�A���n�j�A��,�N�|�ͤU�A���B����
///class Cat {}; ///�A���n�j�A��,�N�|�ͤU�A���B����
struct Node {
    int val; ///value��
};
class Cat {
public:
    string name;
};
int main()
{
    Cat cat1;  /// �j�g���Ϊ�, �ŧi �p�g���ܼ�
    cat1.name = "Kitty";
    Node node;
    node.val = 1;
} ///�����,�S Compile Error �Y�i(�{���u����,���򳣤���
