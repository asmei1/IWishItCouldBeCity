add_compile_options(${COMPILER_WARNINGS_FLAGS})

add_executable(CityGenerator main.cpp)

target_compile_features(CityGenerator INTERFACE cxx_std_20)

target_link_libraries(
	CityGenerator
	PRIVATE	NVBEngine
)