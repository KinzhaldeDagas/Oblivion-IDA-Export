struct TESPathGrid
{
TESForm base; ///< Verified TESForm base; factory and loader allocate 0x54 bytes.
TESChildCELL childCell; ///< Verified secondary TESChildCELL base/vtable.
NiNode *renderNode; ///< Verified NiNode render root at +0x1C; subobject cleanup and global scene-root detachment confirm it.
TESObjectCELL *parentCell; ///< Verified parent TESObjectCELL returned by the secondary TESChildCELL vtable; graph loader reads cell and worldspace data from it.
NiTArray_TESPathGridPoint *pointArray; ///< Verified pointer to a 16-byte NiTArray<TESPathGridPoint*> allocated when PGRP points load.
BSSimpleList_VoidPtr PGRIRecords; ///< Verified tail pointer for the PGRI list header at +0x28.
unsigned __int16 pointCount; ///< Verified u16 point count; PGRP array sizing and PGRR point-index bounds use it.
unsigned __int16 unknown32; ///< Unknown u16 adjacent to pointCount.
TESPathGridReferencePointMap pointsByReference; ///< Verified NiTPointerMap<TESObjectREFR*, BSSimpleList<TESPathGridPoint*>*> used by PGRL linked-reference records.
TESPathGridCellPointMap pointsByCell; ///< Verified NiTPointerMap<u32, BSSimpleList<TESPathGridPoint*>*> keyed by packed exterior cell coordinates.
};
