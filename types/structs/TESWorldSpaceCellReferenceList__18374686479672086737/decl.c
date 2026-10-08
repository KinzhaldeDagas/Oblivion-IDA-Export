struct TESWorldSpaceCellReferenceList
{
TESObjectREFR *firstReference; ///< Verified: 8-byte BSSimpleList head; heap list values are allocated on first indexed reference and removed when empty.
TESWorldSpaceCellReferenceNode *overflowNodes;
};
