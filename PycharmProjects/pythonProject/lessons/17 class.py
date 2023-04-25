class employee:
    company='Google'
    salary=10000

Alex=employee()
Hritik=employee()
print(Hritik.company)
print(Alex.company)
employee.company='microsoft'
print(Hritik.company)
print(Alex.company)

Hritik.salary=25000

print(Hritik.salary)
print(Alex.salary)


