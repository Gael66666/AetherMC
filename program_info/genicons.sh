#/bin/bash

# ICO

inkscape -w 16 -h 16 -o aethermc_16.png org.aethermc.AetherMC.svg
inkscape -w 24 -h 24 -o aethermc_24.png org.aethermc.AetherMC.svg
inkscape -w 32 -h 32 -o aethermc_32.png org.aethermc.AetherMC.svg
inkscape -w 48 -h 48 -o aethermc_48.png org.aethermc.AetherMC.svg
inkscape -w 64 -h 64 -o aethermc_64.png org.aethermc.AetherMC.svg
inkscape -w 128 -h 128 -o aethermc_128.png org.aethermc.AetherMC.svg

convert aethermc_128.png aethermc_64.png aethermc_48.png aethermc_32.png aethermc_24.png aethermc_16.png aethermc.ico

rm -f aethermc_*.png

inkscape -w 1024 -h 1024 -o aethermc_1024.png org.aethermc.AetherMC.bigsur.svg

mkdir aethermc.iconset

sips -z 16 16     aethermc_1024.png --out aethermc.iconset/icon_16x16.png
sips -z 32 32     aethermc_1024.png --out aethermc.iconset/icon_16x16@2x.png
sips -z 32 32     aethermc_1024.png --out aethermc.iconset/icon_32x32.png
sips -z 64 64     aethermc_1024.png --out aethermc.iconset/icon_32x32@2x.png
sips -z 128 128   aethermc_1024.png --out aethermc.iconset/icon_128x128.png
sips -z 256 256   aethermc_1024.png --out aethermc.iconset/icon_128x128@2x.png
sips -z 256 256   aethermc_1024.png --out aethermc.iconset/icon_256x256.png
sips -z 512 512   aethermc_1024.png --out aethermc.iconset/icon_256x256@2x.png
sips -z 512 512   aethermc_1024.png --out aethermc.iconset/icon_512x512.png
cp aethermc_1024.png aethermc.iconset/icon_512x512@2x.png

iconutil -c icns aethermc.iconset

rm -f aethermc_*.png
rm -rf aethermc.iconset

for dir in ../launcher/resources/*/scalable
do
    cp -v org.aethermc.AetherMC.svg $dir/launcher.svg
done
