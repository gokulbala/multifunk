cmake_minimum_required (VERSION 2.6)

project ("Monitor")

file (GLOB MONITOR_SRC *.cpp )
file (GLOB MONITOR_HDR *.h )

source_group(
	"Source Files"
	FILES ${MONITOR_SRC} ${MONITOR_HDR}
)

add_executable(
	"Monitor"
	${MONITOR_SRC}
	${MONITOR_HDR}
)

target_link_libraries(
	Monitor
	easycom_com
	easyutil
	WS2_32.lib
)
