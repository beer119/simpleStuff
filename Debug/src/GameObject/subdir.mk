################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/GameObject/AnimatedGraphic.cpp \
../src/GameObject/Enemy.cpp \
../src/GameObject/MenuButton.cpp \
../src/GameObject/Player.cpp \
../src/GameObject/SDLGameObject.cpp 

OBJS += \
./src/GameObject/AnimatedGraphic.o \
./src/GameObject/Enemy.o \
./src/GameObject/MenuButton.o \
./src/GameObject/Player.o \
./src/GameObject/SDLGameObject.o 

CPP_DEPS += \
./src/GameObject/AnimatedGraphic.d \
./src/GameObject/Enemy.d \
./src/GameObject/MenuButton.d \
./src/GameObject/Player.d \
./src/GameObject/SDLGameObject.d 


# Each subdirectory must supply rules for building sources it contributes
src/GameObject/%.o: ../src/GameObject/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/SDL2/ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


