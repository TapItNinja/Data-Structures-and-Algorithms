# Write your MySQL query statement below
DELETE p
from Person p
INNER JOIN Person p1
WHERE p.email=p1.email and p.id>p1.id