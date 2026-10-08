struct AStarNodeListCore
{
void *vtable;
AStarNodeListEntry *start; ///< Verified start/head pointer: append replaces it with the newest node; Pop traverses from it through node next links.
AStarNodeListEntry *end; ///< Verified end/tail pointer: initialized to the first node when the list was empty.
unsigned int itemCount;
};
