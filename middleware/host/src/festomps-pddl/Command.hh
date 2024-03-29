#ifndef COMMAND_HH
#define COMMAND_HH

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include <boost/shared_ptr.hpp>

/******************************************************************************/
/***   Forward definitions                                                  ***/
/******************************************************************************/
class Command;

/******************************************************************************/
/***   Type definitions                                                     ***/
/******************************************************************************/
typedef boost::shared_ptr<Command> CommandPtr;

#endif // #ifndef COMMAND_HH
