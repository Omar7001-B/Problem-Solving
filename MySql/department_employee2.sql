SHOW DATABASES;
DROP DATABASE world;
CREATE DATABASE company;
USE company;
SHOW TABLES;

CREATE TABLE employee (
  id INT PRIMARY KEY,
  name VARCHAR(50),
  age INT,
  salary DECIMAL(10, 2),
  department_id INT,
  FOREIGN KEY (department_id) REFERENCES department(department_id)
);

CREATE TABLE department (
  department_id INT PRIMARY KEY,
  name VARCHAR(50)
);


-- Insert data into the department table
INSERT INTO department (department_id, name)
VALUES
  (1, 'HR'),
  (2, 'Finance'),
  (3, 'Marketing');

-- Insert data into the employee table
INSERT INTO employee (id, name, age, salary, department_id)
VALUES
  (1, 'John Doe', 30, 5000.00, 1),
  (2, 'Jane Smith', 35, 6000.00, 1),
  (3, 'Mike Johnson', 28, 5500.00, 2),
  (4, 'Emily Davis', 32, 6500.00, 3),
  (5, 'David Wilson', 29, 5200.00, 2);
  
SELECT * FROM employee;
SELECT * FROM department;
  
