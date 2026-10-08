struct _PROCESSOR_GROUP_INFO
{
BYTE MaximumProcessorCount;
BYTE ActiveProcessorCount;
BYTE Reserved[38];
KAFFINITY ActiveProcessorMask;
};
