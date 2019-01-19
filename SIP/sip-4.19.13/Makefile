
all:
	cd sipgen
	$(MAKE)
	@cd ..
	cd siplib
	$(MAKE)
	@cd ..

install:
	cd sipgen
	$(MAKE) install
	@cd ..
	cd siplib
	$(MAKE) install
	@cd ..
	@if not exist D:\Python34\Lib\site-packages mkdir D:\Python34\Lib\site-packages
	copy /y sipconfig.py D:\Python34\Lib\site-packages\sipconfig.py
	copy /y E:\Workspace\Python\Python_Embed\SIP\sip-4.19.13\sipdistutils.py D:\Python34\Lib\site-packages\sipdistutils.py
	D:\Python34\python.exe E:\Workspace\Python\Python_Embed\SIP\sip-4.19.13\mk_distinfo.py "$(DESTDIR)" D:\Python34\Lib\site-packages\sip-4.19.13.dist-info installed.txt

clean:
	cd sipgen
	$(MAKE) clean
	@cd ..
	cd siplib
	$(MAKE) clean
	@cd ..
