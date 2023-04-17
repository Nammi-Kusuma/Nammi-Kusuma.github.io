#include <stdio.h>   
  
int main()  
{  
  int units; 
	int i;
  float total_bill; 
  printf("\n\n\t\t WELLCOME TO ELECTRTICITY BOARD DEPPARTMENT\n\n");   printf("\t       ELECTRICITY BILL FOR HOUSEHOLDS (Rates/Unit)\n\n");  
   for(i=0;i<64;i++)
		printf("-");
  printf("\n");
    printf("\n\tUpto 20 Units .............................. =Rs.3/Unit      |\n\n");  
  
    printf("\t21 To 30 Units .............................. =Rs.7/Unit     |\n\n");  
  
    printf("\t31 To 50 Units .............................. =Rs.8.5/Unit   |\n\n");  
    
    printf("\t51 To 150 Units ..............................=Rs.10/Unit    |\n\n");  
  
    printf("\t151 To 250 Units .............................. =Rs.11/Unit  |\n\n");  
  
    printf("\t251 To 400 Units .............................. =Rs.12/Unit  |\n\n");  
  
    printf("\t400+ Units ................................. =Rs.13/Unit     |\n\n");  
	for(i=0;i<64;i++)
		printf("-"); 
  printf("\n\n\n");
  
    //printf("\nPlease Enter Your Total Units Consumed : \n\n");  
 
    //scanf("%d", & units);  

    printf("| Ceiling fan(with avg of 16 hours)..........=1.2 kwh =1.2 units\n\n");

    printf("| Ceiling lights(with an avg of 6 hours).......=2 kwh = 2 units\n\n");

    printf("| Air Conditioner(per hour)..........................=7.2 units\n\n");

    printf("| Washing Machine(per hour).........................=1 unit\n\n");

    printf("| Refrigerator(per day)..............................=2 units\n\n");

    printf("| Mixer (per hour)...................................=0.7 units\n\n");

    printf("| Grinder(per hour)..................................=0.7 units\n\n");

    printf("| Television(for 12 hours).......................=1.2 units\n\n");

    printf("| Electric Motor(per hour).......................=0.7 units\n\n\n\n\n\n\n");

    int fans,lights;
    float fans_usage,lights_usage,AC_usage,WM_usage,RF_usage,mixer_usage,grinder_usage,TV_usage,EM_usage,additional_usage;

    float cfu,clu,acu,wmu,rfu,mu,gu,tvu,emu,addiu;

    printf("Enter how many fans do you have in your house :\n");
    scanf("%d",&fans);

    printf("Enter the usage of fans in hours:\n");
    scanf("%f",&fans_usage);
    printf("\n\n");

    printf("Enter how many lights do you have in your house :\n");
    scanf("%d",&lights);

    printf("Enter the usage of lights in hours:\n");
    scanf("%f",&lights_usage);
    printf("\n\n");

    printf("Enter the usage of AC in hours:\n");
    scanf("%f",&AC_usage);
    printf("\n\n");

    printf("Enter the usage of Washing machine in hours:\n");
    scanf("%f",&WM_usage);
    printf("\n\n");

    printf("Enter the usage of Refrigerator in hours:\n");
    scanf("%f",&RF_usage);
    printf("\n\n");

    printf("Enter the usage of mixer in hours:\n");
    scanf("%f",&mixer_usage);
    printf("\n\n");

    printf("Enter the usage of grinder in hours:\n");
    scanf("%f",&grinder_usage);
    printf("\n\n");

    printf("Enter the usage of TV in hours:\n");
    scanf("%f",&TV_usage);
    printf("\n\n");

    printf("Enter the usage of Electric Motor in hours:\n");
    scanf("%f",&EM_usage);
    printf("\n\n");

    printf("If any additional usage enter the no of units you have consumed additionally:\n");
    scanf("%f",&additional_usage);

    cfu=fans*(1.2*fans_usage)/16;
    clu=lights*(2*fans_usage)/6;
    acu=AC_usage*7.2;
    wmu=WM_usage*1;
    rfu=RF_usage*2/24;
    mu=mixer_usage*0.7;
    gu=grinder_usage*0.7;
    tvu=TV_usage*1.2/12;
    emu=EM_usage*0.7;
    addiu=additional_usage;

    float total_usage=cfu+clu+acu+wmu+rfu+mu+gu+tvu+emu+addiu;
    units=(int)total_usage;
  
    if (units <= 20)  
      total_bill = units * 3;  
  
    else if (units <= 30)  
      total_bill = units * 7;  
  
    else if (units <= 50)  
      total_bill = units * 8.5;  
  
    else if (units <= 150)  
      total_bill = units * 10;  
  
    else if (units <= 250)  
      total_bill = units * 11;  
  
    else if (units <= 400)  
      total_bill = units * 12;  
  
    else 
      total_bill = units * 13;  
   
    printf("\n\nYour Total Bill Is Rs.%.2f", total_bill);  

}  