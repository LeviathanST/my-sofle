# Sofle Keyboard v1 by Josef Adamcik
Bootloader: caterina

- Install qmk (your package manager)
```
sudo pacman -S qmk
```
- Clone qmk_firmware
```
cd ~
git clone https://github.com/qmk/qmk_firmware.git ~/qmk_firmware
cd ~/qmk_firmware
qmk setup
```
- Checkhealth
```
qmk doctor
```

- Install and move my-sofle to qmk_firmware source for compiling
```
cd ~
git clone https://github.com/LeviathanST/my-sofle.git ~/my-sofle
mkdir ~/qmk_firmware/keyboards/sofle/keymaps/mymap
cp -r ~/my-sofle/* ~/qmk_firmware/keyboards/sofle/keymaps/mymap/
```

- Compile config
```
qmk compile -kb sofle -km mymap
```

- Before flashing config to sofle, we need to entry to its bootloader.
- Press once reset button to init, then twice quickly.
- Check it:
```
lsusb
```

- Output:
```
...
Bus 001 Device 060: ID 1b4f:9205 SparkFun Electronics Pro Micro 5V
```

- Flash to Sofle Bootloader
```
qmk flash ~/qmk_firmware/sofle_rev1_mymap.hex -bl caterina
```
- Done!

