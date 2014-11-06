# Testing makefiles 
#

# defining commands

SHELL = /bin/sh


oo:titi
	@echo $(Q)-$(MAKECMDGOALS)-$(@)
	@echo "make: $(MAKE)"
	@echo "cc:   $(CC)"
	@echo ""
	
titi:
	@echo "-make $(@)"
	touch titi

hello:
	$(CC) hello.c
	
all: hello
	@echo -e "Current directory is:$(CURDIR)"
	
	
versions:
	$(SHELL) --version
	
	
	

