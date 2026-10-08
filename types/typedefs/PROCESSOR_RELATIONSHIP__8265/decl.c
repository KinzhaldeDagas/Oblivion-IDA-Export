struct _PROCESSOR_RELATIONSHIP
{
BYTE Flags;
BYTE EfficiencyClass;
BYTE Reserved[20];
WORD GroupCount;
GROUP_AFFINITY GroupMask[1];
};
