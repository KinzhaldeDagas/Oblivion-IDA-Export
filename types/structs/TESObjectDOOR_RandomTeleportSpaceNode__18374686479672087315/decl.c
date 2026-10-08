struct TESObjectDOOR_RandomTeleportSpaceNode
{
TESForm *space; ///< Verified list payload: TESForm pointer. The membership helper accepts only interior cells or worldspaces.
struct TESObjectDOOR_RandomTeleportSpaceNode *next; ///< Verified singly-linked list successor; the inline door field is the first node and later nodes are FormHeap allocations.
};
