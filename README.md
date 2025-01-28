# HealthDemo
 
Example health mechanic that works on the player and basic foes

Based on the FPS demo scene, 
The projectile C++ has been adjusted to impact health objects.

We have two types of enamies, a basic and armoured. The Armoured is extended from the basic. 

##Tasks:
Have a look at the code and see how i have made the health script fully modular, it doesnt interact with anything, but opens an interface for other scripts to see what it's doing. 
See how this also also the same script to work on the player and the foes.
Your main task is to implement the Armoured Health script, so the Armour helps keep the foes alive longer.

For and extra challenge if you complete early:
-set the physics to enabled on the cubes
-When the armour is "broken", change the armoured foes material to the health mat
-See if you can add the health to the player and make a damage zone to demonstrate the system working
