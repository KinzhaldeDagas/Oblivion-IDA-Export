struct __declspec(align(4)) _TIME_DYNAMIC_ZONE_INFORMATION
{
LONG Bias;
WCHAR_0 StandardName[32];
SYSTEMTIME StandardDate;
LONG StandardBias;
WCHAR_0 DaylightName[32];
SYSTEMTIME DaylightDate;
LONG DaylightBias;
WCHAR_0 TimeZoneKeyName[128];
BOOLEAN DynamicDaylightTimeDisabled;
};
