# 🎮 Rock-Paper-Scissors Game (C++)

This is an interactive **console-based Rock-Paper-Scissors game** developed in C++. The game pits the player against a computer opponent using classic rules, complete with **score tracking**, **leaderboard**, **pause/resume support**, and **input validation** for an engaging experience.

---

## 📋 Game Overview

Play the classic Rock-Paper-Scissors game:

- 🪨 **Rock (r)** crushes ✂️ Scissors (s)
- ✂️ **Scissors (s)** cuts 📄 Paper (p)
- 📄 **Paper (p)** covers 🪨 Rock (r)

The game consists of up to **10 rounds** per session or can be ended early by the player.

---

## ✨ Features

### 🎮 Player vs. Computer Gameplay
- Choose moves via keyboard: `r`, `p`, or `s`
- Computer moves are randomly generated using C++'s `rand()` for unpredictability

### 📊 Score Tracking & Round Management
- Tracks:
  - ✅ Player wins
  - ❌ Computer wins
  - 🔁 Draws
- Each round's result is displayed immediately

### 🏆 Leaderboard System
- Maintains **Top 3 scores** across sessions
- Sorted in descending order to encourage replayability

### ⏸ Pause & Resume
- Type `pause` to pause the game
- Type `resume` to continue

### ❗ Input Validation & Error Handling
- Accepts only valid commands: `r`, `p`, `s`, `pause`, `resume`, `quit`
- Invalid inputs prompt retry (no crashes)

### 👨‍💻 User-Friendly Interface
- Clear instructions shown on game start
- In-game feedback and round summaries
- Final stats + leaderboard after game ends

---

## 🛠 Technical Details

- **Language:** C++
- **Randomization:** `srand(time(0))` used for true random gameplay
- **Data Structures:**
  - `string[]` for moves
  - `int[]` for leaderboard scores
- **Sorting:** `std::sort` used for ranking scores
- **Control Flow:** `while` loops and `if-else` statements manage game flow

---

## 🧪 Example Gameplay Flow

1. Game starts with instructions
2. Player enters move (`r`, `p`, `s`)
3. Computer responds with a move
4. Round result shown
5. After 10 rounds (or `quit`):
   - Final scores displayed
   - Leaderboard updated
6. Player chooses to `restart` or `exit`

---

## 🌟 Why This Game Stands Out

- ✅ Simple yet **addictive gameplay**
- 🔁 High **replay value** via leaderboard
- 🧱 Strong & clean **code structure**
- 🧠 Demonstrates core C++ programming:
  - Loops, conditionals, arrays, input handling, and randomness

---

## 🚀 How to Run

### Using g++:
```bash
g++ -o rps RockPaperScissors.cpp
./rps


📁 RockPaperScissors/
 ┣ 📄 main.cpp                 ← Main source code
 ┗ 📄 RPS-ScreenShot.png       ← Output ScreenShot
 ┗ 📄 README.md                ← This file
