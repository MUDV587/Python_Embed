TARGET = sip.exe
OFILES = main.obj transform.obj gencode.obj extracts.obj export.obj type_hints.obj heap.obj parser.obj lexer.obj
HFILES = sip.h parser.h

CC = cl
CXX = cl
LINK = link
CPPFLAGS = -DNDEBUG -DUNICODE -DWIN32 -I.
CFLAGS = -nologo -Zm200 -Zc:wchar_t- -O2 -MD -W3
CXXFLAGS = -nologo -Zm200 -Zc:wchar_t- -O2 -MD -W3 -w34100 -w34189 -w44996
LFLAGS = /NOLOGO /DYNAMICBASE /NXCOMPAT /INCREMENTAL:NO /MANIFEST /MANIFESTFILE:$(TARGET).manifest /SUBSYSTEM:CONSOLE
LIBS = 
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
	@if not exist D:\Python34 mkdir D:\Python34
	copy /y $(TARGET) D:\Python34\$(TARGET)
	@if not exist D:\Python34\include mkdir D:\Python34\include
	copy /y E:\Workspace\Python\Python_Embed\SIP\sip-4.19.13\siplib\sip.h D:\Python34\include\sip.h

clean:
	-del $(TARGET)
	-del main.obj
	-del transform.obj
	-del gencode.obj
	-del extracts.obj
	-del export.obj
	-del type_hints.obj
	-del heap.obj
	-del parser.obj
	-del lexer.obj
	-del $(TARGET).manifest
