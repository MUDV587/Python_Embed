TARGET = sip.pyd
OFILES = siplib.obj apiversions.obj descriptors.obj qtlib.obj threads.obj objmap.obj voidptr.obj array.obj int_convertors.obj bool.obj
HFILES = sip.h sipint.h array.h 

CC = cl
CXX = cl
LINK = link
CPPFLAGS = -DNDEBUG -DUNICODE -DWIN32 -I. -ID:\Python34\include
CFLAGS = -nologo -Zm200 -Zc:wchar_t- -O2 -MD -W3
CXXFLAGS = -nologo -Zm200 -Zc:wchar_t- -O2 -MD -W3 -w34100 -w34189 -w44996
LFLAGS = /NOLOGO /DYNAMICBASE /NXCOMPAT /DLL /MANIFEST /MANIFESTFILE:$(TARGET).manifest /SUBSYSTEM:CONSOLE /INCREMENTAL:NO
LIBS = /LIBPATH:D:\Python34\libs python34.lib
.SUFFIXES: .c .cpp .cc .cxx .C


{.}.cpp{}.obj::
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -Fo @<<
	$<
<<

{.}.cc{}.obj::
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -Fo @<<
	$<
<<

{.}.cxx{}.obj::
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -Fo @<<
	$<
<<

{.}.C{}.obj::
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -Fo @<<
	$<
<<

{.}.c{}.obj::
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -Fo @<<
	$<
<<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	$(LINK) $(LFLAGS) /OUT:$(TARGET) @<<
	  $(OFILES) $(LIBS)
<<

install: $(TARGET)
	@if not exist D:\Python34\Lib\site-packages mkdir D:\Python34\Lib\site-packages
	copy /y $(TARGET) D:\Python34\Lib\site-packages\$(TARGET)
	@if not exist D:\Python34\Lib\site-packages mkdir D:\Python34\Lib\site-packages
	copy /y E:\Workspace\Python\Python_Embed\SIP\sip-4.19.13\sip.pyi D:\Python34\Lib\site-packages\sip.pyi

clean:
	-del $(TARGET)
	-del siplib.obj
	-del apiversions.obj
	-del descriptors.obj
	-del qtlib.obj
	-del threads.obj
	-del objmap.obj
	-del voidptr.obj
	-del array.obj
	-del int_convertors.obj
	-del bool.obj
	-del $(TARGET).manifest
