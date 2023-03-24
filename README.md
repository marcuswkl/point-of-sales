# point-of-sales
Build a simulation of “Point of Sales” C program for annual sales for **BestPrice** mall that fulfil the below requirements:

1.	Print a unique greeting message and the mall simple logo for your point of sales program. Prompt user to know either they have membership with the mall.

2.	After that, the program should allow user to choose from the 5 options below:

    Option 1: Product and Price details  
    Option 2: Calculate price of purchased items  
    Option 3: Calculate the delivery charges  
    Option 4: Calculate total pay amount  
    Option 5: Exit

**Note**: Your program should use a **switch..case** statement to determine the option chosen by the user.

<u>**Option 1 requirements:**</u>

Display the product details (product code, price, discounts (if applicable)) 

Given that the retail products sold by BestPrice mall are limited to four and the details as listed below:

| **Product Code** | **Product Description** | **Retail Price (RM)** | **Special Discount** |
| ----------- | ----------- | ----------- | ----------- |
| 101 | Wall Scrapper | 100.00 | - |
| 202 | Tiles Waxes | 350.00 | - |
| 303 | Mud/Tar Remover | 500.00 | 20% Discount |
| 404 | Dry Blower | 850.00 | 25% Discount |

Note that some of the products have special discounts. The discounts are applied on the retail price. 

<u>**Option 2 requirements:**</u>

The program should read in a **series** of products (product code and quantity) purchased by customer.  Same product code can be entered more than once. 

Then the program should calculate the subtotal (quantity*price*discount) of each product purchased and the grand total of all the products.  

<u>**Option 3 requirements:**</u>

The program should request user to key in the delivery destination’s distance in KM.  (e.g. 33.15 km). 

Given the calculation of delivery charges as below:

| **Delivery Charges** |
| ----------- |
| RM50.00 for the first 30km and below. Every subsequent km or part thereof will be charged additional RM3.00 per km.  
Note: Delivery service is available only to places within 100km. |

The program should display the total charges for delivery. 

<u>**Option 4 requirements:**</u>

Your program should calculate and display the grand total amount in a neat format by listing out:

•	The Total Bill  - product purchased + delivery charges  
•	The Grand Total - after 10% government tax of the total bill  
•	The Pay Amount : If the customer has membership and total purchased amount is between 800-1000, he/she get additional 10% discount and if the purchased amount more than 1000, the customer get additional 12% discount. No any additional discounts for non-members.  

NOTES:
1.	You are encouraged to improve your code structure by using any additional controls, validations, or messages which you think it’s relevant and appropriate.
2.	You are allowed to have variances of display design, arrangement or format, as long as it fulfilled the requirement stated above.
3.	Include internal comments where possible within your code.
