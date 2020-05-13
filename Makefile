.PHONY: clean All

All:
	@echo "----------Building project:[ ClassTemplateforArray - Debug ]----------"
	@cd "ClassTemplateforArray" && "$(MAKE)" -f  "ClassTemplateforArray.mk"
clean:
	@echo "----------Cleaning project:[ ClassTemplateforArray - Debug ]----------"
	@cd "ClassTemplateforArray" && "$(MAKE)" -f  "ClassTemplateforArray.mk" clean
