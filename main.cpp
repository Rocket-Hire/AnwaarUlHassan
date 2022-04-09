
#include <iostream>

int main() {
  std::cout << "Hello World!\n";

}
// Write an SQL query to find the employees who earn more than their managers.

// Return the result table in any order.

// The query result format is in the following example.

 

// Example 1:

// Input: 
// Employee table:
// +----+-------+--------+-----------+
// | id | name  | salary | managerId |
// +----+-------+--------+-----------+
// | 1  | Joe   | 70000  | 3         |
// | 2  | Henry | 80000  | 4         |
// | 3  | Sam   | 60000  | Null      |
// | 4  | Max   | 90000  | Null      |
// +----+-------+--------+-----------+
// Output: 
// +----------+
// | Employee |
// +----------+
// | Joe      |
// +----------+
// Explanation: Joe is the only employee who earns more than his manager.
select name from employee E
where E.salary>(
  select emp.salary from employee E
  where emp.id=E.managerID
)

select E.name from employee E
join employee Emp
on E.id = Emp.Managerid
where E.salary>Emp.salary  
