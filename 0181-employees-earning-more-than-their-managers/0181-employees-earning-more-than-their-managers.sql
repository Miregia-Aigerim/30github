# Write your MySQL query statement below
SELECT name as employee
FROM employee t
WHERE salary > (SELECT salary FROM employee WHERE t.managerId=id);
