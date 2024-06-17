SPIKE-RT_DIR = ../../../spike-rt

SPIKE-RT_KERNELLIB_DIR = $(SPIKE-RT_DIR)/build/obj-primehub_kernel/

DFU_UTIL_WIN = $(SPIKE-RT_DIR)/dfu-util-0.11-binaries/win64/dfu-util.exe
DFU_UTIL_LIN = $(SPIKE-RT_DIR)/scripts/deploy-dfu.sh

deploy-win: asp.bin
	@echo "Writing $< to the board"
	$(DFU_UTIL_WIN) -a 0 -d 0x0694:0x0008 -s 0x8008000 -R -D $(OBJNAME).bin

deploy-lin: asp.bin
	@echo "Writing $< to the board"
	sudo PYTHON3=python3 $(DFU_UTIL_LIN) $(OBJNAME).bin
