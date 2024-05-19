# vim
## Configure editor via vim ~/.vimrc
set number
syntax on

# CMake
## Create and navigate to the build directory
`mkdir build`<br>
`cd build`<br>

## Configure the project
`cmake ..`<br>

## Build the project
`cmake --build .`<br>

## Run the executable
./cpp-project

# Doctest
## Run tests
### Build 
`cd ./build`<br>
`rm -rf ./* && cmake .. && make`<br>
### Run
`ctest --test-dir tests` or<br>
`ctest --rerun-failed --output-on-failure` or<br>
`make test`

## Set alias for clean-up build
`alias cmake-clean-build='cd ./build && rm -rf ./* && cmake .. && make'`

