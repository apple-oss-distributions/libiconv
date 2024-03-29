# $FreeBSD$

.include <bsd.own.mk>

.PATH: ${.CURDIR}

ESDBDIR?= /usr/share/i18n/esdb
.if ${MK_STAGING} == "yes"
MKESDB= ${STAGE_HOST_OBJTOP}/usr/bin/mkesdb_static
.endif
#ifdef __APPLE__
MKESDB?= /usr/local/bin/mkesdb
#else
#MKESDB?= ${.OBJDIR:H:H:H}/usr.bin/mkesdb_static/mkesdb_static
#endif
