package com.mycompany.tester;

public class Student {
    private int id;
    private String name;
    private Course[] modules = new Course[3];
    private double average;
    private String program;
    
    public Student(int id, String name, Course[] modules, String program) {
        this.id = id;
        this.name = name;
        this.modules = modules;
        this.program = program;
        calcAverage();
    }
     public int getid() {
        return id;
    }
     public String getName() {
        return name;
    }
     public Course[] getModules() {
        return modules;
    }
     public double getAverage() {
        return average;
    }
     public String getProgram() {
        return program;
    }

    public void setid(int id) {
        this.id = id;
    }

    

    public void setName(String name) {
        this.name = name;
    }

    

    public void setModules(Course[] modules) {
        this.modules = modules;
    }

    public void setAverage(double average) {
        this.average = average;
    }
    
    public void setProgram(String program) {
        this.program = program;
    }
    
    public void calcAverage() {
        double sum = 0;
        for (Course module : modules) {
            sum += module.geteMark();
        }
        this.average=sum / modules.length;
    }
    
    
    public String toString() {
        return "name + "+getName()+"program = "+getProgram()+"average ="+getAverage();
                
                
    }
}

    

