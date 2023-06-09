-- ---------------------------------
-- Name: Omar Abdel Rahman Abbas  --
-- Code: 162021603                --
-- Dep: Software                  --
-- ---------------------------------

-- Create the 'school' database
CREATE DATABASE school;

-- Switch to the 'school' database
USE school;

-- Create the 'students' table
CREATE TABLE students (
    id INT PRIMARY KEY,
    name VARCHAR(255)
);

-- Create the 'attendance' table with a foreign key reference to 'students' table
CREATE TABLE attendance (
    date DATE,
    student_id INT,
    FOREIGN KEY (student_id) REFERENCES students(id)
);

-- Insert students records
INSERT INTO students (id, name)
VALUES
    (1, 'Omar'),
    (2, 'Ahmed'),
    (3, 'Mohamed'),
    (4, 'Fatima'),
    (5, 'Aisha'),
    (6, 'Ali'),
    (7, 'Layla'),
    (8, 'Youssef');


-- Insert attendance records
INSERT INTO attendance (date, student_id)
VALUES
    ('2023-06-01', 1),
    ('2023-06-01', 2),
    ('2023-06-01', 3),
    ('2023-06-02', 1),
    ('2023-06-02', 4),
    ('2023-06-03', 2),
    ('2023-06-03', 3),
    ('2023-06-04', 1),
    ('2023-06-04', 4),
    ('2023-06-05', 2),
    ('2023-06-05', 5),
    ('2023-06-05', 6),
    ('2023-06-06', 1),
    ('2023-06-06', 3),
    ('2023-06-06', 7),
    ('2023-06-06', 8);

-- Retrieve all records from the 'attendance' table
SELECT * FROM attendance;

-- Retrieve all records from the 'students' table
SELECT * FROM students;

-- ----------------------------------------------------------------------------------------
-- Count the number of distinct student IDs attending on a specific date ('2023-06-01')
SELECT COUNT(DISTINCT student_id) AS attendance_count
FROM attendance
WHERE date = '2023-06-01';


-- Count the number of days Omar attended
SELECT COUNT(DISTINCT date) AS attendance_days
FROM attendance
WHERE student_id = (
    SELECT id
    FROM students
    WHERE name = 'Omar'
);

-- ----------------------------------------------------------------------------------------

-- Perform a left join between 'students' and 'attendance' tables
SELECT students.id, students.name, attendance.date
FROM students
LEFT JOIN attendance ON students.id = attendance.student_id;

-- Perform a right join between 'students' and 'attendance' tables
SELECT students.id, students.name, attendance.date
FROM students
RIGHT JOIN attendance ON students.id = attendance.student_id;


-- ---------------------------------------------------------------
-- Perform a right join on a specific date ('2023-06-02')
SELECT students.id, students.name, attendance.date
FROM students
RIGHT JOIN attendance ON students.id = attendance.student_id
WHERE attendance.date = '2023-06-02';

-- Perform a left join on a specific name ('Omar')
SELECT students.id, students.name, attendance.date
FROM students
LEFT JOIN attendance ON students.id = attendance.student_id
WHERE students.name = 'Omar';
-- -------------------------------------------------------------

