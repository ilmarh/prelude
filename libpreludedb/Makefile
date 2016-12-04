# Created by: Sergei Kolobov <sergei@FreeBSD.org>
# $FreeBSD: head/security/libpreludedb/Makefile 414014 2016-04-25 16:13:38Z mat $

PORTNAME=	libpreludedb
PORTVERSION=	3.1.0
PORTREVISION=	3
CATEGORIES=	security
MASTER_SITES=	https://www.prelude-siem.org/attachments/download/722/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library to access Prelude IDMEF database

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libprelude.so:security/libprelude
#LIBS+=		-lpreludecpp -lstdc++

USES=		gmake libtool
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-swig \
		--without-python3
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
LIBS += -lc++
LIBS += -lpreludecpp
LDFLAGS += -L/usr/local/lib

OPTIONS_DEFINE=		DOCS PYTHON
OPTIONS_MULTI=		DB
OPTIONS_MULTI_DB=	MYSQL PGSQL SQLITE
OPTIONS_DEFAULT=	MYSQL
OPTIONS_SUB=		yes

MYSQL_DESC=		MySQL plugin
MYSQL_USE=		mysql=yes
MYSQL_CONFIGURE_WITH=	mysql
PGSQL_DESC=		PostgreSQL plugin
PGSQL_USES=		pgsql
PGSQL_CONFIGURE_WITH=	postgresql
PYTHON_USES=		python:2.7
PYTHON_CONFIGURE_WITH=	python2=${PYTHON_CMD}
PYTHON_PLIST_SUB=	VERSION=${PORTVERSION}
SQLITE_DESC=		SQLite3 plugin
SQLITE_USES=		sqlite
SQLITE_CONFIGURE_WITH=	sqlite3

.include <bsd.port.mk>
