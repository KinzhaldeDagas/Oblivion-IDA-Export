struct ExtraLockData
{
unsigned __int8 level;
unsigned __int8 unused01[3];
TESKey *key; ///< Verified TESKey* key: ExtraDataList_ResolveLoadedFormIDs resolves the stored FormID and RTTI-casts it to TESKey; TESObjectDOOR_CheckActorAccess checks actor inventory for this key.
unsigned __int8 flags; ///< Verified: bit 0x01 is the runtime is_locked predicate and XLOC load forces it on; bit 0x04 enables leveled scaling. Verified bit 0x02 use: LockEffect_Apply sets it and later checks it with bit 0x01; Candidate label LockEffect marker. Other bits remain Unknown.
unsigned __int8 unused09[3];
};
