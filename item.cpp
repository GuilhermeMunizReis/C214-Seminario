#include <string>

#include "item.h"

using namespace std;

Item::Item(const string& name) : name(name) {}

const string& Item::getName() const {
	return name;
}