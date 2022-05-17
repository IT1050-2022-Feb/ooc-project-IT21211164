#include<iostream>
using namespace std;

//Payment class
class Payment
{
  private:
    String paymentID;
    float amount;

  public:
  	Payment();
    void addPaymentDetails();
    void validatePayment();
    ~Payment();
};

Payment::Payment(string payID, float amnt)
{
	paymentID = payID;
	amount = amnt;
}

void Payment::addPaymentDetails(){
  
}

void Payment::validatePayment(){
  
}

Payment::~Payment(){
	
}



//Booking class
class Booking
{
  private:
    string bookingID;
    string bookingDate;
    Payment *pay;

  public:
    Booking(string BID, date bDate, Payment *pay);
    void addBooking();
    void displayBooking();
    float calcTotalAmount();
    ~Booking();
};

Booking::Booking(string BID, string bDate, Payment *p){
  	bookingID = BID);
  	bookingDate = bDate);
  	pay = p;
}

void Booking::addBooking(){
  
}

void Booking::displayBooking(){
  
}

float Booking::calcTotalAmount(){
  
}

Booking::~Booking(){
	cout << "Deleting Booking" << bookingID << endl;
}



//Report class
class Report
{
  private:
    Booking * book[2];

  public:
  	Report();
  	void addNewBooking(Booking *b1, Booking *b2);
    void displayListOfNewBookings();
    ~Report();
};

Report::Report(){
	
}

void Report::addNewBooking(Booking *b1, Booking *b2){
	book[1] = b1;
	book[2] = b2;
}

string Report::displayListOfNewBookings(){
  	for(int i = 0; i < 2; i++)
		book[i]->displayBooking();
}

Report::~Report(){
	
}




//main program
int main()
{
	Payment *P1 = new Payment("P001", 15000.00);
	Payment *P2 = new Payment("P002", 20000.00);
	
	Report * R1 = new Report();
	
	Booking * B1 = new Booking("B001", "2022-05-16", P1);
	Booking * B2 = new Booking("B002", "2022-05-17", P2);
	
	R1->addNewBooking(B1, B2);
	R1->displayListOfNewBookings();
	
	B1->displayBooking();
	B2->displayBooking();
	
	delete P1;
	delete P2;
	delete B1;
	delete B2;
	delete R1;
	
	
}
















