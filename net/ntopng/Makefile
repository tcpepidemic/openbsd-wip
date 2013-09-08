# $OpenBSD: Makefile.template,v 1.67 2013/07/10 15:22:23 bcallah Exp $

#
# Very short description of the package, 60 chars max
#
COMMENT =		next-generation network top

DISTNAME =		ntopng-1.0

CATEGORIES =		net security

HOMEPAGE =		http://www.ntop.org

#MAINTAINER =		???

# Licensing:  This determines what we can distribute.
# When you determine the license type, make sure to look at ALL distfiles.
# Every distfile can have a different license.  The PERMIT_* values are
# determined by the most restrictive license.  If you have two licenses
# that are in conflict, set PERMIT_* based on the most restrictive one.
# Make SURE you get these values right.

# Put a comment there to state what's going on.
# Can be as brief as `BSD' or `GPLv2', but it'd better be easy to check,
# if someone wants to double-check licensing.
# In case of GPL, version number must be appended (e.g. v2, v2+, v3).
# Setting PERMIT_PACKAGE_CDROM=Yes defaults other PERMIT_* variables to Yes.
PERMIT_PACKAGE_CDROM =	Yes
#PERMIT_PACKAGE_FTP =	Yes | Reason if No
#PERMIT_DISTFILES_FTP =	Yes | Reason if No

# "make port-lib-depends-check" can help
#WANTLIB =		???

MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=ntop/}

#INSTALL_TARGET =	/usr/local/

# build/configuration variables
#
#SEPARATE_BUILD =	Yes
#SEPARATE_BUILD =	flavored (distinct flavors may share a common WRKSRC)
USE_GMAKE =		Yes
CONFIGURE_STYLE =	gnu

.include <bsd.port.mk>
