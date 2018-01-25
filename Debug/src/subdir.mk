################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Game.cpp \
../src/InputHandler.cpp \
../src/LoaderParams.cpp \
../src/TextureManager.cpp \
../src/stfff.cpp 

OBJS += \
./src/Game.o \
./src/InputHandler.o \
./src/LoaderParams.o \
./src/TextureManager.o \
./src/stfff.o 

CPP_DEPS += \
./src/Game.d \
./src/InputHandler.d \
./src/LoaderParams.d \
./src/TextureManager.d \
./src/stfff.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/SDL2/ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


