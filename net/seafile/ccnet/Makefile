# $OpenBSD: Makefile.template,v 1.68 2013/10/02 07:34:45 ajacoutot Exp $

COMMENT =		framework for writing networked applications in C

NAME = 			ccnet

SHARED_LIBS =		ccnet 0.0

# GPLv3+
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += c crypto event_core event_extra ffi gio-2.0 glib-2.0
WANTLIB += gmodule-2.0 gobject-2.0 iconv intl jansson pcre pthread
WANTLIB += searpc sqlite3 ssl uuid z zdb

MODULES =		devel/gettext lang/python
BUILD_DEPENDS =		devel/libtool \
			lang/vala
LIB_DEPENDS =		databases/libzdb \
			devel/libevent2 \
			sysutils/e2fsprogs \
			net/seafile/searpc

USE_GMAKE =		Yes
CONFIGURE_STYLE =	automake
CONFIGURE_ENV +=	CPPFLAGS=-I${LOCALBASE}/include \
			LDFLAGS=-L${LOCALBASE}/lib
CONFIGURE_ARGS += 	--enable-server \
			--disable-compile-demo

AUTOCONF_VERSION =	2.63
AUTOMAKE_VERSION =	1.11

MODPY_ADJ_FILES = 	tools/ccnet-admin.py

pre-configure:
	cd ${WRKSRC} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} libtoolize --force --copy
	cd ${WRKSRC} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} aclocal --force
	cd ${WRKSRC} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} autoheader -f
	cd ${WRKSRC} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} automake --add-missing
	cd ${WRKSRC} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} autoconf -f

.include <bsd.port.mk>
