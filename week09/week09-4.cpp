// week09-4.cpp 厩策璸礶 Math 材2肈 Ι奔程Ι奔程, 衡キА
// LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        int max = salary[0]; // 璶т程, 程玡ê, 讽箇砞
        int min = salary[0]; // 璶т程, 程玡ê, 讽箇砞
        double total = 0;
        for(int i = 0; i < salary.size(); i++) {
            if(salary[i]>max) max = salary[i]; //ゑ程临? 程传讽
            if(salary[i]<min) min = salary[i]; //ゑ程临? 程传讽
            total += salary[i];
        }
        return (total - max - min) / (salary.size()-2);
    }
};
