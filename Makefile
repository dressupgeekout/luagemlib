CROSS_PREFIX?=	m68k-atari-mint-

CC=	$(CROSS_PREFIX)gcc -std=gnu99
AR=	$(CROSS_PREFIX)ar rcu
RANLIB=	$(CROSS_PREFIX)ranlib
STRIP=	$(CROSS_PREFIX)strip

LUAGEM_SRCS=	# defined
LUAGEM_SRCS+=	luagemlib.c

########## ########## ##########

LUA_SRCDIR=	lua
LIBLUA=		liblua.a
CLEANFILES+=	$(LIBLUA)

PROG=		LUAGEM.PRG
CLEANFILES+=	$(PROG)

LUAGEM_OBJS=	$(patsubst %.c,%.o,$(LUAGEM_SRCS))
CLEANFILES+=	$(LUAGEM_OBJS)

CFLAGS=		-I$(LUA_SRCDIR)

LDFLAGS=	# defined
LDFLAGS+=	-lm
LDFLAGS+=	-lgem

########## ########## ##########

.PHONY: all
all: $(PROG)

$(PROG): $(LUAGEM_OBJS) $(LIBLUA)
	$(CC) -o $@ $(LUAGEM_OBJS) $(LDFLAGS) $(LIBLUA)
	$(STRIP) $@

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(LIBLUA):
	$(MAKE) -C $(LUA_SRCDIR) liblua.a PLAT=c89 CC="$(CC)" AR="$(AR)" RANLIB="$(RANLIB)"
	cp $(LUA_SRCDIR)/liblua.a $@

.PHONY: clean
clean:
	rm -f $(CLEANFILES)
	$(MAKE) -C $(LUA_SRCDIR) clean
