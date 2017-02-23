# convertbf2c
Brain"heck" to C converter

Can't remember how long ago I made this. I wanted to be able to write programs in BF for fun, so I made this in order to do it. I read today on the esolang wiki that most first time implementers have trouble with `[` implementation. I didn't, so I figured I made something worth backing up.

Mostly, I don't want to have to rewrite this in case I become interested in working with esoteric languages again. The implementation results in quick code as well, as far as I can tell; a truth machine in regular C outputs far fewer '1's in a time period than the BF version of this, which is included. Other BF things I made for whatever reason (usually experimentation) are in another repository.

Two scripts are included as well: a debug scripts which insert print statements to the converted C code to make it clear what's happening under the hood, and a script which just makes it easier to convert BF on the fly. The convert script expects a binary called 'bf2c' in the same directory.
