// Double.h File:
// Class Definition:

#pragma once

#include <stdexcept> // stdexcept header contains runtime_error.

// This Class's object should be thrown by a function upon detecting an attempt to divide by zero:
class Double : public std::runtime_error
{
public:
	// Constructor specifies default error message:
	Double() : std::runtime_error{ "Attempted to divide by zero." } {}
};
// Class is actually derived from Standard Library Class runtime_error, (From header <stdexcept>).
/* And Class runtime_error is a derived class of exception, (from header <exception>).
   Exception is the standard C++ Base Class for exceptions in the C++ Standard Library. */
   /* A typical exception class that derives from runtime_error class defines only a constructor, e.g., line 13,
	  that passes an error-message string to the base-class runtime_error constructor. */
	  /* Every exception class that derives directly or indirectly from exception contains the virtual function what,
		 which returns an exception object's error message. */
