# projectEuler
Project Euler source code files

#  makefile commands for compiling (& linking) source code files
	1.) easy translate with just one "ps123.cpp" file, which includes the rest :
		1.1) make ps123
		1.2) ./ ps123.out

		#Remark: a set of standard libaries will be linked, like priemsieve and armadillo --> see, makefile//LIBS

	2.) not so easy dependencies:
		2.1) modify makefile --> add recipe for executable "pe001", like below

			pe001: obj/pe001.o
			$(CPP) -L $(LIBSDIR) $(LDFLAGS) -o $@.out $? $(LIBS)

		2.2) make ps123
		2.3) ./ ps123.out

	#Remark: there is no "make N=pe123" rule anymore.

# git commands for using this repository

	git init
	git config --global user.email "your@email"
	git config --global user.name "Your Name"
	git remote add origin https://github.com/aquaas/projectEuler.git

	# for getting files from server
	git pull origin master

	# Coden

	git add -A
	git commit -m "Commit Nachricht"

	# for delivering files to server
	git push origin master
