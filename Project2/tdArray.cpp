#include <iostream>
#include <ostream>
#include <cassert>
#include <span>

#include "tdArray.h"


void main()
{
	array<string, nNotes> note = notes();
	for (int i = 0; i < nNotes; ++i)
		cout << note[i] << " ";
	
}



array<string, nNotes> notes()
{
	array<string, nNotes> ar_note;
	int iteration = nNotes / 6;
	for (int i = 0; i < iteration; ++i)
	{
		ar_note[i] = "E" + to_string(i);
		ar_note[i + iteration] = "B" + to_string(i);
		ar_note[i + iteration*2] = "G" + to_string(i);
		ar_note[i + iteration*3] = "D" + to_string(i);
		ar_note[i + iteration*4] = "A" + to_string(i);
		ar_note[i + iteration*5] = "EMin" + to_string(i);
	}
	return ar_note;

}