package auto;

public class car {
	private String make;
	private String model;
	private int year;
	
	public car(String make,String model,int year) {
		this.make=make;
		this.model=model;
		this.year=year;
	}
	public car(String model,int year) {
		this.model=model;
		this.year=year;
	}
	public String setCarMake(String make) {
		this.make=make;
		return make;
		}
	public String getCarMake() {
		return make;
	}
	
	public String setcarModel(String model) {
		this.model=model;
		return model;
	}
	public String getCarModel() {
		return model;
	}
	public int setCarYear(int year) {
		this.year=year;
		return year;
	}
	public int getCarYear() {
		return year;
	}
	public String toString() {
		return "Car make:"+make+",model:"+model+",Car year:"+year;
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		car car1=new car("Ford","f234",2010);
		car car2=new car("Fortuner","67GG",2018);
		car car3=new car("Jeep","Jy87",2020);
		
		
		options opt1=new options("satellite","AutoDrive","FlexFuel");
		options opt2=new options("Terestrial","standard","Gas");
		options opt3=new options("satellite","standard","DualFuel");
		
		System.out.println(car1.toString());
		System.out.println(opt1.toString());
		
		System.out.println(car2.toString());
		System.out.println(opt2.toString());
		
		System.out.println(car3.toString());
		System.out.println(opt3.toString());
	}

}
