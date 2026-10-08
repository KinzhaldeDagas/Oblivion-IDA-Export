struct BSSimpleList_AStarWorldNode
{
AStarWorldNode *data; ///< Verified first inline list entry payload: AStarWorldNode pointer.
AStarWorldNodeListEntry *next; ///< Verified next list-entry pointer; this two-pointer header is the BSSimpleList head and each allocated successor node.
};
