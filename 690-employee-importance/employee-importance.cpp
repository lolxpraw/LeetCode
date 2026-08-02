/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/
class Solution {
    // Hash map
    unordered_map<int, Employee*> empMap;
    // Hàm đệ quy tính tổng importance
    int dfs(int currentId) {
        Employee* emp = empMap[currentId];
        int total = emp->importance;
        for (int subId : emp->subordinates) {
            total += dfs(subId);
        }
        return total;
    }
public:
    int getImportance(vector<Employee*> employees, int id) {
        // Ánh xạ toàn bộ nhân viên vào map
        for (Employee* emp : employees) {
            empMap[emp->id] = emp;
        }
        // Gọi đệ quy 
        return dfs(id);
    }
};