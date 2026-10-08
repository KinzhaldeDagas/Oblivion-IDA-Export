struct TESRegionDataManagerVtable
{
void *unknown00; ///< Unknown slot0, raw target shared with TESHealthForm_GetHealth; no class-specific role established.
void *constructRegionData; ///< Verified factory: Oblivion switch cases 3..7 construct Weather/Map/Landscape/Grass/Sound data.
void *filterDataID2; ///< Verified candidate filter checks derived GetID()==2; Fallout calls this Objects data, but Oblivion factory for ID2 is not observed.
void *filterDataID3; ///< Verified filter for RegionData ID3; constructor RTTI identifies TESRegionDataWeather.
void *filterDataID4; ///< Verified filter for ID4; constructor RTTI identifies TESRegionDataMap.
void *filterDataID5; ///< Verified filter for ID5; constructor RTTI identifies TESRegionDataLandscape.
void *filterDataID6; ///< Verified filter for ID6; constructor RTTI identifies TESRegionDataGrass.
void *filterDataID7; ///< Verified filter for ID7; constructor RTTI identifies TESRegionDataSound.
void *loadRegionDataRecord; ///< Verified region data chunk loader, attached to TESRegionDataManager vtable slot +0x20.
};
