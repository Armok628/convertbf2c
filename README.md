# convertbf2c
Brain"heck" to C converter

Can't remember how long ago I made this. I wanted to be able to write programs in BF for fun, so I made this in order to do it. I read on the esolang wiki that most first time implementers have trouble with `[` implementation. I didn't.

The other thing is that I don't want to have to rewrite this in case I become interested again. It's already very fast; a truth machine in regular C is actually slower to output 1's than the truth machine version of this, which is included. Other BF things I made for whatever reason are in another repository.

Two scripts are included as well: a debug scripts which insert print statements to the converted C code to make it clear what's happening under the hood, and a script which just makes it easier to convert BF on the fly
