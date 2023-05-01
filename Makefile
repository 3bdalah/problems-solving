.PHONY: clean All

All:
	@echo "----------Building project:[ P-06 - Debug ]----------"
	@cd "P-06" && "$(MAKE)" -f  "P-06.mk"
clean:
	@echo "----------Cleaning project:[ P-06 - Debug ]----------"
	@cd "P-06" && "$(MAKE)" -f  "P-06.mk" clean
