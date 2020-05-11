.PHONY: clean All

All:
	@echo "----------Building project:[ ReadFile - Debug ]----------"
	@cd "ReadFile" && "$(MAKE)" -f  "ReadFile.mk"
clean:
	@echo "----------Cleaning project:[ ReadFile - Debug ]----------"
	@cd "ReadFile" && "$(MAKE)" -f  "ReadFile.mk" clean
