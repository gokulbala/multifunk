// Mapping

#include <map>

class Mapping {
public:
	Mapping (void);
	virtual ~Mapping (void);

	const std::string name (int number);
	void printList (void);

private:
	std::map<int, std::string> _map;
};
