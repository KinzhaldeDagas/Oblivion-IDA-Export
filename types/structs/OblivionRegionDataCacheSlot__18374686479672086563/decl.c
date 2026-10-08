struct OblivionRegionDataCacheSlot
{
TESRegionData *selectedData; ///< Verified selected TESRegionData pointer used as cache value for a region-data ID.
TESRegionList *activeRegionList; ///< Verified active TESRegionList used to decide cache reuse and compare current input list.
};
