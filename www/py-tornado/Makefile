# $OpenBSD: Makefile,v 1.7 2013/03/11 11:44:48 espie Exp $

COMMENT =		scalable, non-blocking web server

MODPY_EGG_VERSION =	3.2
DISTNAME =		tornado-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}

CATEGORIES =		www

HOMEPAGE =		http://www.tornadoweb.org/

# Apache v2
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=t/tornado/}

MODULES =		lang/python
RUN_DEPENDS +=		devel/py-backports-ssl-match-hostname
WANTLIB +=		pthread python2.7

MODPY_SETUPTOOLS =	Yes

pre-configure:
	${SUBST_CMD} ${WRKSRC}/runtests.sh

TEST_DEPENDS +=		devel/py-twisted/names \
			devel/py-twisted/web \
			devel/py-mock \
			net/py-curl \
			devel/py-futures
do-test:
	@cd ${WRKSRC} && sh runtests.sh

.include <bsd.port.mk>
