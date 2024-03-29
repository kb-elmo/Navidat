# Navidat

![navidat](https://i.imgur.com/bkWfpMql.png)

Full navigation keypad

* Keyboard Maintainer: [kb-elmo](https://github.com/kb-elmo)
* Hardware Supported: Navidat rev.1 PCB
* Hardware Availability: [Open source project](https://github.com/kb-elmo/Navidat)

Make example for this keyboard (after setting up your build environment):

    make kb_elmo/navidat:default

Flashing example for this keyboard:

    make kb_elmo/navidat:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

* **Bootmagic reset**: Hold down the top left key and plug in the keyboard
* **Physical reset button**: Briefly press the button labeled "Reset" on the back of the PCB
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
