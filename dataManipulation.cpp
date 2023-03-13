#include <fstream>
#include <vector>
#include <iomanip>
#define FILEPATH "UnsortedData.txt"

std::vector<long double> dataRead() {
	std::vector<long double> array;
	std::ifstream file(FILEPATH);
	file >> std::setprecision(4);
	file >> std::fixed;
	if (!file.good()) {
		std::vector<long double> ERR = { -1 };
		return ERR;
	}
	long double tempData = 0;
	while (file >> tempData) {
		array.push_back(tempData);
	}
	file.close();
	return array;
}

void dataWrite(std::vector<long double> _data, std::string algorithmUsed) {
	int numOfElem = _data.size();
	std::ofstream file(algorithmUsed,std::ios::trunc|std::ios::out);
	file << std::setprecision(4);
	file << std::fixed;
	for (int i = 0; i < numOfElem; i++) {
		file << _data[i] << "\n";
	}
	file.close();
}