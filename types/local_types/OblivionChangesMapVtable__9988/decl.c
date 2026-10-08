struct OblivionChangesMapVtable
{
ChangesMap *(__thiscall *destroy)(ChangesMap *self, unsigned int flags); ///< Verified: A3A2EC -> 462260 deleting destructor.
unsigned int (__thiscall *hash)(ChangesMap *self, unsigned int key); ///< Verified: A3A2F0 -> 6A9060 key modulo bucketCount.
int (__thiscall *keysEqual)(ChangesMap *self, unsigned int a, unsigned int b); ///< Verified: A3A2F4 -> 763E80 integer equality; this ignored.
OblivionChangesMapNode *(__thiscall *setNode)(ChangesMap *self, OblivionChangesMapNode *node, unsigned int key, OblivionChangeData *value); ///< Verified: A3A2F8 -> 67F130 writes key+4/value+8 and returns node; this ignored.
void (__thiscall *clearNodeValue)(ChangesMap *self, OblivionChangesMapNode *node); ///< Verified: A3A2FC -> 68F970 no-op value clear.
OblivionChangesMapNode *(__thiscall *allocateNode)(ChangesMap *self); ///< Verified: A3A300 -> 4F0F60 node-pool acquire; this ignored.
void (__thiscall *releaseNode)(ChangesMap *self, OblivionChangesMapNode *node); ///< Verified: A3A304 -> 4B2ED0 clears value+8, releases node; does not free ChangeData.
void (__thiscall *removeAllChanges)(ChangesMap *self); ///< Verified: A3A308 -> 45A8B0 frees values/buffers then clears map.
};
