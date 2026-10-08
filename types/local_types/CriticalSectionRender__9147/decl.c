struct __declspec(align(4)) CriticalSectionRender
{
CRITICAL_SECTION_R criticalSection;
UInt32 pad018[24];
UInt32 curThread;
UInt32 entryCount;
};
