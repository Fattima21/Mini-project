-- CREATE DATABASE lab_assignment_db;
--TASK 1:

--CREATE TABLE students(
--student_id INT PRIMARY KEY IDENTITY(1,1),
--first_name VARCHAR(50),
--last_name VARCHAR(50),
--birth_date DATE
--);
/*
INSERT INTO students(first_name,last_name,birth_date)VALUES
('John','Doe','1998-05-15'),
('Jane','Smith','2001-02-28'),
('Mike','Johnson','1997-09-10'),
('Emily','Davis','1999-11-22'),
('Alex','Wilson','2000-08-05');
SELECT*FROM students;*/

-- SELECT first(name) AS 'first_name' AND last(name)AS 'last_name' FROM students;
 SELECT CONCAT(first_name,'_',last_name) FROM students WHERE birth_date>'2001-02-28';
 
-- write query:
SELECT students.name,coursee.course_name
-FROM students
 JOIN entrollments ON students.id=entrollments.student_id
 JOIN courses ON entrollment.course_id=courses.course_id;


--2:
--CREATE TABLE courses(
--course_id INT PRIMARY KEY IDENTITY(1,1),
--course_name VARCHAR(100),
--instructor VARCHAR(50),
--redits INT
--);
/*INSERT INTO courses(course_name,instructor,credits)VALUES
('Indtroduction to Programming','Prof.Anderson',4),
('Database Management','Prof.Smith',3),
('Web Development','Prof.Jahnson',5),
('Statistics','Prof.Davis',3),
('English Literature','Prof.Wilson',4);
SELECT*FROM courses;*/

-- SELECT course(names)AS 'course_name' , instroctor FROM courses;

--3:
--CREATE TABLE entrollments(
--entrollment_id INT PRIMARY KEY IDENTITY(1,1),
--student_id INT FOREIGN KEY REFERENCING  students.student_id,
--course_id INT FOREIGN KEY REFERENCING courses.course_id,
--grade VARCHAR(2)
--);
--INSERT INTO entrollments(student_id,course_id,grade)VALUES
--(1,1,'B'),
--(1,2,'A'),
--(4,2,'A');
--SELECT*FROM entrollments;
-- DELETE FROM entrollment ;

--UPDATE entrollments SET grade='A' WHERE grade='B';
--SELECT*FROM entrollments;



--Challenge:
-REATE TABLE department(
department_id INT PRIMARY KEY IDENTITY(1,1),
department_name VARCHAR(50)
);
--INSERT INTO department(department_name)VALUES
--('Science'),
--('Humanities'),
--('Engineering');


--ALTER TABLE department_id;
--ADD column department_id INT UNSIGNED NOT NULL;

--ALTER TABLE product_id
--ADD A FOREIGN KEY department_id AS A FOREIGN KEY REFERENCING BY department;




