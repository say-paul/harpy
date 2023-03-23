add_library(common
        Agent.cpp
        BlinkAgent.cpp
        CounterAgent.cpp
        )

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(common 
	pico_stdlib
        FreeRTOS-Kernel-Heap4
        hardware_spi
)
	
target_include_directories(common PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/../../lib/FreeRTOS-Kernel/include
)
