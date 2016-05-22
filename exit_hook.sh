
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

#check compilation
cd ..
ls *.deb

#linux-cloud-tools-4.4.0-22-generic_4.4.0-22.40_amd64.deb
#linux-headers-4.4.0-22_4.4.0-22.40_all.deb
#linux-headers-4.4.0-22-generic_4.4.0-22.40_amd64.deb
#linux-image-4.4.0-22-generic_4.4.0-22.40_amd64.deb
#linux-image-extra-4.4.0-22-generic_4.4.0-22.40_amd64.deb
#linux-tools-4.4.0-22-generic_4.4.0-22.40_amd64.deb

#Installing new compiled kernel
sudo dpkg -i linux*2.6.38-7.37*.deb
sudo reboot

#check loaded kvm version and path to ko file
lsmod | egrep kvm
modinfo kvm-intel


#change directory to printing facility module
make
sudo insmod count_exits.ko
