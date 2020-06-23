# for GNU make

TARGET = example
SRCS = messagebox.c example.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall

PKG_CONFIG ?= $(shell which pkg-config)
ifeq ($(PKG_CONFIG),)
LDLIBS += -lX11
else
CFLAGS += $(shell $(PKG_CONFIG) --cflags x11)
LDFLAGS += $(shell $(PKG_CONFIG) --libs-only-L x11)
LDLIBS += $(shell $(PKG_CONFIG) --libs-only-l x11)
endif

default:	$(TARGET)

all:	default

build:	default

$(TARGET):	$(OBJS)

run:	$(TARGET)
	./$(TARGET)

clean:
	$(RM) $(TARGET) $(OBJS)

.PHONY: default all clean run
