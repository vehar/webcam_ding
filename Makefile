#############################################################################
# Makefile for building: camera
# Generated by qmake (3.0) (Qt 5.3.0)
# Project:  camera.pro
# Template: app
# Command: C:\Qt_online\5.3\msvc2012_opengl\bin\qmake.exe -spec win32-msvc2012 -o Makefile camera.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = C:\Qt_online\5.3\msvc2012_opengl\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = copy /y
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: camera.pro ..\..\..\..\5.3\msvc2012_opengl\mkspecs\win32-msvc2012\qmake.conf ..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\spec_pre.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\common\shell-win32.conf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\qconfig.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axbase.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axbase_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axcontainer.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axcontainer_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axserver.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axserver_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_bluetooth.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_bluetooth_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_bootstrap_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_clucene_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_concurrent.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_concurrent_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_core.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_core_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_declarative.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_declarative_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_designer.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_designer_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_designercomponents_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_enginio.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_enginio_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_gui.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_gui_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_help.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_help_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_multimedia.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_multimedia_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_multimediawidgets.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_multimediawidgets_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_network.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_network_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_nfc.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_nfc_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_opengl.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_opengl_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_openglextensions.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_openglextensions_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_platformsupport_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_positioning.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_positioning_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_printsupport.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_printsupport_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qml.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qml_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qmldevtools_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qmltest.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qmltest_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_quick.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_quick_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_quickparticles_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_quickwidgets.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_quickwidgets_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_script.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_script_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_scripttools.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_scripttools_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_sensors.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_sensors_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_serialport.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_serialport_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_sql.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_sql_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_svg.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_svg_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_testlib.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_testlib_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_uitools.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_uitools_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_webkit.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_webkit_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_webkitwidgets.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_webkitwidgets_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_websockets.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_websockets_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_widgets.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_widgets_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_winextras.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_winextras_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_xml.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_xml_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_xmlpatterns.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_xmlpatterns_private.pri \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\qt_functions.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\qt_config.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\win32\qt_config.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\win32-msvc2012\qmake.conf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\spec_post.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\exclusive_builds.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\default_pre.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\win32\default_pre.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\resolve_config.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\exclusive_builds_post.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\default_post.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\win32\rtti.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\precompile_header.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\warn_on.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\qt.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\resources.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\moc.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\win32\opengl.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\uic.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\win32\windows.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\testcase_targets.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\exceptions.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\yacc.prf \
		..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\lex.prf \
		camera.pro \
		C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5MultimediaWidgets.prl \
		C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5PrintSupport.prl \
		C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5Multimedia.prl \
		C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5Widgets.prl \
		C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5Network.prl \
		C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5Gui.prl \
		C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5Core.prl
	$(QMAKE) -spec win32-msvc2012 -o Makefile camera.pro
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\spec_pre.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\common\shell-win32.conf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\qconfig.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axbase.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axbase_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axcontainer.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axcontainer_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axserver.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_axserver_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_bluetooth.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_bluetooth_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_bootstrap_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_clucene_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_concurrent.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_concurrent_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_core.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_core_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_declarative.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_declarative_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_designer.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_designer_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_designercomponents_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_enginio.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_enginio_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_gui.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_gui_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_help.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_help_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_multimedia.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_multimedia_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_multimediawidgets.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_network.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_network_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_nfc.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_nfc_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_opengl.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_opengl_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_openglextensions.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_openglextensions_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_platformsupport_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_positioning.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_positioning_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_printsupport.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_printsupport_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qml.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qml_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qmldevtools_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qmltest.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qmltest_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_quick.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_quick_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_quickparticles_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_quickwidgets.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_quickwidgets_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_script.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_script_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_scripttools.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_scripttools_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_sensors.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_sensors_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_serialport.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_serialport_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_sql.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_sql_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_svg.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_svg_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_testlib.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_testlib_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_uitools.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_uitools_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_webkit.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_webkit_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_webkitwidgets.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_webkitwidgets_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_websockets.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_websockets_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_widgets.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_widgets_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_winextras.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_winextras_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_xml.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_xml_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_xmlpatterns.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\qt_functions.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\qt_config.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\win32\qt_config.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\win32-msvc2012\qmake.conf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\spec_post.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\exclusive_builds.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\default_pre.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\win32\default_pre.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\resolve_config.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\exclusive_builds_post.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\default_post.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\win32\rtti.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\precompile_header.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\warn_on.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\qt.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\resources.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\moc.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\win32\opengl.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\uic.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\win32\windows.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\testcase_targets.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\exceptions.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\yacc.prf:
..\..\..\..\5.3\msvc2012_opengl\mkspecs\features\lex.prf:
camera.pro:
C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5MultimediaWidgets.prl:
C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5PrintSupport.prl:
C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5Multimedia.prl:
C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5Widgets.prl:
C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5Network.prl:
C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5Gui.prl:
C:/Qt_online/5.3/msvc2012_opengl/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-msvc2012 -o Makefile camera.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first FORCE
all: release-all debug-all FORCE
clean: release-clean debug-clean FORCE
	-$(DEL_FILE) camera.exp
distclean: release-distclean debug-distclean FORCE
	-$(DEL_FILE) Makefile

release-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile