# $OpenBSD: Makefile.template,v 1.68 2013/10/02 07:34:45 ajacoutot Exp $

COMMENT =		seafile client

NAME =			seafile-client

WANTLIB += QtGui QtNetwork c ccnet crypto gio-2.0 glib-2.0
WANTLIB += gobject-2.0 intl jansson m pthread seafile searpc sqlite3
WANTLIB += ssl stdc++

MODULES =		devel/cmake devel/gettext x11/qt4
LIB_DEPENDS =		net/seafile/seafile

CONFIGURE_ARGS +=	-DCMAKE_BUILD_TYPE=Release

NO_TEST =		Yes

post-configure:
	cd ${WRKSRC}/i18n/ && lrelease4 *.ts

.include <bsd.port.mk>
