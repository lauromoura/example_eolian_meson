# Example Eolian app using Meson

Eolian is the class generator for the new EFL API. It reads the interface
information from an EO - for Efl Object - file and generates C headers and
sources with all needed middleware.

Instead of messing around with Autotools or handwritten Makefiles, you
can use Meson to easily describe and run the builds. By default, it uses
Ninja as the backend to actually execute the commands.

This repo provides a simple example of using Meson to such task.

## How to build

- Install both EFL and Meson
- Make sure `eolian_gen` is in the executable path.
- Make sure eina, efl and eo are available to `pkg-config`.
- Clone the project.
- Inside the project root, run:
```
$ meson <TARGET_DIRECTORY>
$ cd <TARGET_DIRECTORY>
$ ninja
```
Where `<TARGET_DIRECTORY>` is the target build directory.

## Resources

- (Enlightenment/EFL)[https://www.enlightenment.org/]
- (Eolian)[https://phab.enlightenment.org/w/eolian/] - on EFL's Phabricator.
- (Meson)[http://mesonbuild.com/]
