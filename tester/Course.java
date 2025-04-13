package com.mycompany.tester;


public class Course {
    private String eTitle;
    private String eDay;
    private String eTime;
    private String eVenue;
    private double eMark;
    
    public Course(String eTitle, String eDay,String eTime,String eVenue,double eMark){
        this.eTitle = eTitle;
        this.eDay = eDay;
        this.eTime = eTime;
        this.eVenue = eVenue;
        this.eMark = eMark;
    }
    
    public String geteTitle(){
        return eTitle;
    }
    public String geteDay(){
        return eDay;
    }
    public String geteTime(){
        return eDay;
    }
    public String geteVenue(){
        return eVenue;
    }
    public double geteMark(){
        return eMark;
    }
    //setter
    public void seteTitle(String eTitle){
        this.eTitle = eTitle;
    }
    public void seteDay(String eDay){
        this.eDay = eDay;
    }
    public void seteTime(String eTime){
        this.eTime = eTime;
    }
    public void seteVenue(String eVenue){
        this.eVenue = eVenue;
    }
    public void seteMark(double eMark){
        this.eMark = eMark;
    }
    @Override
    public String toString(){
        return "eTitle = "+eTitle+ "eDay = "+eDay+ "eTime = "+eTime + "eMark ="+eMark;
    }
    
}
