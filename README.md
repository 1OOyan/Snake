# Snake

Single file ncurses implementation of the game Snake

Compile like:

gcc snake.c -lcurses -lm -o Snake

Run: ./snake

Use arrow keys to move the snake around.

Cool features:

1. The game screen is resizable while playing. Nice to use with tmux.

2. Penalty apples when timeout is reached. Red timeout indicator embedded in the bottom wall. 

3. The snake moves faster with each eaten apple. Try to reach a score above 100 points.

4. Status bar embedded on the upper wall.

6. Simple splash screens on game start, snake death, final score and game end.


TODOs:

1. AI snake opponent.

2. Wall/Maze generation depending on the level

3. Cooperative gameplay on one keyboard

4. Network play ?

LICENSE: https://en.wikipedia.org/wiki/WTFPL

![Alt text](snake.png?raw=true)
