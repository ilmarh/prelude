# Created by: Dryice Liu<dryice@dryice.name>
# $FreeBSD: head/devel/py-babel/Makefile 415560 2016-05-20 17:06:47Z olivierd $

PORTNAME=	prelude-correlator
PORTVERSION=	3.1.0
CATEGORIES=	security python
MASTER_SITES=	https://www.prelude-siem.org/attachments/download/723/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gaod@hychen.org
COMMENT=	Prelude SIEM Corellator

LIB_DEPENDS=	libpreludedb.so:security/libpreludedb

USES=		python
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes

.include <bsd.port.mk>
