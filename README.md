# SheepSforza

SheepSforza is an OpenPOWER-enhanced version of SheepShaver V2.5, incorporating `kanjitalk755`'s 64-bit fixes, intended for POWER8 and POWER9 systems running in little-endian mode. Like SheepShaver, it supports up to Mac OS 9.0.4. It is released under the GNU General Public License v2.

Copyright (C) 2022 Cameron Kaiser.\
Copyright (C) 1997-2008 Christian Bauer and Marc Hellwig.\
All rights reserved.

## Supported configuration

Other configurations may work, but this is what works for me:

  * Linux (I use Fedora `ppc64le` on a Raptor Talos II)
  * Mac OS 9.0.4 on the guest
  * Power Macintosh 7300 Old World ROM (though New World ROMs should work, I have better luck with Old World)
  * Windowed video with SDL 2.x

## Works

  * Basic emulation, including 60Hz video and up to 1GB guest RAM
  * Link-time optimization by default (pass `--disable-lto` to disable)
  * CPU-specific compiler flags from `/proc/cpuinfo` (pass `--disable-cpudetect` to disable)
  * OpenPOWER-enhanced CPU interpreter with accelerated FPU and some GPU operations
  * Sound, hardware mouse cursor, host file system access, `slirp` networking

## Doesn't work (yet)

  * Big-endian OpenPOWER won't work in non-emulated PPC mode (it _should_ work in emulated PPC mode, but this hasn't been tested)
  * Basilisk II doesn't function yet
  * No JIT support (don't even bother turning it on)

## How to build

You'll need SDL 2 (SDL 1.2.x may work but may have problems) and GTK.

`cd SheepShaver/src/Unix`\
`./configure`\
`make -j24 # or as you like`

## How to run

Allow low memory to be mapped:

`sudo sysctl vm.mmap_min_addr=0`\
`sudo setsebool -P mmap_low_allowed 1 # with SELinux`

Start the emulator and configure your guest Mac:

`./SheepShaver`

There are [excellent starting guides](https://www.emaculation.com/doku.php/ubuntu) for using SheepShaver on Linux that in general apply to SheepSforza too. However, only `slirp` networking is currently supported, and until further notice **do not enable the JIT.**

## To do

Roughly in priority order.

  * Write a `ppc64le` JIT
  * Support for hibernating or suspending emulation
  * Investigate VMX acceleration for video updates (audio on little-endian is already VMX accelerated)
  * Improve guest compatibility (for example, there is no supervisor mode or MMU)
  * Fix Basilisk II (but 68K apps run just fine in SheepSforza)

## Don't ask for support or SheepShaver-general fixes

This is not a supported port of SheepShaver on anything other than OpenPOWER. Issues opened to request SheepShaver compatibility fixes affecting all ports will be closed with prejudice. If we spontaneously work on something like that, consider it a bonus and you're responsible for upstreaming it if you want it on another platform.

(Parenthetically, it is possible to build other, previously supported platforms from SheepSforza. **Please don't.** We don't support that and we don't maintain them, and we may gleefully break them just to make the point if necessary to support our core constituency.)

OpenPOWER-specific problems (things that work on other ports, but not SheepSforza) or feature requests are accepted to the issue tracker, but they may be slowly if ever addressed unless the maintainer(s) think they're worth working on. We may even close issues we think are frivolous, in our sole judgment. If you disagree, then work on it yourself and post a pull request. If you can't do that, then be nice.
