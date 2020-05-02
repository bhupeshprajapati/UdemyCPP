.PHONY: clean All

All:
	@echo "----------Building project:[ ChallengeSec15 - Debug ]----------"
	@cd "ChallengeSec15" && "$(MAKE)" -f  "ChallengeSec15.mk"
clean:
	@echo "----------Cleaning project:[ ChallengeSec15 - Debug ]----------"
	@cd "ChallengeSec15" && "$(MAKE)" -f  "ChallengeSec15.mk" clean
