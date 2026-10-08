struct __declspec(align(4)) _RTL_TIME_DYNAMIC_ZONE_INFORMATION
{
LONG Bias;
WCHAR_0 StandardName[32];
RTL_SYSTEM_TIME StandardDate;
LONG StandardBias;
WCHAR_0 DaylightName[32];
RTL_SYSTEM_TIME DaylightDate;
LONG DaylightBias;
WCHAR_0 TimeZoneKeyName[128];
BOOLEAN DynamicDaylightTimeDisabled;
};
