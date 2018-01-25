/*
 * StateParser.h
 *
 *  Created on: Jan 21, 2018
 *      Author: beer
 */

#ifndef STATEPARSER_H_
#define STATEPARSER_H_


#include <iostream>
#include <vector>
#include <tinyxml.h>
#include "../GameObject/GameObject.h"
class GameObject;
class StateParser
{
public:
bool parseState(const char* stateFile, std::string stateID,std::vector<GameObject*> *pObjects);
private:
void parseObjects(TiXmlElement* pStateRoot,
std::vector<GameObject*> *pObjects);
void parseTextures(TiXmlElement* pStateRoot,
std::vector<std::string> *pTextureIDs);
};



#endif /* STATEPARSER_H_ */
