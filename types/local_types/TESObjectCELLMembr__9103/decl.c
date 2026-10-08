struct TESObjectCELLMembr
{
TESFormMembr super;
TESFullName fullName;
UInt8 flags0; ///< Verified byte participates in CELL DATA and modified-cell savegame output. Bit 0x20 is tested by TESObjectCELL_HasPublicFlag20; bits 0x20|0x40 by TESObjectCELL_HasPublicOrTempPublicState. Bit 0x40 toggles on linked-door lock/unlock, is gated on load by retainActiveFile, and is serialized in CELL state. Probable names: Public (0x20) and TempPublic (0x40), corroborated by Fallout names/masks.
UInt8 flags1;
UInt8 cellProcessLevel;
UInt8 pad27;
ExtraDataList extraData;
TESCELL_CoordOrLight coordOrLight;
TESObjectLAND *land;
TESPathGrid *pathGrid;
ObjectListEntry objectList;
TESWorldSpace *worldSpace;
NiNode *niNode;
};
