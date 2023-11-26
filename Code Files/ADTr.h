#pragma once
using namespace std;
#include <string>
#include "../../../../../../Program Files (x86)/Reference Assemblies/Microsoft/Framework/.NETFramework/v4.7.2/mscorlib.dll"


ref struct process {
	String^ name;
	int bt, pr, ir1, ir2, ir3, ir4, ir5;
	bool io;

	process() {
		name = "";
		bt = 0; pr = 0; ir1 = 0; ir2 = 0; ir3 = 0; ir4 = 0; ir5 = 0;
		io = false;
	}
};
