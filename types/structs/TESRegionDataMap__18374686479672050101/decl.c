struct TESRegionDataMap
{
TESRegionData base; ///< Verified TESRegionData base.
BSStringT mapName; ///< Verified 8-byte BSStringT at +8; default string is “Default Region Name”; dtor frees it.
};
