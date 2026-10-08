struct OblivionTESGlobalListNode
{
TESGlobal *item; ///< Verified: TESDataHandler +0x74 global-list head stores TESGlobal* at +0 and next-node pointer at +4; LoadGlobalValues removes loaded globals and iterates remaining nodes for reset.
OblivionTESGlobalListNode *next;
};
