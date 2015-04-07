make -f ./CPPMakefile
make -f ./JavaMakefile
jar cfm Fork.jar Manifest.txt Main.class nebula/Utils.class nebula/SysClass.class Fork.so

