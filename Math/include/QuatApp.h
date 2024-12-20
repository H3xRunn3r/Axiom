#ifndef QuatApp_H
#define QuatApp_H

#include "Quat.h"

namespace Axiom
{
	class QuatApp
	{
	public:
		static void Slerp(Quat &result, const Quat &source, const Quat &target, const float slerpFactor);
		static void SlerpArray(Quat *result, const Quat *source, const Quat *target, const float slerpFactor, const int numQuats);
	};
}

#endif 
