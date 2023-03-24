cmake_minimum_required (VERSION 2.6)

project ("marshal_test")

file (GLOB MARSHAL_TEST_SRC *.cpp )
file (GLOB MARSHAL_TEST_HDR *.h )

source_group(
	"Source Files"
	FILES ${MARSHAL_TEST_SRC} ${MARSHAL_TEST_HDR}
)

add_executable(
	marshal_test
	${MARSHAL_TEST_SRC}
	${MARSHAL_TEST_HDR}
)

if(WIN32 AND NOT MINGW)
	set_target_properties(
		marshal_test
		PROPERTIES
		COMPILE_FLAGS "/wd4251 /MP"
	)
endif(WIN32 AND NOT MINGW)

target_link_libraries(
	marshal_test
)
