#ifndef Character_H
#define Character_H


#include "Ogre.h"
#include "OIS.h"

using namespace Ogre;
//using namespace OgreBites;

class Character
{
public:

	Character(Ogre::SceneManager* mSceneMgr, std::string name,int xPos, int yPos); // : NUM_MODELS(6), ANIM_CHOP(8)
	~Character();

    void addTime(Real deltaTime);

protected:

	void setupModel();
	void cleanupContent();

    //objects
    Ogre::SceneManager* mSceneManager;
	SceneNode* mModelNodes;

    //Animation
	AnimationState* mAnimStates;
	Real mAnimSpeeds;

    //stats
    std::string mName;
    int xPos;
    int yPos;
};

#endif

