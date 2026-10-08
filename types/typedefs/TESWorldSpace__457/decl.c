struct TESWorldSpace
{
TESFormVtbl *vtbl;
TESFormMembr super;
TESFullName fullName;
TESTexture texture;
NiTMap_TESCELL *cellMap;
TESObjectCELL *persistentCell; ///< Verified: single TESObjectCELL whose FormFlags satisfy TESForm_GetQuestItem is stored here; TESWorldSpace_CollectPersistentCellReferences copies its object refs into a root-plus-direct-child reference aggregation.
TESWorldSpaceTerrainLODQuadMap terrainLODQuadRoots; ///< Verified: inline NiTPointerMap<int,TESTerrainLODQuadRoot*> initialized in TESWorldSpace constructor and destroyed in the destructor.
TESWorldSpace *terrainLODQuadOwner;
int unknown04C; ///< Unknown. Not read/serialized/copied in the paths inspected.
int unknown050; ///< Unknown. Not read/serialized/copied in the paths inspected.
int road; ///< Verified TESRoad* owned by WorldSpace. Constructor initializes it; loader sets it; destructor releases it; duplication clones it; fast-travel route generation reads this pointer.
TESClimate *climate;
TESWorldFlags worldFlags;
UInt32 unknown060;
TESWorldSpaceCellReferenceMap referencesByCell; ///< Verified: packed signed cell X/Y coordinate to per-cell TESObjectREFR* BSSimpleList head.
TESWorldSpaceCellReferenceList fallbackReferences; ///< Verified: inline fallback reference list for eligible refs not stored in the coordinate map.
TESWorldSpace *parentWorldspace;
TESWaterForm *WaterForm;
UInt32 unknown084[5];
float cellBounds[4];
UInt32 *cellOffsetsArray;
float unknown0AC[4];
UInt32 recordOffsetFromFileBeginning;
BSStringT editorID;
NiTMap_void CellsWithLODObjects;
TESWorldSpaceDistantLODMetadata distantLODMetadata;
};
