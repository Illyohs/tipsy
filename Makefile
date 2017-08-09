NAME=tispy
VERSION=1.0.0
BINDIR=bin
SRC=./src/*.cpp

INCLUDES=`pkg-config --libs --static yaml-cpp`

mkbin:
	mkdir -p $(BINDIR)

build: mkbin
	$(CXX) $(INCLUDES) $(SRC) -o $(BINDIR)/$(NAME)-$(VERSION)


debug: mkbin
	$(CXX) $(INCLUDES) $(SRC) -g -o $(BINDIR)/$(NAME)-debug-$(VERSION)
