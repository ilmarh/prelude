# Created by: Janos.Mohacsi@bsd.hu
# $FreeBSD: head/security/doscan/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	prelude-lml
PORTVERSION=	3.1.0
PORTREVISION=	3
CATEGORIES=	security 
MASTER_SITES=	https://www.prelude-siem.org/attachments/download/724/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	prelude lml

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpreludedb.so:security/libpreludedb

GNU_CONFIGURE=	yes
#USES=		gmake
USE_RC_SUBR=    prelude_lml

.include <bsd.port.mk>
