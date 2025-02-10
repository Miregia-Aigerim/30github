SELECT Employee.name, Bonus.bonus
FROM Employee
LEFT JOIN Bonus ON Employee.empId = Bonus.empId
where bonus.bonus<1000 or bonus.bonus is null;