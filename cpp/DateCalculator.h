class Date{
	private:
		int year_;
		int month_;
		int day_;
	public:
		Date();		
		~Date();
		void setDate(int year, int month, int date);
		void addDay(int inc);
		void addMonth(int inc);
		void addYear(int inc);
		void showDate();
};


