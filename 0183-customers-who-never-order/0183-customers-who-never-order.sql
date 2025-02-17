# Write your MySQL query statement below
select name as customers from customers a
where a.id  not in (select customerId from orders);