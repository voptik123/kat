#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[]) {
	if (argc > 1) {
		string flag = argv[1];
			if (flag == "-help") {
				cout << "kat commands\n";
				cout << "-help, -ver, -small,";
				cout << "-big, -say\n";
				return 0;
			}
		if (flag == "-ver") {
			cout << "/\\_/\\         _"; cout << "\n";
			cout << "|0 0|       / /"; cout << "    kat version 0.1\n";
			cout << "\\    \\____/ /"; cout << "\n";
			cout << " |   __    /"; cout << "       created by voptik123\n";
			cout << "/_/_/  \\_\\_\\"; cout << "\n";
			return 0;
	}
		if (flag == "-small") {
			cout << "|\\___/|\n";
			cout << "| o_o |\n";
			cout << " \\_^_/\n";
			return 0;
		}
		if (flag == "-big") {
			cout << "                         _\n";
			cout << "                        | \\ \n";
			cout << "                        | |\n";
			cout << "                        | |\n";
			cout << "  |\\                    | |\n";
			cout << " /, ~\\                 / /\n";
			cout << "/     '-.....-------./ /\n";
			cout << "~-.                    |\n";
			cout << "   \\              /    |\n";
			cout << "    \\   /_     __\\   /\n";
			cout << "      | |\\ ~~~~~  \\  |\n";
			cout << "      | |\\ \\      || |\n";
			cout << "      | | | |     || )\n";
			cout << "     (_/ (_/     ((_/\n";
			return 0;
		}
		if (flag == "-say") {
			string say;
			getline(cin, say);
			cout << say;
			cout << "\n   \\  \n";
			cout << "/\\_/\\         _"; cout << "\n";
			cout << "|0 0|       / /"; cout << "\n";
		        cout << "\\    \\____/ /"; cout << "\n";
		        cout << " |   __    /"; cout << "\n";
			cout << "/_/_/	\\_\\_\\"; cout << "\n";
			return 0;
		}
	}
	cout << "/\\_/\\         _"; cout << "\n";
	cout << "|0 0|       / /"; cout << "\n";
	cout << "\\    \\____/ /"; cout << "\n";
	cout << " |   __    /"; cout << "\n";
	cout << "/_/_/  \\_\\_\\"; cout << "\n";
	return 0;
}

