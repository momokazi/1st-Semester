#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

//structures

struct All{
	
	double pre[5]={0, 30, 45, 60, 90};
	double *ptr, pre_angle, user_angle;
};


struct Sine{
	
	double sin_a;
	int temp;
	float f = 1, sin_rad = 0;
	
};

struct Cos{
	
	double cos_a;
    int temp;
    float cos_rad = 1, f = -1;
    
};
struct Tan{
	
	double tan_a;
	int temp;
	float tan_rad = 0, f = 1;
	
};



		
//functions


 factorial (int n)
{
    double fact = 1;
    while(n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}

		
	
			
sinWave(int temp_ang)
	
	{
	
	int n, angle=0;
	double x, y;
	Sine a;
			
	
	//converting into radians
		
	
	cout << "Enter the accuracy of the result: ";
    cin >> n;
    
    a.temp= a.sin_a= temp_ang;
    a.sin_a= a.sin_a * 22 / (180*7);
    
     
    // Loop to calculate the value of Sine
	 
    
	for (int i = 1; i <= n; i += 2)
    {
         a.sin_rad = a.sin_rad + a.f * pow(a.sin_a,i) / (1.0 * factorial( i ));
         a.f = -a.f;
    }
    
    cout << "sine ("<< a.temp <<") = " << a.sin_rad << endl;
    
     
    	
		//graph 
	
	

 line(0, getmaxy () / 2, getmaxx (), getmaxy ()/2 );
 

 
  //generate a sine wave

 
  for(x = 0; x < getmaxx (); x += 3) 
 {
 
     // calculate y value given x
     
     y = a.temp * sin(angle*3.141/180);
     y = getmaxy()/2 - y;
	
 
     // color a pixel at the given position
  
  putpixel (x, y, WHITE);
  
  //delays the draw action in milliseconds
  
  delay (100);
 
  // increment angle
  
  angle += 5;

 }
 
 
 // deallocate memory allocated for graphics screen
 
  closegraph();
  
 
 
}





cosWave(int temp_ang)

{
	
	int n, angle=0;
	double x, y;
	
	
	//converting into radians
	
	
	Cos b;
	
       
       
	   cout << "Enter the accuracy of the result: " ;
       cin >> n;
       
       b.temp= b.cos_a = temp_ang;
       
       b.cos_a = b.cos_a * 22 / (180 * 7);
       
       
       
       // Loop to calculate the value of Cos
       
    
	
	for(int i = 2; i <= n; i += 2)
    {
         b.cos_rad = b.cos_rad + b.f * pow(b.cos_a,i) / (1.0*factorial(i));
         b.f = - b.f;
    }
    
    
	cout <<"cos("<<b.temp<<") = " << b.cos_rad << endl;
    
	
	//graph
    
    
	line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
    
	//generate a cos wave
    
            
		for(x = 0; x < getmaxx(); x+=3) {
            	
				 //calculate y value given x
        y = b.temp * cos(angle*3.141/180);
     	y = getmaxy()/2 - y;		
 
    
	//color a pixel at given position
    
  
  putpixel(x, y, WHITE);
  
  
  //delays the drawing action
  
  
  delay(100);
 
  
  //increment angle
  
  
  angle+=5;
  
 }
 
  //deallocates memory allocated for graphics screen
 
 closegraph();


}




tanWave(int temp_ang)
{
	
	int n, angle=0;
	double x, y;
			
		//converting into radians
		
	Tan c;	
    
    cout << "Enter the accuracy of the result: ";
    cin >> n;
    
	c.temp = c.tan_a = temp_ang;
    c.tan_a = c.tan_a * 22 / (180*7);
    
     
    // Loop to calculate the value of Tan
	 
    
	for (int i = 1; i <= n; i += 2)
    {
         c.tan_rad = c.tan_rad + c.f * pow(c.tan_a,i) / (1.0 * factorial( i ));
    }
    
    cout << "tan ("<< c.temp <<") = " << c.tan_rad << endl;
    
     
    	//graph 
	
line(0, getmaxy () / 2, getmaxx (), getmaxy () / 2);

 
  //generate a tan wave

 
  for(x = 0; x < getmaxx (); x += 3) 
 {
 
     // calculate y value given x
     
     y = c.temp*tan(angle * 3.141 / 180);
     y = getmaxy()/2 - y;

 
     // color a pixel at the given position
  
  putpixel (x, y, WHITE);
  
  //delays the draw action in milliseconds
  
  delay (100);
 
  // increment angle
  
  angle += 5;

 }
 
 
 // deallocate memory allocated for graphics screen
 
  closegraph();
  
 
 
}


 

int main ()

{

	
	int gd = DETECT, gm;
	initgraph (&gd, &gm, "");
	
	Sine a;
	Cos b;
	Tan c;
	All d;	
	
	int k;
	int index;
do{
	
    system("cls");
    
    cout <<"========================================================================================================================" << endl;
    cout <<"========================================================================================================================" << endl;
    cout <<"================================================   USER MENU   =========================================================" << endl;
	cout << "|Select the trigonometric function you want to use. " << endl;
	cout << "|1. Sine " << endl;
	cout << "|2. Cosine " << endl;
	cout << "|3. Tan " << endl;
	cout << "|4. Exit " << endl;
	
	cin >> k;

	
	
	
	switch (k)
	
	
	{
	
	case 1:
	
		cout<<"Selct a predefined value:\n";
		cout<<"Enter 0 for 0 angle:\n"<<"Enter 1 for 30 angle\n";
		cout<<"Enter 2 for 45 angle:\n"<<"Enter 3 for 60 angle\n";
		cout<<"Enter 4 for 90 angle:\n";
		cout<<"Enter 5 for custom angle:\n ";
		
		cin>>index;
	
		if(index==0||index==1||index==2||index==3||index==4)
	
		{
		  d.pre_angle=d.pre[index];
			d.ptr=&(d.pre_angle);
		  sinWave(*d.ptr);
	    }
	
	    else if(index==5) {
	    	
	    	cout<<"Enter Custom Value: ";
	    	cin>>d.user_angle;
	    	d.ptr = &(d.user_angle);
	    	sinWave(*d.ptr);
	    	
		}
		
 		break;
 		
    case 2:
       	
       	cout<<"Selct a predefined value:\n";
		cout<<"Enter 0 for 0 angle:\n"<<"Enter 1 for 30 angle\n";
		cout<<"Enter 2 for 45 angle:\n"<<"Enter 3 for 60 angle\n";
		cout<<"Enter 4 for 90 angle:\n";
		cout<<"Enter 5 for custom angle:\n ";
		
		cin>>index;
		
		if(index==0||index==1||index==2||index==3||index==4)
	
		{
		  d.pre_angle=d.pre[index];
			d.ptr=&(d.pre_angle);
		  cosWave(*d.ptr);
	    }
	
	    else if(index==5) {
	    	
	    	cout<<"Enter Custom Value: ";
	    	cin>>d.user_angle;
	    	d.ptr = &(d.user_angle);
	    	cosWave(*d.ptr);
	    	
		}
		
       	
       	break;
 
    case 3:
    
		cout<<"Selct a predefined value:\n";
		cout<<"Enter 0 for 0 angle:\n"<<"Enter 1 for 30 angle\n";
		cout<<"Enter 2 for 45 angle:\n"<<"Enter 3 for 60 angle\n";
		cout<<"Enter 4 for 90 angle:\n";
		cout<<"Enter 5 for custom angle:\n ";	
		cin>>index;
	
		if(index==0||index==1||index==2||index==3||index==4)
	
		{
		  d.pre_angle=d.pre[index];
			d.ptr=&(d.pre_angle);
		  tanWave(*d.ptr);
	    }
	
	    else if(index==5){
	    	
	    	cout<<"Enter Custom Value: ";
	    	cin>>d.user_angle;
	    	d.ptr=&(d.user_angle);
	    	tanWave(*d.ptr);
	    }
		
		
    	break;
 	 
 	default:
 		
 		exit(0);
 

}

}
    while(!false);
    return 0;
}

