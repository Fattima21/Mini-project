package com.mycompany.tester;


public class Tester {

    public static void main(String[] args) {
        
        Student[] students = new Student[2];


        Course[] courses1 = {
                new Course(" Discrite Mathematics", "Sundy", "2:30 ", " T13", 25),
                new Course("Physics", "Sunday", "11:00 AM", "s12", 45),
                new Course("OOP", "Wednesday", "12:30 ", "w6", 87)
        };


        Student student1 = new Student(1, "Fatima", courses1, "Chemistry");
        students[0] = student1;


        Course[] courses2 = {
                new Course("English", "Thursday", "10:30 AM", "W3", 50),
                new Course("Academic Writing", "Thursday", "2:15", "w12", 40),
                new Course("System analysis", "Monday", "8:30 PM", " T14", 70)
        };


        Student student2 = new Student(2, "Mawwa", courses2, "History");
        students[1] = student2;


        students[0] = null;
        
        System.out.println("after deletion");

        for (Student student : students) {
            System.out.println(student);
        }


    }
}
    
        

