################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/States/GameOverState.cpp \
../src/States/GameStateMachine.cpp \
../src/States/MenuState.cpp \
../src/States/PauseState.cpp \
../src/States/PlayState.cpp 

OBJS += \
./src/States/GameOverState.o \
./src/States/GameStateMachine.o \
./src/States/MenuState.o \
./src/States/PauseState.o \
./src/States/PlayState.o 

CPP_DEPS += \
./src/States/GameOverState.d \
./src/States/GameStateMachine.d \
./src/States/MenuState.d \
./src/States/PauseState.d \
./src/States/PlayState.d 


# Each subdirectory must supply rules for building sources it contributes
src/States/%.o: ../src/States/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/SDL2/ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


