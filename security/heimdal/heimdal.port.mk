# $OpenBSD$

MODHEIMDAL_WANTLIB +=	com_err crypto
MODHEIMDAL_WANTLIB +=	heimdal/lib/asn1
MODHEIMDAL_WANTLIB +=	heimdal/lib/heimbase
MODHEIMDAL_WANTLIB +=	heimdal/lib/heimsqlite
MODHEIMDAL_WANTLIB +=	heimdal/lib/hx509
MODHEIMDAL_WANTLIB +=	heimdal/lib/krb5
MODHEIMDAL_WANTLIB +=	heimdal/lib/roken
MODHEIMDAL_WANTLIB +=	heimdal/lib/wind

MODHEIMDAL_LIB_DEPENDS=	security/kerberos/heimdal,-libs

LIB_DEPENDS +=		${MODHEIMDAL_LIB_DEPENDS}
WANTLIB +=		${MODHEIMDAL_WANTLIB}

MODHEIMDAL_post-patch=	ln -sf ${LOCALBASE}/heimdal/bin/krb5-config ${WRKDIR}/bin/krb5-config
