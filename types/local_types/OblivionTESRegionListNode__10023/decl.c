struct OblivionTESRegionListNode
{
TESForm *regionForm; ///< Verified region-form pointer stored at head +0.
OblivionTESRegionListNode *next; ///< Verified overflow-node next pointer at +4; BSSimpleList traversal.
};
