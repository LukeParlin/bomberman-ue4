# bomberman-ue4

##Project intro:

This is a mostly-complete, completely playable Bomberman game created from scratch in Unreal Engine 4 using only Epic's Starter Content. With the exception of my GameViewportClient class, all the code was written by me over the course of 5 days.

###NOTE: My game world is generated entirely in code, rather than in the editor, and relies on the *BP_Bomberman_GameMode* Blueprint, which inherits from my custom *BombermanGameModeBase* class. If you run the game and nothing happens, you will need to manually set some properties of BP_Bomberman_GameMode inside the editor. Occasionally, when the project gets recompiled, the editor properties get erased. Please set the following inherited properties from the BombermanGameModeBase class inside BP_Bomberman_GameMode:

| Property               | Value               | 
| ---------------------- | ------------------- | 
| Spawn P1               | BP_Bomberman        | 
| Spawn P2               | BP_Bomberman_P2     | 
| Player Spawn Offset    | [x: 3, y: 3]        |
| Spawn Tile             | BP_Tile             | 
| Spawn Wall             | BP_Wall             | 
| Spawn Breakable        | BP_Wall_Breakable   | 
| Spawn Bomb             | BP_Bomb             | 
| Spawn Explosion Effect | BP_Explosion_Effect | 
| Spawn Powerups         | 3 Array elements    | 
| Spawn Powerups[0]      | BP_Powerup_Bomb     | 
| Spawn Powerups[1]      | BP_Powerup_Range    |
| Spawn Powerups[2]      | BP_Powerup_Speed    | 
| Map Size               | [x: 15, y: 13]      |

For Player Spawn Offset and Map Size, any odd numbers should work. For the Map, a wider level fits better on the screen. I have tried up to about 41x29 with no issues. 15x13 is the size of the original Bomberman level 1. For the Player Spawn Offset, any odd numbers should work so long as they're less than half of the map width and height, respectively. Players will always be spawned starting from the bottom-left and top-right of the map, and will always have the four tiles adjacent to them left blank.

Also, make sure that BP_Bomberman_GameMode is set as the GameMode Override in the world settings of Bomberman_Level!

##Game code heirarchy:

The main game class — essentially the entry point into my Bomberman game — is the ABombermanGameModeBase class, which inherits from AGameModeBase. ABombermanGameModeBase holds pointers to most of the other Actors in the scene, and handles the core game logic.

```
  +-------------------------+ 
  | ABombermanGameModeBase  | 
  +-----------^-------------+ 
             /_\    
              |     
              |     
              |     
   +-----------------------+
   | BP_Bomberman_GameMode |
   +-----------------------+
```

ABombermanGameModeBase is responsible for containing the player characters, map tiles, and tile objects (walls, bombs, etc). Their structures look like this:

```
  +----------------------+      +-------+      +-------------+
  | ABombermanCharacter  |      | ATile |      | ATileObject |
  +----------^-----------+      +---^---+      +------^------+
            /_\                    /_\               /_\
             |                      |                 |
             |                      |                 +----------------+-----------------+---------------------+
             |                      |                 |                |                 |                     |
      +--------------+         +---------+        +-------+       +----------+      +---------+      +-------------------+
      | BP_Bomberman |         | BP_Tile |        | ABomb |       | APowerup |      | BP_Wall |      | BP_Wall_Breakable |
      +------^-------+         +---------+        +---^---+	      +----^-----+      +---------+      +-------------------+
	        /_\                                      /_\              /_\				
             |                                        |                |
             |                                        |                |
             |                                        |                |
     +-----------------+                         +---------+     +------------+
     | BP_Bomberman_P2 |                         | BP_Bomb |     | BP_Powerup |
     +-----------------+                         +---------+     +-----^------+
                                                                      /_\
                                                                       |
                                                                       +------------------------+-------------------------+
                                                                       |                        |                         |
                                                              +-----------------+      +------------------+      +------------------+
                                                              | BP_Powerup_Bomb |      | BP_Powerup_Range |      | BP_Powerup_Speed |
                                                              +-----------------+      +------------------+      +------------------+
```

Much of the gameplay logic is contained within Blueprints. The two BP_Bomberman Blueprints are responsible for handling their own input, and also for collecting Powerups. Breakable walls are responsible for spawning Powerups (or, at least, telling the BombermanGameModeBase to spawn a new Powerup). Similarly, Bombs know to explode themselves, but then tell the GameMode to propagate the explosion outwards. The UI Blueprints handle their own data retrieval, and contain a button to reset the game after a player has won. Finally, the BP_Bomberman_GameMode Blueprint is responsible for keeping score, and for checking for win conditions.

**Finally, there is one known bug:**
Occasionally, when resetting the game after a player has won (or drawn), the game may crash. I believe this is caused by a bomb explosion, or chain explosion happening AFTER the world map has been reset. According to the crash logs, some TileObject is looking for tiles on a map which no longer exists. I haven't been able to consistently reproduce the crash, so I haven't fully debugged it. Most of the time, even with crazy explosions going off, everything works fine! :)

##Postmortem and next steps

If I were to continue working on this game, the first feature I would add is the Remote Bomb powerup. Sadly, this is the only feature on the list I didn't include in my game. I spent the majority of my time on map generation, and in the end, didn't have time to implement the last powerup. I also spent a bit of time playing with the particle, material, and curve editors... whoops!

If I were to implement the Remote Bombs, I would use a finite state machine to transition between the two modes of bomb detonation.

Overall I enjoyed this test tremendously. I didn't realize it at the beginning, but creating Bomberman requires a fairly comprehensive knowledge of the game engine. I overestimated its simplicity, and it made for a nice challenge. Little things, like sending input to two PlayerControllers, or spawning bombs inside the player with no collision, caught me by surprice. It was a nice opportunity to re-familiarize myself with Unreal.

##Time breakdown

| Day        | Hours | 
| -----------| ------| 
| Sunday     | 1     | 
| Tuesday    | 6     | 
| Wednesday  | 5     |
| Thursday   | 8     | 

I've been working in Unity for the last two years, meaning this was my first project in Unreal for quite some time. Though initially I felt rusty, I quickly found my rhythm. In the end, I spent a full 20 hours on the project — partially due to re-familiarizing myself with unreal, but mostly because I wanted to improve some aspects of my game.

Though we were sent the test on Tuesday 16/01, due to a busy week at work, I didn't begin development until Sunday 21/01. I worked for about an hour on Sunday, mostly planning how I would architect my game, but I did create the GIT repository, a blank Unreal project, and complete one or two small set-up steps.

On Tuesday 23/01 I coded most of the game's core. I began by implementing the architecture I'd designed on Sunday: spawning the map on a grid of tiles, then placing game objects on top of those tiles. This worked out nicely — my map is fairly flexible, and can spawn at any arbitrary size. I also added in both players and their movement. Local multiplayer is a little funky in Unreal, but I found a solution on the [Unreal Wiki](https://wiki.unrealengine.com/Local_Multiplayer_Tips#Multiple_Players_on_the_Keyboard_.28C.2B.2B.29) which I used override the GameViewportClient so that it would send input to both PlayerControllers.

The evening of Wednesday 24/01 I spent implementing the bombs, their explosions, and spawning powerups. This was fairly straightforward, though I did end up re-adjusting my algorithm a few times. I ran into a couple problems with Destroy() and referencing null pointers, but those were solved fairly easily with a little bit of debugging.

Finally, on Thursday 25/01 I finished the game. I began by implementing the functionality of the powerups, and then moved onto the UI, and the win and lose states. I finished the gameplay fairly quickly, but wanted to spend extra commenting my code and "cleaning up" my project. I noticed my .gitignore was set up incorrectly, as I was using a slightly different project structure than the default .gitignore file expected, so I had to clear my git cache and re-add most of the project.