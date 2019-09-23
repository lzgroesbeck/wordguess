################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/currentgame.cpp \
../src/dictionary.cpp \
../src/wordguess.cpp 

OBJS += \
./src/currentgame.o \
./src/dictionary.o \
./src/wordguess.o 

CPP_DEPS += \
./src/currentgame.d \
./src/dictionary.d \
./src/wordguess.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


