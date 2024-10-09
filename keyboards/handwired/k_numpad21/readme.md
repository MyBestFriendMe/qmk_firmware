# K-Numpad21


### Arduino Pro Micro Pinout
| rows        | 0   | 1   | 2   | 3   | 4   | 5   |
| ----------- | --- | --- | --- | --- | --- | --- |
| arduino pin | 2   | 4   | 5   | 6   | 7   | 8   |
| qmk pin     | D1  | D4  | C6  | D7  | E6  | B4  |
### Note from Cody: the rows are all wrong now due to adding a row at the top. Check info.json to verify correct pins
| columns     | 0   | 1   | 2   | 3   |
| ----------- | --- | --- | --- | --- |
| arduino pin | 16  | 15  | A1  | A3  |
| qmk pin     | B5  | B4  | B3  | C3  |


Make example for this keyboard (after setting up your build environment):

    make handwired/k_numpad21:default

Bootmagic is enabled.  Press the key at (0,0) while plugging the keyboard in to jump to bootloader. This is numlock in the default keymap.

* Keyboard Maintainer: [Karlssn](https://github.com/MyBestFriendMe)
* Hardware Availability: [LordEvilFish3DP](https://www.thingiverse.com/thing:4950556)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
