# jukebox_essentials
Its function is very simple: It reads a file, and everytime it identifies a certain character, it plays a note corresponding to its comand. It does this until it finds a '\n', then needs to be called again. In essence this is a very basic version of a virtual jukebox, similar to SNES music handling technology.

It needs a few extras in order to work! If a note is not found, it will play the standard windows sound - Therefore, you need at least 1 folder to keep the notes you'll be using. In my case, I called that folder "notes1". Until now, the program supports (barely) 2 packs of sounds, but it is very easy to further implement more ;)

Also, you'll need a file for the program to read from, a guide - I used this one while testing the program.
.[test.txt](https://github.com/doc-wann/jukebox_essentials/files/10239866/test.txt)

