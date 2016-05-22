
#The source code which generated a specific binary package may be obtained using the apt-get source <package> command. For example to obtain the source for the currently running kernel you can use the command:
apt-get source linux-image-$(uname -r)

#packages needed before you can successfully build. You can get these installed with:
sudo apt-get build-dep linux-image-$(uname -r)

# Open terminal and type the following apt-get command to install ncurses:
sudo apt-get install libncurses5-dev libncursesw5-dev

#Change your working directory to the root of the kernel source tree and then type the following commands:

#The build process will use a configuration that is put together from various sub-config files. The simplest way to modify anything here is to run:

sudo chmod a+x debian/scripts/*
sudo chmod a+x debian/scripts/misc/*
sudo fakeroot debian/rules clean
sudo fakeroot debian/rules editconfigs

#Building Kernel

sudo fakeroot debian/rules clean
sudo fakeroot debian/rules binary-headers binary-generic