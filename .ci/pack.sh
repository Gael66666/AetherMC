#!/bin/sh -e

mkdir -p dist

find . -type f \( \
    -name "AetherMC*.tar.gz" -o \
    -name "AetherMC*.exe" -o \
    -name "AetherMC*.zip" -o \
    -name "AetherMC*.AppImage*" \
\) -not -path "./dist/*" -exec cp {} dist/ \;

# mk source tarball
mv AetherMC-source AetherMC-"${VERSION}"
tar czf "dist/AetherMC-$VERSION.tar.gz" "AetherMC-${VERSION}"

echo "-- artifacts installed in $PWD/dist"

ls -lh dist