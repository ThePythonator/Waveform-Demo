#include "game.hpp"

using namespace blit;

///////////////////////////////////////////////////////////////////////////
//
// init()
//
// setup your game here
//
void init() {
    set_screen_mode(ScreenMode::lores);
}

// current_sound determines which sound is currently playing.
// -1 indicates no sound.
int current_sound = -1;

///////////////////////////////////////////////////////////////////////////
//
// render(time)
//
// This function is called to perform rendering of the game. time is the 
// amount if milliseconds elapsed since the start of your game
//
void render(uint32_t time) {

    // Clear the screen.
    screen.clear();

    // Draw some text ont the screen.
    screen.alpha = 255;
    screen.mask = nullptr;
    screen.pen = Pen(255, 255, 255);
    screen.rectangle(Rect(0, 0, 160, 14));
    screen.text("Press a button to", minimal_font, Point(5, 24));
    screen.text("play a sound", minimal_font, Point(5, 32));

    if (current_sound != -1) {
        // A sound is playing currently.
        // Display text indicating which sound.

        std::string text = "Current sound: ";
        text.append(std::to_string(current_sound));
        screen.text(text, minimal_font, Point(5, 48));
    }

    screen.pen = Pen(0, 0, 0);
    screen.text("Waveform Demo", minimal_font, Point(5, 4));
}

///////////////////////////////////////////////////////////////////////////
//
// update(time)
//
// This is called to update your game state. time is the 
// amount if milliseconds elapsed since the start of your game
//
void update(uint32_t time) {
    // Generate a sound if a button is pressed.
    //
    // Only detect one button press at a time (by using else if) because reasons.

    if (buttons.pressed & Button::X) {
        current_sound = 0;
    }
    else if (buttons.pressed & Button::A) {
        current_sound = 1;
    }
    else if (buttons.pressed & Button::B) {
        current_sound = 2;
    }
    else if (buttons.pressed & Button::Y) {
        current_sound = 3;
    }
    else if (buttons.pressed & Button::DPAD_UP) {
        current_sound = 4;
    }
    else if (buttons.pressed & Button::DPAD_RIGHT) {
        current_sound = 5;
    }
    else if (buttons.pressed & Button::DPAD_DOWN) {
        current_sound = 6;
    }
    else if (buttons.pressed & Button::DPAD_LEFT) {
        current_sound = 7;
    }

    // Update the sounds which are playing.
    switch (current_sound) {
    case 0:
        break;

    case 1:
        break;

    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    case 5:
        break;

    case 6:
        break;

    case 7:
        break;

    default:
        break;
    }
}