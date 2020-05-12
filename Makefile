.PHONY: clean All

All:
	@echo "----------Building project:[ fileTestScoreChallenge - Debug ]----------"
	@cd "fileTestScoreChallenge" && "$(MAKE)" -f  "fileTestScoreChallenge.mk"
clean:
	@echo "----------Cleaning project:[ fileTestScoreChallenge - Debug ]----------"
	@cd "fileTestScoreChallenge" && "$(MAKE)" -f  "fileTestScoreChallenge.mk" clean
