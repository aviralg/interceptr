################################################################################
## PROGRAMS
################################################################################
MKDIR := mkdir -p
RM := rm -rf
CP := cp
GIT := git
MAKE := make
CMAKE := cmake
WGET := wget
TAR := tar
GCC := gcc

################################################################################
## PATHS
################################################################################
SRCDIR := $(shell realpath src)
INCLUDEDIR := $(shell realpath include)
BUILDDIR := $(shell realpath build)
SOURCES := $(shell find $(SRCDIR) -name '*.cpp') $(shell find $(SRCDIR) -name '*.c')
INCLUDES := $(shell find $(INCLUDEDIR) -name '*.h')
LIBRARY := libinterceptr.so
GIT_COMMIT_INFO != git log --pretty=oneline -1

all: clean build

$(BUILDDIR)/lib/$(LIBRARY): $(SOURCES) $(INCLUDES)
	$(MKDIR) $(BUILDDIR)/lib
	$(GCC) -fPIC -shared -DGIT_COMMIT_INFO='"$(GIT_COMMIT_INFO)"' -I$(INCLUDEDIR) -ldl $(SOURCES) -o $@

$(BUILDDIR)/include/interceptr.h: $(SOURCES) $(INCLUDES)
	$(MKDIR) $(BUILDDIR)/include
	$(CP) include/interceptr.h $(BUILDDIR)/include/
	$(CP) -r include/wrappers $(BUILDDIR)/include/

build: $(BUILDDIR)/lib/$(LIBRARY) $(BUILDDIR)/include/interceptr.h

clean:
	$(RM) $(BUILDDIR)

.PHONY: build clean