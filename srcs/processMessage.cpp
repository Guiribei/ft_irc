#include "ft_irc.cpp"

template <typename T> 
void executeCommand(T func)
{
	
}


// struct Nick {do()};
// struct Name {do()};
// T::do()
void processMessage(Message msg)
{
	std::string	options[] = {"NICK", "JOIN", "WARNING", "ERROR"};
	void (Command::*ptrs[4])() = {&nick, &join, &Harl::warning, &Harl::error};
}