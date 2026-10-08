struct LowPathSearchGlobals
{
LowPathWorldDoorLinkMap *doorLinkMap; ///< Verified: outer NiTPointerMap keyed by source spatial TESForm; each value is a second NiTPointerMap of opposite spatial forms to AStarWorldNode lists.
AStarWorldNode *bestGoalNode; ///< Verified: best destination-reaching AStarWorldNode selected by minimum total fitness.
TESObjectREFR *sourceRef; ///< Verified source reference used for actor-sensitive door penalties.
TESForm *sourceSpace; ///< Verified source spatial TESForm.
TESForm *destinationSpace; ///< Verified destination spatial TESForm.
unsigned __int8 ignoreLocks; ///< Verified ignore-locks policy byte.
unsigned __int8 ignoreMinUse; ///< Verified ignore-min-use policy byte.
unsigned __int8 allowDisabledDoors; ///< Verified allow-disabled-doors policy byte.
unsigned __int8 unknown17; ///< Unknown byte.
BSSimpleList_AStarWorldNode allAStarWorldNodes; ///< Verified inline BSSimpleList head of every allocated AStarWorldNode. AddToLowPathWorld pushes each created node here; unlink removes it; global cleanup drains and frees it.
NiPoint3 sourcePosition; ///< Verified source NiPoint3 for route search.
NiPoint3 destinationPosition; ///< Verified destination NiPoint3 for route search.
char unknown38[72]; ///< Unknown bytes before the critical section at +0x80.
_RTL_CRITICAL_SECTION lowPathCriticalSection; ///< Verified shared low-path CRITICAL_SECTION; all per-space map insertion/removal and A* state operations enter/leave this lock.
char unknown98[104]; ///< Unknown bytes between the critical section and search-state table.
TravelPathSearchState *states; ///< Verified pointer to the 0x10-byte-per-index AStar search-state table.
unsigned __int16 stateCapacity; ///< Verified 16-bit search-state table capacity; allocation/resizing and table clear use this count.
unsigned __int16 unknown106; ///< Unknown word.
unsigned __int16 nextFreeStateIndex; ///< Verified 16-bit next-free state-slot index; 0xFFFF indicates no free slot.
unsigned __int16 unknown10A; ///< Unknown word.
};
