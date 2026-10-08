struct TESConnectedPoint
{
float totalEstimateCost; ///< Verified A* F estimate = G+H; AStarNodeList selects the lowest F.
float pathCost; ///< Verified G/path cost accumulated from start to node.
float heuristicCost; ///< Verified H/heuristic: Euclidean distance from this node to target.
TESConnectedPoint *predecessor; ///< Verified predecessor TESConnectedPoint*; assigned during edge relaxation and followed to emit route nodes.
char stateFlags; ///< Verified PathGraphNodeFlags: 0x01 discovered; 0x02 closed; 0x08 below-water; 0x10 actor underwater cache; 0x20 PathGrid linked-points-disabled; 0x40 SubSpace membership.
unsigned __int8 unknown11[3];
NiPoint3 position; ///< Verified NiPoint3 position used by graph costs and ROAD PGRP/RGRP serialization.
BSSimpleList_VoidPtr connections; ///< Verified outgoing adjacency list of TESConnectedPoint pointers.
};
