#include "BackgroundLayer.h"

BackgroundLayer::BackgroundLayer(void)
{
}

bool BackgroundLayer::init()
{
	if (!CCLayer::init())
	{
		return false;
	}
	//背景写入
	CCSprite *bgSprite = CCSprite::create("bj01_01-ipadhd.png");
	this->addChild(bgSprite);
	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	//背景精灵的位置（窗口的中心位置）
	bgSprite->setPosition(CCPoint(winSize.width / 2, winSize.height / 2));
	return true;
}

BackgroundLayer::~BackgroundLayer(void)
{
}
