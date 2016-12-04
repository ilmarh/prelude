# Created by: Robin Gruyters <r.gruyters@yirdis.nl>
# $FreeBSD: head/www/py-prewikka/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	prewikka
PORTVERSION=	3.1.0
PORTREVISION=	3
CATEGORIES=	www security python
MASTER_SITES=	https://www.prelude-siem.org/attachments/download/727/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Frontend for the Prelude IDS

BUILD_DEPENDS=	cheetah-compile:devel/py-cheetah
LIB_DEPENDS=	libprelude.so:security/libprelude \
		libpreludedb.so:security/libpreludedb

USES=		python:2
USE_PYTHON=	distutils
PYDISTUTILS_INSTALLNOSINGLE=	YES

.include <bsd.port.options.mk>
.include <bsd.port.mk>
