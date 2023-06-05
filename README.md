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

# running the paper experiment
cd docker/
sudo bash init-docker.sh
sudo docker build -t ubuntu_atc2022 .
sudo docker run --name ubuntu_atc2022 -it ubuntu_atc2022
sudo docker exec -it ubuntu_atc2022 /bin/bash
python3 test_run.py
# should return something like https://github.com/stonysystems/depfast-ae#2-run-minimal-working-examples-locally-5minutes

``
