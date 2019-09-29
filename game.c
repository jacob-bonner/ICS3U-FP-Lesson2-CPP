// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program can display a sprite on the GameBoy


#include <stdio.h>
#include <gb/gb.h>

#include "smiler.c"

void main() {
    // This function displays a happy face

    set_sprite_data(0, 2, smiler);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;
}
