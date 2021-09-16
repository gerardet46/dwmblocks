# Installation
- Clone this repository
- `cd` to this repository
- Copy my scripts with `cp -r scripts/ ~/.config/dwmblocks/`
- Install _dwmblocks_ with `sudo make install clean`
- Add to your __.xinitrc__ or similiar to autoload it with dwm.

# Scripts
Here I also include my custom scripts to setup the blocks, which
are located in the folder **scripts/**.

You can browse theme and make the changes you want, or even use them by copying
to the folder *~/.config/dwmblocks*.

In *blocks.h* you can change the default path for the scripts and also change them

# dwmblocks
Modular status bar for dwm written in c.
# usage
To use dwmblocks first run 'make' and then install it with 'sudo make install'.
After that you can put dwmblocks in your xinitrc or other startup script to have it start with dwm.
# modifying blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the blocks.h header file.
By default the blocks.h header file is created the first time you run make which copies the default config from blocks.def.h.
This is so you can edit your status bar commands and they will not get overwritten in a future update.
