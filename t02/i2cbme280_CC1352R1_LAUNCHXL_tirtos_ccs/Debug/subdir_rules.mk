################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"/Volumes/Storage/shared/okhramkov/ccs/utils/ti-cgt-arm_20.2.4.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="/Volumes/Storage/shared/okhramkov/ti/i2cbme280_CC1352R1_LAUNCHXL_tirtos_ccs" --include_path="/Volumes/Storage/shared/okhramkov/ti/i2cbme280_CC1352R1_LAUNCHXL_tirtos_ccs/Debug" --include_path="/Volumes/Storage/shared/okhramkov/ccs/utils/simplelink_cc13x2_26x2_sdk_3_30_00_03/source" --include_path="/Users/okhramkov/ti/sail_1_50_00_00/source" --include_path="/Volumes/Storage/shared/okhramkov/ccs/utils/simplelink_cc13x2_26x2_sdk_3_30_00_03/source/ti/posix/ccs" --include_path="/Volumes/Storage/shared/okhramkov/ccs/utils/ti-cgt-arm_20.2.4.LTS/include" --advice:power=none --define=DeviceFamily_CC13X2 -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="/Volumes/Storage/shared/okhramkov/ti/i2cbme280_CC1352R1_LAUNCHXL_tirtos_ccs/Debug/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1693828431: ../i2cbme280.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"/Volumes/Storage/shared/okhramkov/ccs/utils/sysconfig_1.8.1/sysconfig_cli.sh" -s "/Volumes/Storage/shared/okhramkov/ccs/utils/simplelink_cc13x2_26x2_sdk_3_30_00_03/.metadata/product.json" -s "/Users/okhramkov/ti/sail_1_50_00_00/.metadata/product.json" -s "/Volumes/Storage/shared/okhramkov/ccs/utils/simplelink_cc13x2_26x2_sdk_3_30_00_03/.metadata/product.json" --script "/Volumes/Storage/shared/okhramkov/ti/i2cbme280_CC1352R1_LAUNCHXL_tirtos_ccs/i2cbme280.syscfg" -o "syscfg"
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/ti_devices_config.c: build-1693828431 ../i2cbme280.syscfg
syscfg/ti_drivers_config.c: build-1693828431
syscfg/ti_drivers_config.h: build-1693828431
syscfg/syscfg_c.rov.xs: build-1693828431
syscfg/: build-1693828431

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"/Volumes/Storage/shared/okhramkov/ccs/utils/ti-cgt-arm_20.2.4.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="/Volumes/Storage/shared/okhramkov/ti/i2cbme280_CC1352R1_LAUNCHXL_tirtos_ccs" --include_path="/Volumes/Storage/shared/okhramkov/ti/i2cbme280_CC1352R1_LAUNCHXL_tirtos_ccs/Debug" --include_path="/Volumes/Storage/shared/okhramkov/ccs/utils/simplelink_cc13x2_26x2_sdk_3_30_00_03/source" --include_path="/Users/okhramkov/ti/sail_1_50_00_00/source" --include_path="/Volumes/Storage/shared/okhramkov/ccs/utils/simplelink_cc13x2_26x2_sdk_3_30_00_03/source/ti/posix/ccs" --include_path="/Volumes/Storage/shared/okhramkov/ccs/utils/ti-cgt-arm_20.2.4.LTS/include" --advice:power=none --define=DeviceFamily_CC13X2 -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="/Volumes/Storage/shared/okhramkov/ti/i2cbme280_CC1352R1_LAUNCHXL_tirtos_ccs/Debug/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


