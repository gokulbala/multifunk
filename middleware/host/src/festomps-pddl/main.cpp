/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "FecCommands.h"
#include "FecNodes.h"
#include "LogoCommands.h"
#include "LogoNodes.h"
#include "Macro.h"
#include "ProcessingCommands.h"
#include "Solution.h"
#include "StorageCommands.h"

#include <iomanip>
#include <iostream>
#include <vector>

/******************************************************************************/
/***   Static variables                                                     ***/
/******************************************************************************/
std::vector<NodePtr> gNodes;
std::vector<MacroPtr> gMacros;

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
void initNodes(void)
{
	NodePtr node;
	MacroPtr macro;

	node = FecNode::create("FESTO MPS Storage PLC", "172.26.5.1", 992);
	gNodes.push_back(node);
	node->addCommand(FecStartCommand::create(PLC_DOMAIN_STORAGE, "ss"));
	node->addCommand(FecStopCommand::create(PLC_DOMAIN_STORAGE, "sp"));
	node->addCommand(FecResetCommand::create(PLC_DOMAIN_STORAGE, "sr"));
	node->addCommand(StorageExtendMiniSlideCommand::create("sme"));
	node->addCommand(StorageRetractMiniSlideCommand::create("smr"));
	node->addCommand(StorageOpenGripperCommand::create("sgo"));
	node->addCommand(StorageCloseGripperCommand::create("sgc"));
	//node->addCommand(StorageLinearAxisCommand::create(ST_LA_REFERENCE, "slr"));
	node->addCommand(StorageLinearAxisCommand::create(ST_LA_COLOR_DETECT, "slc"));
	node->addCommand(StorageLinearAxisCommand::create(ST_LA_LEVEL1_MOVE, "sl1m"));
	node->addCommand(StorageLinearAxisCommand::create(ST_LA_LEVEL1_PUT, "sl1p"));
	node->addCommand(StorageLinearAxisCommand::create(ST_LA_LEVEL2_MOVE, "sl2m"));
	node->addCommand(StorageLinearAxisCommand::create(ST_LA_LEVEL2_PUT, "sl2p"));
	node->addCommand(StorageLinearAxisCommand::create(ST_LA_LEVEL3_MOVE, "sl3m"));
	node->addCommand(StorageLinearAxisCommand::create(ST_LA_LEVEL3_PUT, "sl3p"));
	node->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS1, "sr1"));
	node->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS2, "sr2"));
	node->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS3, "sr3"));
	node->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS4, "sr4"));
	node->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS5, "sr5"));
	node->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS6, "sr6"));
	node->addCommand(StorageRotaryAxisCommand::create(ST_RA_IN, "sri"));
	node->addCommand(StorageRotaryAxisCommand::create(ST_RA_OUT, "sro"));
	node->addCommand(StorageBusyCommand::create(true, "sby"));
	node->addCommand(StorageBusyCommand::create(false, "sbn"));
	node->addCommand(StorageColorSensorCommand::create("sqc"));
	node->addCommand(StorageBusySensorCommand::create("sqb"));

	node = FecNode::create("FESTO MPS Processing PLC", "172.26.5.2", 992);
	gNodes.push_back(node);
	node->addCommand(FecStartCommand::create(PLC_DOMAIN_PROCESSING, "ps"));
	node->addCommand(FecStopCommand::create(PLC_DOMAIN_PROCESSING, "pp"));
	node->addCommand(FecResetCommand::create(PLC_DOMAIN_PROCESSING, "pr"));
	node->addCommand(ProcessingRotateCommand::create("ptr"));
	node->addCommand(ProcessingClampCommand::create(true, "pcy"));
	node->addCommand(ProcessingClampCommand::create(false, "pcn"));
	node->addCommand(ProcessingDrillMoveCommand::create(false, "pdd"));
	node->addCommand(ProcessingDrillMoveCommand::create(true, "pdu"));
	node->addCommand(ProcessingDrillCommand::create(true, "pdy"));
	node->addCommand(ProcessingDrillCommand::create(false, "pdn"));
	node->addCommand(ProcessingHeightProbeCommand::create(true, "phy"));
	node->addCommand(ProcessingHeightProbeCommand::create(false, "phn"));
	node->addCommand(ProcessingLeverCommand::create(2000, "pl"));
	node->addCommand(ProcessingBusyCommand::create(true, "pby"));
	node->addCommand(ProcessingBusyCommand::create(false, "pbn"));
	node->addCommand(ProcessingInputSensorCommand::create("pqi"));
	node->addCommand(ProcessingHeightSensorCommand::create("pqh"));
	node->addCommand(ProcessingBusySensorCommand::create("pqb"));

	node = LogoProxyNode::create("Siemens LOGO! Proxy Controller", "COM10");
	gNodes.push_back(node);
	node->addCommand(LogoProxySupplyWorkpieceCommand::create(LP_DOMAIN_PROCESSING, "Supply workpiece to processing", "pls"));
	node->addCommand(LogoProxyDeliverWorkpieceCommand::create(LP_DOMAIN_PROCESSING, "Deliver workpiece from processing", "pld"));
	node->addCommand(LogoProxySupplyableSensorCommand::create(LP_DOMAIN_PROCESSING, "Query workpiece supplyable to processing", "pqs"));
	node->addCommand(LogoProxyDeliverableSensorCommand::create(LP_DOMAIN_PROCESSING, "Query workpiece deliverable from processing", "pqd"));
	node->addCommand(LogoProxySupplyWorkpieceCommand::create(LP_DOMAIN_STORAGE, "Supply workpiece to storage", "sls"));
	node->addCommand(LogoProxyDeliverWorkpieceCommand::create(LP_DOMAIN_STORAGE, "Deliver workpiece from storage", "sld"));
	node->addCommand(LogoProxySupplyableSensorCommand::create(LP_DOMAIN_STORAGE, "Query workpiece supplyable to storage", "sqs"));
	node->addCommand(LogoProxyDeliverableSensorCommand::create(LP_DOMAIN_STORAGE, "Query workpiece deliverable from storage", "sqd"));

	macro = Macro::create("Reset all");
	gMacros.push_back(macro);
	macro->addCommand(FecStartCommand::create(PLC_DOMAIN_STORAGE));
	macro->addCommand(FecStartCommand::create(PLC_DOMAIN_PROCESSING));
	macro->addCommand(DelayCommand::create(2000));
	macro->addCommand(FecStopCommand::create(PLC_DOMAIN_STORAGE));
	macro->addCommand(FecStopCommand::create(PLC_DOMAIN_PROCESSING));
	macro->addCommand(DelayCommand::create(1000));
	macro->addCommand(StorageRetractMiniSlideCommand::create());
	macro->addCommand(FecResetCommand::create(PLC_DOMAIN_STORAGE));
	macro->addCommand(FecResetCommand::create(PLC_DOMAIN_PROCESSING));
	macro->addCommand(DelayCommand::create(22000));
	macro->addCommand(FecStartCommand::create(PLC_DOMAIN_STORAGE));
	macro->addCommand(FecStartCommand::create(PLC_DOMAIN_PROCESSING));
	macro->addCommand(DelayCommand::create(2000));
	macro->addCommand(FecStopCommand::create(PLC_DOMAIN_STORAGE));
	macro->addCommand(FecStopCommand::create(PLC_DOMAIN_PROCESSING));
	macro->addCommand(StorageRetractMiniSlideCommand::create());

	//macro = Macro::create("Store 3 work pieces by color");
	macro = Macro::create("Error handling demonstration");
	gMacros.push_back(macro);
//	macro->addCommand(DelayCommand::create(10000));
	macro->addCommand(SolutionCommand::create());
//	macro->addCommand(SolutionCommand::create());
//	macro->addCommand(SolutionCommand::create());
//	macro->addCommand(SolutionCommand::create());

	macro = Macro::create("Video #1");
	gMacros.push_back(macro);

	macro->addCommand(LogoProxySupplyWorkpieceCommand::create(LP_DOMAIN_PROCESSING, "Supply"));
	macro->addCommand(ProcessingRotateCommand::create());
	macro->addCommand(ProcessingHeightProbeCommand::create(true));
	macro->addCommand(ProcessingHeightProbeCommand::create(false));
	macro->addCommand(ProcessingRotateCommand::create());
	macro->addCommand(ProcessingDrillCommand::create(true));
	macro->addCommand(DelayCommand::create(1000));
	macro->addCommand(ProcessingDrillCommand::create(false));
	macro->addCommand(ProcessingRotateCommand::create());
	macro->addCommand(ProcessingLeverCommand::create(true));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(ProcessingLeverCommand::create(false));
	macro->addCommand(LogoProxyDeliverWorkpieceCommand::create(LP_DOMAIN_PROCESSING, ""));

	macro->addCommand(LogoProxySupplyWorkpieceCommand::create(LP_DOMAIN_PROCESSING, "Supply"));
	macro->addCommand(ProcessingRotateCommand::create());
	macro->addCommand(ProcessingHeightProbeCommand::create(true));
	macro->addCommand(ProcessingHeightProbeCommand::create(false));
	macro->addCommand(ProcessingRotateCommand::create());
	macro->addCommand(ProcessingRotateCommand::create());
	macro->addCommand(ProcessingLeverCommand::create(true));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(ProcessingLeverCommand::create(false));
	macro->addCommand(LogoProxyDeliverWorkpieceCommand::create(LP_DOMAIN_PROCESSING, ""));


	macro = Macro::create("Inventory");
	gMacros.push_back(macro);
	macro->addCommand(StorageOpenGripperCommand::create());
	macro->addCommand(StorageRetractMiniSlideCommand::create());
	// Level 1
	macro->addCommand(StorageLinearAxisCommand::create(ST_LA_LEVEL1_MOVE));
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS1));
	macro->addCommand(StorageExtendMiniSlideCommand::create());
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS2));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS3));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS4));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS5));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS6));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRetractMiniSlideCommand::create());
	// Level 2
	macro->addCommand(StorageLinearAxisCommand::create(ST_LA_LEVEL2_MOVE));
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS1));
	macro->addCommand(StorageExtendMiniSlideCommand::create());
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS2));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS3));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS4));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS5));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS6));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRetractMiniSlideCommand::create());
	// Level 3
	macro->addCommand(StorageLinearAxisCommand::create(ST_LA_LEVEL3_MOVE));
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS1));
	macro->addCommand(StorageExtendMiniSlideCommand::create());
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS2));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS3));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS4));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS5));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRotaryAxisCommand::create(ST_RA_POS6));
	macro->addCommand(DelayCommand::create(500));
	macro->addCommand(StorageColorSensorCommand::create());
	macro->addCommand(StorageRetractMiniSlideCommand::create());
}

void finiNodes(void)
{
	gNodes.clear();
}

void printServices(void)
{
	int count = 0;

	std::cout << std::endl << "Available Commands:" << std::endl;
	std::cout << "    " << std::setw(3) << 0 << " [q]: " << "Quit" << std::endl;

	for (size_t n=0; n<gNodes.size(); n++)
	{
		NodePtr node = gNodes.at(n);
		assert(node);

		std::cout << " > " << node->getName() << " (" << node->getComInfo() << ")" << std::endl;

		if (!node->isNodeAvailable())
		{
			std::cout << "    NOT available!" << std::endl;
			continue;
		}

		for (size_t c=0; c<node->commandCount(); c++)
		{
			CommandPtr command = node->getCommand(c);
			assert(command);

			std::cout << "    " << std::setw(3) << ++count << " [" << command->getShortcut() << "]: ";

			SensorCommand* sensorCommand = dynamic_cast<SensorCommand*>(command.get());
			if (NULL != sensorCommand)
			{
				std::cout << "SENSOR ";
			}
			else
			{
				std::cout << "ACTION ";
			}

			std::cout << command->getName();
			
			if (NULL != sensorCommand)
			{
				std::cout << " [" << sensorCommand->getValueString() << "]";
			}
			
			std::cout << std::endl;
		}
	}

	std::cout << std::endl << "Available Macros:" << std::endl;

	for (size_t n=0; n<gMacros.size(); n++)
	{
		MacroPtr macro = gMacros.at(n);
		assert(macro);

		std::cout << "    " << std::setw(3) << ++count << " " << macro->getName() << std::endl;
	}

	std::cout << std::endl << "Please type your selection: ";
}

int
main(void)
{
	std::string choice;

	initNodes();

	std::cout << "FestoMPS-PDDL Manual Control" << std::endl;

	for (printServices(), std::cin >> choice; ; printServices(), std::cin >> choice)
	{
		if ("q" == choice)
		{
			break;
		}

		//std::cout << std::cin.bad() << " " << std::cin.fail() <<  std::endl;

		unsigned int value = atoi(choice.c_str());

		size_t current = 0;

		/*
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Invalid selection, please try again!" << std::endl;
			continue;
		}
		*/

		for (size_t n=0; n<gNodes.size(); n++)
		{
			NodePtr node = gNodes.at(n);
			assert(node);

			for (size_t c=0; c<node->commandCount(); c++)
			{
				CommandPtr command = node->getCommand(c);
				assert(command);

				current++;

				if (choice == command->getShortcut() || value == current)
				{
					if (command->execute())
					{
						std::cout << "Successfully executed command \"" << command->getName() << "\"!" << std::endl;
					}
					else
					{
						std::cout << "Error executing command \"" << command->getName() << "\"!" << std::endl;
					}

					choice = "";
					break;
				}
			}

			if ("" == choice)
			{
				break;
			}
		}

		for (size_t n=0; n<gMacros.size(); n++)
		{
			MacroPtr macro = gMacros.at(n);
			assert(macro);

			current++;

			if (value == current)
			{
				if (macro->execute())
				{
					std::cout << "Successfully executed macro \"" << macro->getName() << "\"!" << std::endl;
				}
				else
				{
					std::cout << "Error executing macro \"" << macro->getName() << "\"!" << std::endl;
				}

				choice = "";
				break;
			}
		}

		if (100 == value || "sol" == choice)
		{
			//while (1)
			{
				solution();
			}

			choice = "";
		}

		if ("" != choice)
		{
			std::cout << "Invalid command " << choice << "! Please try again!" << std::endl;
		}
	}

	finiNodes();
}
