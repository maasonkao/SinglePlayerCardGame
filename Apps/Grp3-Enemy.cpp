#include "Grp3.h"
#include <random>

Enemy::Enemy() {
	maxHealth = 10;
	health = maxHealth;
	tempArmor = 0;
	status = 0;
}

Enemy::Enemy(int startinghealth) {
	maxHealth = startinghealth;
	health = maxHealth;
	tempArmor = 0;
	status = 0;
}

void Enemy::GainArmor() {
	tempArmor = 10;
}

void Enemy::Action() {
//	random_shuffle(ActionVec.begin(), ActionVec.end());
	// EnemyAction chosenAction{};
	// chosenAction.actionType = ActionVec.at(0).actionType;
	// chosenAction.actionValue = ActionVec.at(0).actionValue;
	// return chosenAction;

}

void Enemy::AddAction(CardEnum actionAdd, int valueAdd) {
	actions.push_back({ actionAdd, valueAdd });
}