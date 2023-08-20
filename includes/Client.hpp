#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>

class Client
{
	private:
	
	static int _idCounter;
	
	protected:

	int _fd;
	int _id;
	std::string _name;
	std::string _nick;
	
	public:

	Client(void);
	Client(int fd);
	~Client(void);
	
	int getId(void) const;
	void setId(const int &id);
	int getFd(void) const;
	void setFd(const int &fd);
	std::string const getName(void) const;
	void setName(const std::string &name);
	std::string const getNick(void) const;
	void setNick(const std::string &nick);
};

#endif