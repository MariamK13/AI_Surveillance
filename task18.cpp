#include <iostream>
#include <stdexcept>

template<typename T>
class Shape {
public:
	virtual T area () const = 0;
	virtual void errorHandler () const = 0; 
	virtual ~Shape () {}
};

template<typename T, typename U>
class Circle: public Shape<U> {
private:
	T m_radius;

public:
	Circle(T r) : m_radius(r) {}
	U area () const override {
		errorHandler();
		return m_radius * m_radius * 3.14;
	}
	void errorHandler() const override {
		if (m_radius <= 0) {
			throw std::invalid_argument("Invalid argument"); 
		}
	}
};

template<typename T>
class Rectangle: public Shape<T>{
private:
	T m_width;
	T m_length;

public:
	Rectangle(T width, T length) : m_width(width), m_length(length) {}
	T area() const override {
		errorHandler();
		return m_width * m_length;
	}
	void errorHandler() const override {
		if (m_width <= 0 || m_length <= 0) {
			throw std::invalid_argument("Invalid argument");
		}
	}
};


int main()
{
	try {
		Circle<int, double> c(6);
		Rectangle<int> r(0, 8);
		std::cout << "The area of a circle: " << c.area() << std::endl;
		std::cout << "The area of a rectangle: " << r.area() << std::endl;
	} catch (const std::invalid_argument& e) {
		std::cout << "error: " << e.what() << std::endl;
	}
}
	
