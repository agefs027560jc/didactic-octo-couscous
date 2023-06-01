# DepFast

## Building your own experiment

```bash

# clone source code
git clone --recursive https://github.com/agefs027560jc/depfast-ae.git depfast
cd depfast/

# install dependencies
sudo bash dep.sh

# build depfast
#cmake -S. -H. -B ./build
cmake -G Ninja -S. -H. -B ./build
cmake --build ./build

# running sample code
git clone https://github.com/agefs027560jc/didactic-octo-couscous.git sample
cd sample/
bash cpl.sh

``
