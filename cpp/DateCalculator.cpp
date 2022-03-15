#include<E:\github\DateCalculator.h>

Date::Date(){
}

Date::~Date(){
}

void Date::setDate(int year, int month, int date){
	this->year_ = year;
	this->month_ = month;
	this->day_ = date;
}

void Date::addDay(int inc){
	while(inc>0){
		if(this->month_ == 1||this->month_ == 3||this->month_ == 5||this->month_ == 7||this->month_ == 8||this->month_ == 10||this->month_ == 12){
			if(inc>31){
				inc = inc - 31;
				this->month_ = this->month_ + 1;
			}else{
				this->day_ = this->day_ + inc;
				inc = 0;
				
				if(this->day_>31){
					this->month_ = this->month_ + 1;
				}
			}
		}else if(this->month_ == 2){
			if(this->year_ %4 == 0 && this->year_%100 != 0 && this->year_%400 == 0){
				if(inc>29){
					inc = inc - 29;
					this->month_ = this->month_ + 1;
				}else{
					this->day_ = this->day_ + inc;
					inc = 0;
				}
				
				if(this->day_>29){
					this->day_ - 29;
					this->month_ = this->month_ + 1;
				}
			}else{
				if(inc>28){
					inc = inc - 28;
					this->month_ = this->month_ + 1;
				}else{
					this->day_ = this->day_ + inc;
					inc = 0;
				}
				
				if(this->day_>28){
					this->day_ - 28;
					this->month_ = this->month_ + 1;
				}				
			}
		}else{
			if(inc>30){
				inc = inc - 30;
				this->month_ = this->month_ + 1;
			}else{
				this->day_ = this->day_ + inc;
				inc = 0;
				
				if(this->day_>30){
					this->month_ = this->month_ + 1;
				}
			}
		}
	}
	
		
	if(this->month_>12){
		while(this->month_>12){
			this->month_ = this->month_ - 12;
			this->year_ = this->year_ + 1;
		}
	}
	
}

void Date::addMonth(int inc){
	if(inc/12>0){
		this->year_ = this->year_ + inc/12;	
	}				
	inc = inc%12;
	this->month_ = this->month_ + inc;
	
	if(this->month_>12){
		while(this->month_>12){
			this->month_ = this->month_ - 12;
			this->year_ = this->year_ + 1;
		}
	}
}

void Date::addYear(int inc){
	this->year_ = this->year_ + inc;
}

void Date::showDate(){
	printf("year : %d\n", this->year_);
	printf("month : %d\n", this->month_);
	printf("day : %d\n", this->day_);
}

