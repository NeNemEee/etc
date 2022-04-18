#pragma once
#include <iostream>
#include <cmath>

using namespace std;

struct Point{
	int x;
	int y;
	int area;

	Point(int _x, int _y) {
		x = _x;
		y = _y;
		area = (int)pow(x, 2) + (int)pow(y, 2);
	};

	~Point() {

	};
	/*������ ũ�� ��*/
	bool operator<(const Point& d) {
		return area < d.area;
	}

	bool operator<(const int& d) {
		return area < d;
	}

	bool operator>(const Point& d) {
		return area > d.area;
	}

	bool operator>(const int& d) {
		return area > d;
	}

	bool operator==(const Point& d) {
		return area == d.area;
	}

	bool operator==(const int& d) {
		return area == d;
	}

	bool operator>=(const Point& d) {
		return area >= d.area;
	}

	bool operator>=(const int& d) {
		return area >= d;
	}

	bool operator<=(const Point& d) {
		return area <= d.area;
	}

	bool operator<=(const int& d) {
		return area <= d;
	}

	Point operator+(const Point& d) {//���� ���ϱ�
		return Point(x + d.x, y + d.y);
	}

	Point operator-(const Point& d) {//������ ����
		return Point(x - d.x, y - d.y);
	}

	Point operator*(const Point& d) {//���� �����ε�
		return Point(y * d.x - x * d.y, x * d.y - y * d.x);
	}

	//�������� ũ�� ��
	friend bool operator<(const int& d, Point& pos);
	friend bool operator>(const int& d, Point& pos);
	friend bool operator<=(const int& d, Point& pos);
	friend bool operator>=(const int& d, Point& pos);
	friend bool operator==(const int& d, Point& pos);
	
	
	//���� ��ǥ ���
	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.x << ',' << pos.y << ']' << endl;
	return os;
}

bool operator<(const int& d, Point& pos) {
	return d < pos.area;
}

bool operator>(const int& d, Point& pos) {
	return d > pos.area;
}

bool operator<=(const int& d, Point& pos) {
	return d <= pos.area;
}

bool operator>=(const int& d, Point& pos) {
	return d >= pos.area;
}

bool operator==(const int& d, Point& pos) {
	return d == pos.area;
}