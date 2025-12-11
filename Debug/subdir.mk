################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Charakterklassen.cpp \
../Funktionen.cpp \
../main.cpp \
../menu.cpp 

CPP_DEPS += \
./Charakterklassen.d \
./Funktionen.d \
./main.d \
./menu.d 

OBJS += \
./Charakterklassen.o \
./Funktionen.o \
./main.o \
./menu.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Charakterklassen.d ./Charakterklassen.o ./Funktionen.d ./Funktionen.o ./main.d ./main.o ./menu.d ./menu.o

.PHONY: clean--2e-

