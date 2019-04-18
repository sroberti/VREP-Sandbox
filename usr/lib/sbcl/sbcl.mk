CC=cc
LD=ld
CFLAGS=-g -O2 -fdebug-prefix-map=/build/sbcl-Y6O0EJ/sbcl-1.4.5=. -fstack-protector-strong -Wformat -Werror=format-security -g -Wall -Wundef -Wsign-compare -Wpointer-arith -O3 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -fno-omit-frame-pointer -momit-leaf-frame-pointer -fno-pie
ASFLAGS=-g -O2 -fdebug-prefix-map=/build/sbcl-Y6O0EJ/sbcl-1.4.5=. -fstack-protector-strong -Wformat -Werror=format-security -g -Wall -Wundef -Wsign-compare -Wpointer-arith -O3 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -fno-omit-frame-pointer -momit-leaf-frame-pointer -fno-pie
LINKFLAGS=-g -Wl,--export-dynamic -no-pie
LDFLAGS=-Wl,-Bsymbolic-functions -Wl,-z,relro -no-pie
__LDFLAGS__= -no-pie
LIBS=-ldl -lpthread -lz -lm
