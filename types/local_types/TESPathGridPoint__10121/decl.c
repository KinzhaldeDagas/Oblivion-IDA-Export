struct TESPathGridPoint
{
float totalEstimateCost; ///< Verified A* F/G/H/predecessor prefix shared with TESConnectedPoint.
float pathCost;
float heuristicCost;
TESPathGridPoint *predecessor;
char stateFlags; ///< Verified PathGraphNodeFlags shared with TESConnectedPoint: below-water 0x08, underwater cache 0x10, linked-points-disabled 0x20, SubSpace membership 0x40; 0x01/0x02 are transient A* states.
unsigned __int8 unknown11[3];
NiPoint3 position; ///< Verified NiPoint3 position.
BSSimpleList_VoidPtr connections; ///< Verified outgoing adjacency list of TESPathGridPoint pointers.
int renderNode; ///< Verified: this four-byte member is a NiNode* per-point renderNode. TESPathGridPoint_RebuildRenderGeometry allocates a NiNode at +0x28; TESPathGridPoint_ClearRenderNode treats it as NiNode, releases child objects, detaches it from its parent, then nulls it. The UDT now stores the correct four-byte width as DWORD; pointer qualification is documented here.
};
