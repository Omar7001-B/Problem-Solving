CREATE DATABASE school;
SHOW DATABASES;
SHOW TABLES;
USE school;
CREATE TABLE students (
	student_id INT PRIMARY KEY,
    student_name VARCHAR(50) NOT NULL,
    student_email VARCHAR(50) NOT NULL
);

INSERT INTO students VALUES (1, 'Omar Abbas', 'Omar@email.com');
INSERT INTO students VALUES (2, 'Ahmed Hossam', 'Ahmed@email.com');
INSERT INTO students VALUES (3, 'Mohamed Ramadan', 'Mohamed@email.com');

SELECT * from students;

CREATE TABLE courses (
	course_id INT PRIMARY KEY,
    course_name VARCHAR(50) NOT NULL,
    course_description VARCHAR(255) NOT NULL
);

INSERT INTO courses VALUES (1, 'Math1', 'We Love Math');
INSERT INTO courses VALUES (2, 'Math2', 'We Love Math');
SELECT * from courses;

SELECT * from students LIMIT 2;

CREATE TABLE students_courses (
	student_id INT,
    course_id INT,
    PRIMARY KEY (student_id, course_id), 
    FOREIGN KEY (student_id) REFERENCES students(student_id),
    FOREIGN KEY (course_id) REFERENCES courses(course_id)
);

SHOW TABLES;
SELECT * FROM students;
SELECT * FROM courses;
SELECT * FROM students_courses;
INSERT INTO students_courses VALUES (1, 1);

DROP DATABASE school;

SHOW DATABASES;

USE sys;
SHOW TABLES;



CREATE DATABASE school;
USE school;

CREATE TABLE students(
	student_id INT PRIMARY KEY,
    student_name VARCHAR(50) NOT NULL,
    student_email VARCHAR(50) NOT NULL
);

INSERT INTO students VALUES (1, 'Omar', 'Omar@email.com');
INSERT INTO students VALUES (2, 'Mohamed', 'Mohamed@email.com');

CREATE TABLE courses(
	course_id INT PRIMARY KEY,
    course_name VARCHAR(50) NOT NULL,
    course_description VARCHAR(255) NOT NULL
);

INSERT INTO courses VALUES (1, 'math1', 'Differential equations');
INSERT INTO courses VALUES (2, 'phys', 'Forces and electrons');

CREATE TABLE students_courses(
	student_id INT,
    course_id INT,
    PRIMARY KEY (student_id, course_id),
    FOREIGN KEY (student_id) REFERENCES students(student_id),
    FOREIGN KEY (course_id) REFERENCES courses(course_id)
);

INSERT INTO students_courses VALUES (1, 1);
INSERT INTO students_courses VALUES (1, 2);
INSERT INTO students_courses VALUES (2, 1);

ALTER TABLE students ADD COLUMN gpa double NULL;

UPDATE students
SET gpa = 100.5
WHERE student_id = 2;

SELECT * FROM students;
SELECT * FROM courses;
SELECT * FROM students_courses;



