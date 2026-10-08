// Verified: clears TESRegion.cachedWeather +0x24, finds region-data ID 3, casts to TESRegionDataWeather, performs Oblivion weighted TESWeather selection, and stores result at +0x24.
void __thiscall TESRegion_RefreshCachedWeather(TESRegion *this)
{
  TESRegionDataList *dataList; // ecx
  TESRegionData *DataByID; // eax
  OblivionTESWeatherList *v4; // eax

  dataList = this->dataList; /*0x4a2e93*/
  this->cachedWeather = 0; /*0x4a2e98*/
  if ( dataList ) /*0x4a2e9f*/
  {
    DataByID = TESRegion_FindDataByID(dataList, 3);// Exterior fog source: retrieves region data type 3 before TESRegionDataWeather cast. /*0x4a2eb1*/
    v4 = (OblivionTESWeatherList *)OblivionDynamicCast( /*0x4a2eb7*/
                                     DataByID,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESRegionData `RTTI Type Descriptor',
                                     &TESRegionDataWeather `RTTI Type Descriptor',
                                     0);        // Exterior fog source: casts region data to TESRegionDataWeather.
    if ( v4 ) /*0x4a2ec1*/
      this->cachedWeather = OblivionTESWeatherList_SelectWeightedWeather(v4 + 1);// Verified: TESRegion_RefreshCachedWeather selects a weighted TESWeather from region data ID 3 and stores it in TESRegion cached weather field at +0x24; Sky may use this as current weather override. /*0x4a2ecb*/
  }
}
