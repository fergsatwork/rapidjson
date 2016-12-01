/***
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       disable unwanted C++ /W4 warnings
*
****/

#pragma warning(push)
#pragma warning(disable: 6282) //warning C6282: Incorrect operator: assignment of constant in Boolean context. Consider using '==' instead
#include <rapidjson/schema.h>
#pragma warning(pop)