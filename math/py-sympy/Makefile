# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD$

PORTNAME=	sympy
PORTVERSION=	1.3
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Python Library For Symbolic Mathematics

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mpmath>=0.19:math/py-mpmath@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils concurrent autoplist
NO_ARCH=	yes

OPTIONS_DEFINE=	PYGLET
PYGLET_DESC=	Enable plotting support

PYGLET_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyglet>=1.1.2:graphics/py-pyglet@${PY_FLAVOR}

post-patch:
	@${REINPLACE_CMD} -e "s#share/man/man1#man/man1#" ${WRKSRC}/setup.py

.include <bsd.port.mk>
