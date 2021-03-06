DESCRIPTION = "Vala DBus Binding Tool"
SECTION = "devel"
DEPENDS = "vala libgee libxml2 intltool-native"
HOMEPAGE = "http://wiki.freesmartphone.org/index.php/Implementations/vala-dbus-binding-tool"
LICENSE = "GPLv2"
PE = "1"
INC_PR = "r3"

SRC_URI = "http://downloads.freesmartphone.org/sources/vala-dbus-binding-tool-${PV}.tar.bz2;name=archive"

inherit autotools

BBCLASSEXTEND = "native"
