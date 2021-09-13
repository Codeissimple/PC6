

class Inventory
{
   private:
       int itemNumber;              //This integer holds the item's ID number
       int quantity;                // This int is holding the quantity of the items on hand
       double cost;                 //this double is holding the wholesale per-unit cost of an item.
       double totalCost;            //This double is holding the total inventory cost of the item(quantity times cost)

   public:
       Inventory();                 //Constrictor #1 Sets the member vairables to zero
       Inventory(int, int, double); // Constructor #2 accepts item's ID, cost and quantity as arguments
       void setItemNumber(int);     //Accepts an integer argument that is copied to the itemNumber member variable
       void setQuantity(int);       //Accepts an integer argument that is copied to the quantity member variable
       void setCost(double);        //Accepts a double argument that is copied to the cost member variable
       void setTotalCost();         // Calculates the total inventory cost for the item (quantity * cost) and stores the result in totalCost
       int getItemNumber();         //Returns the value in itemNumber
       int getQuantity();           //Returns the value in quantity
       double getCost();            //Returns the value in cost
       double getTotalCost();       //Returns the value in totalCost

};