#pragma once

#include "CoreMinimal.h"

#if PLATFORM_WINDOWS
#define PCL_INCLUDES_START THIRD_PARTY_INCLUDES_START \
__pragma(warning(disable: 4190))  // 'identifier1' has C-linkage specified, but returns UDT 'identifier2' which is incompatible with C 
__pragma(warning(disable: 6297))  // Arithmetic overflow:  32-bit value is shifted, then cast to 64-bit value.  Results might not be an expected value. 
__pragma(warning(disable: 6294))  // Ill-defined for-loop:  initial condition does not satisfy test.  Loop body not executed. 
__pragma(warning(disable: 6201))  // Index '<x>' is out of valid index range '<a>' to '<b>' for possibly stack allocated buffer '<variable>'.
__pragma(warning(disable: 4191))
__pragma(warning(disable: 4005))
PUSH_MACRO(check)
#else
// TODO: when adding support for other platforms, this definition may require updating
#define PCL_INCLUDES_START THIRD_PARTY_INCLUDES_START PUSH_MACRO(check)
#endif

#define PCL_INCLUDES_END THIRD_PARTY_INCLUDES_END POP_MACRO(check)

PCL_INCLUDES_START
/*
#include <pcl/conversions.h>
#include <pcl/common/common.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <boost/shared_ptr.hpp>
*/

#include "pcl/conversions.h"
#include "pcl/common/common.h"
#include "pcl/io/pcd_io.h"
#include "pcl/io/ply_io.h "
#include "pcl/point_types.h"
#include "pcl/point_cloud.h"
#include "boost/shared_ptr.hpp"
//PCL_INCLUDES_START
