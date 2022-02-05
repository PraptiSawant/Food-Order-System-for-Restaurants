# Food-Order-System-for-Restaurants
Food Order Management System is based on the concept of ordering food and managing employee records. Implemented using C structures and file structures.

Fod Order Management System is based on the concept of ordering food and managing employee records. 
There’s no login system available for this system, the user can freely use its feature. 
This application has two categories; Admin section and customer section. 
Admin section, from where the user can manage employee  by adding records of the employee ,view the employee details and viewing the orders placed and in the customer section,  a user can order food. 
This mini project contains limited features, but the essential one. 

Functions used in the program
1)void main(void)
This is the main function of the code .this is used to display the main section of the restaurant.this include administration section,customer section, about the restaurant and the exit.T
The user can choose any of these by selecting the number corresponding to it.

2)void admin(void)
Entering 1 in the main function the user enters into the admin() function where the user can enter the records and view the records of the employee. 
The user can also view the orders placed by the customers .

3) void addrec(void)
Entering 1 in the admin function the user enters into the addrec() function where the user can enter the records of the employee by filling details like name,address ,phone and id. 
This information of the employee get saved in file name worker.txt.

4)void viewrec(void)
Entering 2 in the admin function the user enters into the viewrec() function where the user can view the records of the employee . 
This feature helps the user incase of uncertainities during delivery. This information of the employee is displayed from  file name worker.txt.

5) void cus(void)
Entering 2 in the main() function the user enters into the cus() function .
This is the customer section where the user can order food by choosing his favourite cuisine. This include vegetarian ,non vegetarian and other items. 

6) void vege(void)
Entering 1 in the cus function the user enters into the vege() function where the user can choose any vegetarian dish from the menu displayed .
The user needs to  enter the  food item number and give his details like name,address ,phone  etc. This information of the customer get saved in file name order.txt.

7)void nonvege(void)
Entering 2  in the cus function the user enters into the nonvege() function where the user can choose any non  vegetarian dish from the menu displayed .
The user needs to  enter the  food item number and give his details like name,address ,phone  etc. This information of the customer get saved in file name order.txt.
8)void otheritem(void)
Entering 3 in the cus function the user enters into the other() function where the user can choose any beverages/sweet dish/ice cream dish from the menu displayed . 
The user needs to  enter the  food item number and give his details like name,address ,phone  etc. This information of the customer get saved in file name order.txt.
9)void display(void)
Entering 3 in the admin() function the user enters into the display() function where the restaurant staff  can view the number of orders placed.
10)void details(void)
After the selection of items and the bill the user enter in the details function to enter the details of himself and it also displays a thank you message.
11)void aboutus(void)
Entering 3 in the main() function the user enters into the aboutus() function where the user can view thhe information about the restaurant.
