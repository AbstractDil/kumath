/*  

Name : Sagar Nandy

University Roll Number : 96/AMT 210034

Department Of Mathematics

Electricity  energy Charge  Program Using C 

          UNIT            RATE PER UNIT (WBSEDCL)
 ===========================================================    
         1-102                    Rs. 5.30    
         103-180                  Rs. 5.97
         181-300                  Rs. 6.97
         301-600                  Rs. 7.31
         601-900                  Rs. 7.58
         Above 900                Rs. 8.99

1. Fixed Charge = 45 for 3 months; 
2. Meter rent = 30 ; 
3. Monthly variable cost adjustment = 38.41;
4. Govt. Subsidy = -183.18; 

unit consumed = 167; 
Total = 858.88;

*/


#include<stdio.h> 

int main()

{

// declare unit  variable 
int unit;

// declare energyCharge variable
float totalBill, energyCharge, fixedCharge , meterRent = 30.00, mvca = 38.41, gvtSbsdy = -183.18 ; 
// mvca = monthly variable cost adjustment;

printf("Enter your electricity consumption in units : ");

scanf("%d", &unit);

fixedCharge = 3*15;  // per month 15 

if(unit <= 102){

    energyCharge = 5.30*unit;
}

else if(unit <= 180){
    
    energyCharge = (5.30 * 102) + (5.97*(unit - 102));
}

else if(unit <= 300){
    
    energyCharge = (5.30 * 102) + (5.97*180) + (6.97*(unit - 282));
}


else if(unit <= 600){
    
    energyCharge = (5.30 * 102) + (5.97 * 180) + (6.97 * 300) + (7.31*(unit - 582));
}

else if(unit <= 900){
    
    energyCharge = (5.30 * 102) + (5.97 * 180) + (6.97*300) + (7.31*600) + (7.58*(unit - 1182));
}

else if(unit > 900){
    
    energyCharge = (5.30 * 102) + (5.97 * 180) + (6.97*300) + (7.31*600) + (7.58*900) + (8.99*(unit - 2082));
}



printf(" Total energy charge is : Rs. %0.2f \n", energyCharge);

printf(" Fixed charge is : Rs. %0.2f \n", fixedCharge);

printf(" Meter rent is : Rs. %0.2f \n", meterRent);

printf(" Monthly variable cost adjustment is : Rs. %0.2f \n", mvca);

printf(" Government subsidy is  : Rs. %0.2f \n", gvtSbsdy);

// Total Bill 

totalBill = energyCharge + fixedCharge + meterRent + mvca + gvtSbsdy;

printf(" Total Charge : Rs. %0.2f \n", totalBill);

return 0;

}

/* OUTPUT : 
Enter your electricity consumption in units : 167
 Total energy charge is : Rs. 928.65
 Fixed charge is : Rs. 45.00
 Meter rent is : Rs. 30.00
 Monthly variable cost adjustment is : Rs. 38.41
 Government subsidy is  : Rs. -183.18
 Total Charge : Rs. 858.88
 */
