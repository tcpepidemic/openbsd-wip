# $OpenBSD$

COMMENT =		OpenVAS server security scanner
DISTNAME =		openvas-scanner-3.3.1

WANTLIB =		c pthread gcrypt glib-2.0
WANTLIB +=		openvas_base openvas_hg openvas_misc openvas_nasl \
			openvas_omp \
			gnutls gpg-error gpgme assuan

MASTER_SITES =		${MASTER_SITES_OPENVAS:=1092/}

RUN_DEPENDS =		net/rsync

LIB_DEPENDS =		security/openvas/libraries \
			security/gnutls \
			security/gpgme \
			security/libassuan \
			security/libgpg-error

SEPARATE_BUILD =	No

post-install:
		${INSTALL_DATA_DIR} ${PREFIX}/share/doc/openvas
		@sed -e s#!!PREFIX!!#${TRUEPREFIX}#g ${FILESDIR}/README.OpenBSD > \
				${WRKBUILD}/README.OpenBSD
		${INSTALL_DATA} ${WRKBUILD}/README.OpenBSD \
				${PREFIX}/share/doc/openvas

.include <bsd.port.mk>
