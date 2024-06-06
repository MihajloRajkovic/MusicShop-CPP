#pragma once
#include "Prodavnica.h"
#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#ifndef UTIL_H
#define UTIL_H


void startCode(Prodavnica*);
void printConsole();
void jedan(Prodavnica*);
void dva(Prodavnica*);
void tri(Prodavnica*);
void cetiri(Prodavnica*);
void pet(Prodavnica*);
void sest(Prodavnica*);
void sedam(Prodavnica*);
void upisiPlocu(Ploca& ploca);
vector<Ploca*> citajPloce();

#endif 