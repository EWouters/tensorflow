#ifndef __FDGMALLOC_CUH
#define __FDGMALLOC_CUH

/*!	\file		FDGMalloc.cuh
 *	\brief		Includes the definition of FDGMalloc.
 *	\author		Sven Widmer <sven.widmer@gris.informatik.tu-darmstadt.de>
 *	\author		Dominik Wodniok <dominik.wodniok@gris.informatik.tu-darmstadt.de>
 *	\author		Nicolas Weber <nicolas.weber@gris.informatik.tu-darmstadt.de>
 *	\author		Michael Goesele <michael.goesele@gris.informatik.tu-darmstadt.de>
 *	\version	1.0
 *	\date		06-12-2012 
 */

namespace FDG {
	#include "header/params.cu.h"
	#include "header/include.cu.h"
	#include "header/defines.cu.h"

	#include "header/SuperBlock.cu.h"
	#include "header/List.cu.h"
	#include "header/Warp.cu.h"
}

#endif