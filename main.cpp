#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: dog
//  action 1: the dog plays
dog.play();
//  action 2: the dog bites
dog.bite();
//  action 3: the dog growls
dog.growl();

//  2)
//  Noun: cat
//  action 1: the cat purrs
cat.purr();
//  action 2: the cat scratches
cat.scratch();
//  action 3: the cat jump
cat.jump();
//  3)
//  Noun: guitarist
//  action 1: the guitarist shreds
guitarist.shred();
//  action 2: the guitarist wails
guitarist.wail();
//  action 3: the guitarist rushes
guitarist.rush();

//  4)
//  Noun: cyclone
//  action 1: the cyclone spins
cyclone.spin();
//  action 2: the cyclone destroys
cyclone.destroys();
//  action 3: the cyclone inspires fear
cyclone.inspiresFear();

//  5)
//  Noun: jack the ripper
//  action 1: jack the ripper slices
jackTheRipper.slice();
//  action 2: jack the ripper stabs
jackTheRipper.stab();
//  action 3: jack the ripper disappears
jackTheRipper.disappear();
//  6)
//  Noun: tree
//  action 1: the tree grows
tree.grow();
//  action 2: the tree bears fruit
tree.bearFruit();
//  action 3: the tree sheds leaves
tree.shedLeaves();

//  7)
//  Noun: inspector gadget
//  action 1: inspector gadget solves the case
inspectorGadget.solveCase();
//  action 2: inspector gagdet parallel parks
inspectorGadget.parallelPark();
//  action 3: inspector gadget fights crime 
inspectorGadget.fightCrime();
//  8) 
//  Noun: acdc
//  action 1: acdc rocks
acdc.rock();
//  action 2: acdc rolls
acdc.roll();
//  action 3: acdc detonates tnt
acdc.detonateTnt();  // acdc.detonateTNT() ?? how does camel case square with an acronym?
//  9) 
//  Noun: the dude 
//  action 1: the dude smokes
theDude.smoke();
//  action 2: the dude bowls
theDude.bowl();
//  action 3: the dude abides
theDude.abide();
//  10)
//  Noun: slimer
//  action 1: slimer flies
slimer.fly();
//  action 2: slimer slimes
slimer.slime();
//  action 3: slimer eats
slimer.eat();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
