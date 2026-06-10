# 🎮 C++ Text RPG Game

 Game Description
This is a simple text-based RPG game built using C++ and Object-Oriented Programming (OOP).  
The game runs in CLI (Command Line Interface) and uses turn-based combat system.

---

 Features
- Player vs Monster battle system
- Skill system
- Item system (healing / effects)
- Turn-based gameplay
- OOP design (Class-based structure)

---

 Classes Used

 Player
- name: player name
- hp: health points
- attackPower: attack damage
- items: inventory

Functions:
- attack()
- takeDamage()
- useItem()
- isAlive()

---

 Monster
- name
- hp
- attackPower
- rewardGold

Functions:
- attack()
- takeDamage()
- isAlive()
- showInfo()

---

 Skill
- name
- damage
- mpCost

Functions:
- use()
- showInfo()
- getDamage()

---

 Item
- name
- type
- effectValue
- quantity

Functions:
- use()
- showInfo()
- isAvailable()

---

## 🎮 How to Play
1. Run the program
2. Choose action:
   - Attack
   - Use Skill
   - Use Item
3. Defeat the monster to win

---

 Win Condition
Monster HP reaches 0

 Lose Condition
Player HP reaches 0

---

GitHub Repository
https://github.com/lisaglorianna20-prog/RPG-Game

---

 Team Contribution
members of the group:

- 蕭麗麗: Player system， Monster system
- 武明乖： Skill & Item system
- together: Game logic
