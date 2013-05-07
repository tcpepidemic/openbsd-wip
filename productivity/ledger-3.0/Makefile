# $OpenBSD: Makefile,v 1.10 2013/03/06 05:04:40 bentley Exp $

COMMENT=		command line double-entry accounting ledger

PKGNAME=		ledger-3.0
CATEGORIES=		productivity
DISTNAME = 		next

HOMEPAGE=		http://www.ledger-cli.org

MAINTAINER=		Sergey Bronnikov <estetus@gmail.com>

#SHARED_LIBS=	amounts	0.0

# BSD
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=		https://github.com/ledger/ledger/archive/

EXTRACT_SUFX =  .zip 

WANTLIB=		c gmp>=4 m pcre stdc++

MODULES =       devel/cmake \
				lang/python

LIB_DEPENDS=	devel/gmp \
				devel/pcre

CONFIGURE_STYLE=	simple
CONFIGURE_SCRIPT=	acprep
CONFIGURE_ARGS=		opt make

SEPARATE_BUILD=	Yes

WRKSRC=${WRKDIR}/ledger-next

pre-configure:
	#cd ${WRKSRC}

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/ledger

.include <bsd.port.mk>