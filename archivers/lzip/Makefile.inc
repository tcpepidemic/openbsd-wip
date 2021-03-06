# $OpenBSD: Makefile.inc,v 1.3 2014/01/17 19:46:21 juanfra Exp $

# This directory contain every lzip project.
# lzd isn't included due to the educational purpose of this and the author
# doesn't recommend the use of lzd in production.

CATEGORIES =		archivers

MAINTAINER =		Juan Francisco Cantero Hurtado <juanfra@openbsd.org>

MASTER_SITES ?=		${MASTER_SITE_SAVANNAH:=lzip/} \
			${MASTER_SITE_SAVANNAH:=lzip/old/}

EXTRACT_SUFX ?=		.tar.lz

DIST_SUBDIR =		lzip

CONFIGURE_STYLE =	simple
CONFIGURE_ARGS +=	CC="${CC}" CXX="${CXX}" \
			CPPFLAGS="-I${LOCALBASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib" \
			CFLAGS="${CFLAGS}" CXXFLAGS="${CXXFLAGS}" \
			--prefix=${PREFIX} \
			--infodir=${PREFIX}/info \
			--mandir=${PREFIX}/man

.ifndef DEBUG
INSTALL_TARGET ?=	install-strip
.endif

TEST_TARGET =		check
