#! /bin/bash

#echo "cleaning project..."
#make clean

echo "export ARCH=arm"
export ARCH=arm

echo "export CROSS_COMPILE=/home/leanhtuans/android/arm-eabi-4.6/bin/arm-eabi-"
export CROSS_COMPILE=/home/leanhtuans/android/arm-eabi-4.6/bin/arm-eabi-

echo "making config..."
make rhine_amami_row_defconfig

echo "making target..."
make

#echo "copy output zImage to output/"
#cp arch/arm/boot/zImage output/

#echo "creating output/dt.img..."
#output/dtbTool -o output/dt.img -s 2048 -p scripts/dtc/ arch/arm/boot/

#echo "making output/boot.img..."
#output/mkbootimg --cmdline "androidboot.hardware=qcom user_debug=31 msm_rtb.filter=0x3b7 ehci-hcd.park=3 androidboot.bootdevice=msm_sdcc.1 vmalloc=300M dwc3.maximum_speed=high dwc3_msm.prop_chg_detect=Y" --base 0x00000000 --kernel output/zImage --ramdisk output/ramdisk.cpio.gz --ramdisk_offset 0x02000000 -o output/boot.img --dt output/dt.img --tags_offset 0x01E00000

#echo "downloading new kernel to main..."
#sudo fastboot flash boot output/boot.img
