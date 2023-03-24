cmake_minimum_required (VERSION 2.6)

project ("modbus_test")

file (GLOB MODBUS_TEST_SRC *.cpp )
file (GLOB MODBUS_TEST_HDR *.h )

source_group(
	"Source Files"
	FILES ${MODBUS_TEST_SRC} ${MODBUS_TEST_HDR}
)

add_executable(
	modbus_test
	${MODBUS_TEST_SRC}
	${MODBUS_TEST_HDR}
)

if(WIN32 AND NOT MINGW)
	set_target_properties(
		modbus_test
		PROPERTIES
		COMPILE_FLAGS "/wd4251 /MP"
	)
endif(WIN32 AND NOT MINGW)

target_link_libraries(
	modbus_test
	easycom_modbus
	libmysql
)
