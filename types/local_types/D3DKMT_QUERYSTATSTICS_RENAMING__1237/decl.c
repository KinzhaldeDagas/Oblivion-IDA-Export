struct _D3DKMT_QUERYSTATSTICS_RENAMING
{
ULONG NbAllocationsRenamed;
ULONG NbAllocationsShrinked;
ULONG NbRenamedBuffer;
ULONG MaxRenamingListLength;
ULONG NbFailuresDueToRenamingLimit;
ULONG NbFailuresDueToCreateAllocation;
ULONG NbFailuresDueToOpenAllocation;
ULONG NbFailuresDueToLowResource;
ULONG NbFailuresDueToNonRetiredLimit;
};
