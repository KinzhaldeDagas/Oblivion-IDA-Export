struct TESRegionData
{
TESRegionDataVtable *vtable; ///< Verified base data vtable identity.
unsigned __int8 bOverride; ///< Verified RDAT override flag at +4; true overrides lower-priority/fallback region data in selection.
unsigned __int8 bIgnore; ///< Verified selection skips data when this byte is nonzero; member spelling bIgnore is Probable (Fallout uses same name).
unsigned __int8 priority; ///< Verified default 0x32, loaded from RDAT when <=100, and compared to choose higher-priority region data.
unsigned __int8 unknown07; ///< Padding/unknown.
};
