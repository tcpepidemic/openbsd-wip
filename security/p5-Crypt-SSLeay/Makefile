# $OpenBSD: Makefile,v 1.32 2012/10/12 09:16:07 bluhm Exp $

SHARED_ONLY=	Yes

COMMENT=	library to provide LWP https support via OpenSSL

MODULES=	cpan
DISTNAME=	Crypt-SSLeay-0.64
REVISION=	0
CATEGORIES=	security

MAINTAINER =		Alexander Bluhm <bluhm@openbsd.org>

# Artistic 2.0
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

WANTLIB +=		c crypto ssl z

# These are for testing perl test check for
# module version during configure
BUILD_DEPENDS =	devel/p5-Try-Tiny>=0.9 \
		www/p5-LWP-Protocol-https>=6.02

CONFIGURE_ARGS+=--default --lib=/usr 

# Use make -D LIVE_TEST regress to run regression with live tests
.ifdef	LIVE_TEST
CONFIGURE_ARGS +=	--live-tests
.else
CONFIGURE_ARGS +=	--no-live-tests
.endif

MODCPAN_EXAMPLES=	Yes
MODCPAN_EXAMPLES_DIST=	eg

.include <bsd.port.mk>