cmake_minimum_required (VERSION 2.6)

project ("FestoMPS-PDDL")

set(
	"SRC"
	Command.cpp
	FecCommands.cpp
	FecNodes.cpp
	LogoCommands.cpp
	LogoNodes.cpp
	Macro.cpp
	main.cpp
	Mapping.cpp
	Node.cpp
	ProcessingCommands.cpp
	Solution.cpp
	StorageCommands.cpp
)

set(
	"HDR"
	Command.h
	FecCommands.h
	FecNodes.h
	LogoCommands.h
	LogoNodes.h
	Macro.h
	Mapping.h
	Node.h
	ProcessingCommands.h
	StorageCommands.h
	Solution.h
	Types.h
)

set(
	"FWDHDR"
	Command.hh
	Macro.hh
	Node.hh
)

source_group(
	"Source Files"
	FILES ${SRC}
)

source_group(
	"Header Files"
	FILES ${HDR} ${FWDHDR}
)

add_executable(
	"FestoMPS-PDDL"
	${SRC}
	${HDR}
	${FWDHDR}
)

target_link_libraries(
	"FestoMPS-PDDL"
	easycom_com
	easyutil
	WS2_32.lib
)
