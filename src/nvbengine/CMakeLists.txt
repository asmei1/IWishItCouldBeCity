add_compile_options(${COMPILER_WARNINGS_FLAGS})

set(NVBENGINE_HEADERS
		include/nvbengine/TestHeader.hpp)

set(NVBENGINE_SRC
		src/TestHeader.cpp)


add_library(NVBEngine STATIC ${NVBENGINE_SRC} ${NVBENGINE_HEADERS})

target_compile_features(NVBEngine INTERFACE cxx_std_20)
target_include_directories(NVBEngine
		PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
		)
target_link_libraries(
	NVBEngine
	PRIVATE
			spdlog::spdlog
	)