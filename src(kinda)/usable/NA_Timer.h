#pragma once
class NA_Timer
{
private:
	time_t duration;
	time_t start;
public:
	NA_Timer(void);
	NA_Timer(int d);
	~NA_Timer(void);
	void setDuration(int d);
	bool elapsed();
};

