<ins>**Problem Statement**</ins>

Adam wishes to go to the supermarket to purchase groceries for his home.

When he was finished, he went to pay, and noticed that all chasiers were lined up, but he is in a hurry because his favorite football team is playing tonight.

He requests that you assist him in selecting the cashier to pay for and exiting the supermarket quickly as possible


Given N cachiers, each cachier_1 processes a client at a rate of R_1.  
R_i is the amount of time it takes the cachier to complete a one-second task.  
You have been assigned N cLients. Every cLient.1 wIll be added fo the cachier_1's queue (First in First out).  
Every client will have a payment that takes exactly one second.  
Adam will be the final one to arrive. Your job is to assist him in determining which queue will result in the least amount of waiting time.


<ins>**Input Format :**</ins>  
The first line contains an integer 1 ≤ N ≤ 10^5, the number of cachiers present at the queue in the beginning.  
The next line contains 1 ≤ R_1 ≤ 10^9, the client's proccessing rate for the cachier_i  
In the next line you are given an integer 1 ≤ M ≤ 2*10^5, the number of clients in the queues.  
The next M lines contal one integer 3 ≤ i ≤ M, the cachier queue_id associated to client_i  


<ins>Input</ins>  
4  
2 3 5 6  
8  
4  
1  
3  
2  
3  
1  
1  
2  

<ins>**Output Format :**</ins>  
Print the cachier's queue_id and the duration he needed to wait for before completing his payment  
If there are multiple answers, print the one with the lowest queue_id.  

<ins>Output</ins>  
1 6

