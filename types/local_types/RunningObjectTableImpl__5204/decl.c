struct RunningObjectTableImpl
{
IRunningObjectTable_0 IRunningObjectTable_iface;
list rot;
CRITICAL_SECTION lock;
};
