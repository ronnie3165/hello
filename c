gcc -g -fsanitize=leak `pkg-config --cflags gtk+-3.0` hello_world.c `pkg-config --libs gtk+-3.0`
