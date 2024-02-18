# Frogger Keyboard

Frogger is a single handed keyboard layout for the [Lily58 keyboard](https://github.com/kata0510/Lily58) based on the 
FrogPad keyboard.

Details on my build [are available on my blog](https://www.kianryan.co.uk/2024-02-16-one-handed-accessible-keyboard-inspired-by-frogpad/).

## Installation


Follow the instructions for QMK, and copy the layout files in ```keymaps/frogger``` to ```~/qmk_firmware/keyboards/lily58/keymaps/frogger```.
Then build and deploy:

```
make lily58:frogger:avrdude (If on Linux/Mac)
make lily58:frogger (If on Win, then deploy using QMK Toolbox)

```
Printable legends are available in ```legends/``` for use with relegendable keycaps.

## Usage

> Quick note - QMK leans heavily towards US ANSI, so for UK, the current layout files may not behave as expected
> for " and @ symbols.  Switch these around in the layout files, and you should be good to go.  Or switch to US 
> keyboard layout.

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

## License

I make no claims on any of the property associated with FrogPad.  I release these layout files under the terms 
of the MIT license for people to make use of as they see fit, hoping they prove some use.

[MIT](https://choosealicense.com/licenses/mit/)