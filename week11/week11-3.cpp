/// weeek11-3.cpp �Q�ݬ� Hash Map ����Ӫ�j�B
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{///�j�G�W�u�굲�t��k�v�Ъ� Hash Map �����
    unordered_map<string,int> m; ///�S�p�S��
    m["���|��"] = 12750300; ///�����r��, �k���int���
    m["�i޳�f"] = 12750794;

    cout << "���|�۪��Ǹ��O:" << m["���|��"] << endl;
    cout << "�i޳�f���Ǹ��O:" << m["�i޳�f"] << endl;
}
