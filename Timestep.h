#pragma once

class Timestep
{
private:
	float m_time;

public:
	Timestep(float time = 0.0f)
		: m_time(time) {}

	float getSeconds() const { return m_time; }

	float getMilliseconds() const { return m_time * 1000; }
};