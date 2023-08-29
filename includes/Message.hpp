#pragma once
#ifndef MESSAGE_HPP
#define MESSAGE_HPP

#include "ft_irc.hpp"

struct Message
{
	std::string					prefix;
	std::string					command;
	std::vector<std::string>	args;

	Message();
	Message(std::string, std::string, std::vector<std::string>);
	~Message();
	Message(const Message &other);
	Message &operator=(const Message &other);
};


#endif