# Escape Room Game

## Overview

This project is a 3D escape room–style game developed as the **final project** for our Game Development course.
The player explores an abandoned house filled with puzzles, enemies, and interactable objects. The ultimate goal is simple: **solve the puzzles and escape**.

The game combines environmental storytelling, puzzle-solving, and enemy AI to create an immersive challenge.

## Gameplay Features

### Puzzles

* **Keypad Door**

  * A 4-digit keypad puzzle, with the solution hinted by nearby colored tiles.
  * Solving it reveals a hidden room containing a **flashlight**, necessary for later puzzles.

* **Hidden Posters + Flashlight**

  * Posters on the walls hide numbers that are only visible under the flashlight.
  * These numbers provide clues for the clock puzzle.

* **Clock Door Puzzle**

  * Three colored clocks above a locked door can be rotated.
  * Players must match the numbers from the posters (R:10, G:2, B:3) by rotating the clocks the correct number of times to unlock the final escape.

### Enemies

* **The Patroller**

  * A roaming enemy that searches for the player.
  * Attacks and kills the player if spotted.
  * Respawns after being damaged or killed.
  * Distinct visual design (darkened/blurred humanoid) makes its threat immediately clear.

### Inventory System

* Players can pick up items (e.g., balls, flashlight) and store them in an inventory.
* Inventory slots can be cycled using the mouse wheel.
* Picked-up items can help solve puzzles or clear obstacles.

## User Interface

* **Main Menu** — Options to start the game, pause, or quit.
* **Pause Menu** — Accessible anytime; lets the player quit, resume, or return to the main menu.
* **Game Over Screen** — Appears when the player is killed.
* **Game Clear Screen** — Appears upon successful escape.

## Controls

* **Movement:** WASD / Arrow Keys
* **Interact:** Mouse Click
* **Inventory Toggle:** Mouse Wheel
* **Pause:** Escape
* **Quit Game:** Available through pause menu or by pressing `q` (if implemented)

## Technical Notes

* Developed in Unreal Engine (C++)
* Core systems include:

  * Puzzle logic and state management
  * Enemy AI with patrol and chase behavior
  * Item pickup and inventory UI
  * Scene management for menus, game over, and victory states

## Future Work

* Add more puzzle variety and multi-step challenges.
* Introduce additional enemy types with unique AI behaviors.
* Implement a timer system for added difficulty.
* Expand interactable items and environmental storytelling elements.
