struct AStarWorldNodeList
{
void *vtable; ///< Verified: AStarWorldNodeList vtable installed by TravelPath_FindLowLevelRoute before search.
void *start; ///< Verified: head pointer of the sorted NiTPointerList open set.
void *end; ///< Verified: tail pointer of the sorted NiTPointerList open set.
unsigned int count; ///< Verified item count read by AStarWorldNodeList_InsertByFitness and PopMinUnderBound.
unsigned __int8 unknown10[8]; ///< Unknown fields; not initialized by the observed route-search setup.
unsigned int unknown18; ///< Verified setup writes 0 and destructor path writes 0xFFFFFFFF before AStarWorldNodeList destruction; exact meaning Unknown.
};
