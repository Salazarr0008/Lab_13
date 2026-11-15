# Polymorphism notes

Answer in your own words. Use the words **static dispatch** and **dynamic dispatch**.

## 1. The non-virtual destructor

What did the sanitizer report when `~Game` was not virtual? Explain which destructor ran and which did not.

adresss saitizer did not report an error during the run but the compiler did warn about deleting game object The base game desturctor was called instead of the detived game destrucotr
## 2. Game is abstract

In two sentences, explain why `Game g;` no longer compiles.

game g no longer compiles becasue play() is pure virtual making Game abstract 

## 3. override

What does `override` protect you from? Give an example of a mistake it catches.

override catches mistaked that would stop a function from overriding the base version for example leaving const off attack damage

## 4. Last week versus this week

Repeat the Week 12 experiment: `Game *g = &hangman; g->play();`. What printed last week, and what prints now? Name the kind of dispatch that happened each time.

g-> play used static dispatch and printed game now with the virtual dynamic dispatch it runs and calls hangman play becasue it points to a hangman object
