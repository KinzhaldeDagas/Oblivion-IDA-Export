struct TESRegionDataList
{
TESRegionData *firstData;
TESRegionDataListNode *overflowNodes;
unsigned __int8 ownsData; ///< Verified: ownership byte controls whether Clear destroys payload TESRegionData objects.
unsigned __int8 pad09[3];
};
