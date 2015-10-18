#ifndef STOCK30_H_
#define STOCK30_H_
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock(); // default constructor
	Stock(const std::string & co, long n, double pr);
	~Stock() {} // do-nothing destructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const Stock & topval(const Stock & s) const;
	int numshares() const { return shares; }
	double shareval() const { return share_val; }
	double totalval() const { return total_val; }
	const string & co_name() const { return company; }
};