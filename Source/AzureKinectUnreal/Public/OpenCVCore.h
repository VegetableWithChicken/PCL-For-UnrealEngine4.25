#pragma once

#include "CoreMinimal.h"



#if PLATFORM_WINDOWS
#define OPENCV_INCLUDES_START THIRD_PARTY_INCLUDES_START \
__pragma(warning(disable: 4190))  // 'identifier1' has C-linkage specified, but returns UDT 'identifier2' which is incompatible with C 
__pragma(warning(disable: 6297))  // Arithmetic overflow:  32-bit value is shifted, then cast to 64-bit value.  Results might not be an expected value. 
__pragma(warning(disable: 6294))  // Ill-defined for-loop:  initial condition does not satisfy test.  Loop body not executed. 
__pragma(warning(disable: 6201))  // Index '<x>' is out of valid index range '<a>' to '<b>' for possibly stack allocated buffer '<variable>'.
PUSH_MACRO(check)
#else
// TODO: when adding support for other platforms, this definition may require updating
#define OPENCV_INCLUDES_START THIRD_PARTY_INCLUDES_START PUSH_MACRO(check)
#endif

#define OPENCV_INCLUDES_END THIRD_PARTY_INCLUDES_END POP_MACRO(check)

OPENCV_INCLUDES_START
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/imgcodecs.hpp"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/highgui.hpp"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/objdetect.hpp"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/imgproc.hpp"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/videoio.hpp"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/videoio/legacy/constants_c.h"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/imgproc/types_c.h"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/imgproc.hpp"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/dnn.hpp"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/video/background_segm.hpp"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/core/cvstd_wrapper.hpp"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/core/ocl.hpp"
#include "../../../ThirdParty/OpenCVLibrary/include/opencv2/dnn/dnn.hpp"



//OPENCV_INCLUDES_END
