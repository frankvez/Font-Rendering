/*
  ==============================================================================

    JUCE Colours Library Manager (header file)
	Made by Ivan Cohen, Copyright (c) 2015

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>


// Class to manage all the colours included in JUCE library
// ================================================================================
class ColourLibraryManager
{
public:
	ColourLibraryManager();
	~ColourLibraryManager();

	const int getNumEntries();

	StringArray *getStringDatabase();
	juce::Array <Colour> *getColourDatabase();

	const String getStringEntry(int index);
	const Colour getColourEntry(int index);

private:
	void createDatabase();

	StringArray theStringDatabase;
	juce::Array <Colour> theColourDatabase;
};