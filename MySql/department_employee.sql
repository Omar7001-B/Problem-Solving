## -------------------------- Department and Emlpyee
CREATE DATABASE	company;
SHOW DATABASES;
USE company;

CREATE TABLE department (
	department_id INT,
    department_name VARCHAR(50),
    department_desc VARCHAR(255),
    PRIMARY KEY(department_id)
);


INSERT INTO department VALUES (1, 'SE', 'Software');
INSERT INTO department VALUES (2, 'HR', 'Human Resources');
INSERT INTO department VALUES (3, 'FIN', 'Finance');
INSERT INTO department VALUES (4, 'MKT', 'Marketing');
INSERT INTO department VALUES (5, 'OPS', 'Operations');

SELECT * FROM department;


CREATE TABLE employee (
	employee_id INT PRIMARY KEY,
    employee_name VARCHAR(50),
    employee_email VARCHAR(50),
    employee_depID INT,
    FOREIGN KEY (employee_depID) REFERENCES department (department_id)
);

ALTER TABLE employee ADD COLUMN employee_salary INT;


INSERT INTO employee VALUES (1, 'Omar Abbas', 'omar123@email.com', 1);
INSERT INTO employee VALUES (2, 'John Smith', 'john.smith@email.com', 1);
INSERT INTO employee VALUES (3, 'Emma Johnson', 'emma.johnson@email.com', 2);
INSERT INTO employee VALUES (4, 'Michael Brown', 'michael.brown@email.com', 2);
INSERT INTO employee VALUES (5, 'Sophia Davis', 'sophia.davis@email.com', 3, 15000);
INSERT INTO employee VALUES (6, 'Sophia Ahmed', 'sophia.davis@email.com', 3, 2400);

SELECT * FROM employee WHERE employee_name LIKE 'So%';

SELECT * FROM employee;

UPDATE employee SET employee_salary = 1700 where employee_id = 1;
UPDATE employee SET employee_salary = 4200 where employee_id = 2;
UPDATE employee SET employee_salary = 6600 where employee_id = 3;
UPDATE employee SET employee_salary = 3500 where employee_id = 4;
UPDATE employee SET employee_salary = 1500 where employee_id = 5;

SELECT * FROM employee WHERE employee_salary > 1700;

SELECT * FROM employee WHERE employee_salary in (1500, 1700) or employee_salary < 5000;

Select * FROM employee ORDER BY employee_salary DESC;

#################### 
#  FOREIGN KEY (department_id) REFERENCES departments(department_id) ON DELETE CASCADE
