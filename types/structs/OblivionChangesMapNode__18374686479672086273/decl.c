struct OblivionChangesMapNode
{
OblivionChangesMapNode *next; ///< Verified: next pointer traversed by NiTMap_GetAt 55E032.
unsigned int formID; ///< Verified: formID key compared at node+4 in 55E000; form+0xC callers.
OblivionChangeData *data; ///< Verified: entry pointer returned from node+8 at 55E049.
};
