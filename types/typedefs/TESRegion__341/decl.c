struct TESRegion
{
TESForm form;
TESRegionDataList *dataList; ///< Verified: pointer to owned TESRegionDataList created by TESRegion_ctor.
OblivionTESRegionAreaList *areas; ///< Verified layout: allocated 8-byte region-area BSSimpleList head; internal polygon/area element semantics remain Unknown.
TESWorldSpace *worldspace; ///< Verified: TESWorldSpace owner used to filter region candidates.
TESWeather *cachedWeather; ///< Verified: cached region-selected TESWeather; refresh resets and selects data ID 3.
float unknown28; ///< Unknown: float initialized from flt_A30634; meaning insufficiently established.
};
