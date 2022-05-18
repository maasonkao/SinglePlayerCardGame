#include "HandManager.h"

HandManager::HandManager() {
	vector<Card*> hand;
	libptr = nullptr;
	selected = nullptr;
}

HandManager::~HandManager()
{
}

HandManager::HandManager(Library* lib) {
	vector<Card*> hand;
	libptr = lib;
	selected = nullptr;
}

//HandManager& HandManager::operator=(const HandManager& rhs) {
//	if (this == &rhs) return *this;
//	delete& hand;
//	this->hand = rhs.hand;
//	this->libptr = rhs.libptr;
//	this->maxHandSize = rhs.maxHandSize;
//	drawCards = rhs.drawCards;
//	return *this;
//}

void HandManager::playCard()
{
	if (!selected) return;
	selected->PlayCard();
	selected->Image.SetPosition({ -5.0f, -5.0f }); //Check if it is a valid target before doing an action(playing a card) on target

}

void HandManager::Draw() {
	if (handSize >= maxHandSize) return;
	hand.push_back(libptr->Draw());
	handSize++;
}

void HandManager::DiscardHand() {
	for (int i = 0; i < handSize; i++) {
		libptr->MoveToDiscard(hand[i]);
	}
	handSize = 0;
	hand.clear();
}

void HandManager::SetCardPosition(float x, float y, int index) {
	hand.at(index)->Image.SetPosition({ x, y });
}

void HandManager::SelectCard(Card* c)
{
	selected = c;
}

void HandManager::DeselectCard()
{
	selected = nullptr;
}


