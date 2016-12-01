/***
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       disable unwanted C++ /W4 warnings
*
****/

#pragma warning(push)
#pragma warning(disable: 6313) //Warning C6313: Incorrect operator: zero-valued flag cannot be tested with bitwise-and. Use an equality test to check for zero-valued flags.
#include <rapidjson/writer.h>
#pragma warning(pop)