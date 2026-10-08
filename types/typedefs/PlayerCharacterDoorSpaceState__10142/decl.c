struct PlayerCharacterDoorSpaceState
{
UInt8 beforeDoorSpaceMap[40];
NiTMap_void lastSpaceForDoorByRefID; ///< Verified embedded NiTMap_void keyed by TESObjectDOOR.refID (+0x0C). PlayerCharacter_GetLastSpaceForDoor returns the low byte with 0xFF default; PlayerCharacter_SetLastSpaceForDoor stores the selected space index via NiTMap_SetAt. Full value-width/upper-byte semantics and maximum list length remain Unknown.
UInt8 afterDoorSpaceMap[12];
};
