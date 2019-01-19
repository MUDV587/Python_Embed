TARGET = algorithm.pyd
OFILES = sipalgorithmcmodule.obj
HFILES = sipAPIalgorithm.h 

CC = cl
CXX = cl
LINK = link
CPPFLAGS = -DNDEBUG -DUNICODE -DWIN32 -I. -ID:\Python34\include
CFLAGS = -nologo -Zm200 -Zc:wchar_t- -O2 -MD -W3
CXXFLAGS = -nologo -Zm200 -Zc:wchar_t- -O2 -MD -W3 -w34100 -w34189 -w44996
LFLAGS = /NOLOGO /DYNAMICBASE /NXCOMPAT /DLL /MANIFEST /MANIFESTFILE:$(TARGET).manifest /SUBSYSTEM:WINDOWS /INCREMENTAL:NO
LIBS = /LIBPATH:D:\Python34\libs algorithm.dll python34.lib
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

clean:
	-del $(TARGET)
	-del sipalgorithmcmodule.obj
	-del $(TARGET).manifest
