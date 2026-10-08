TESRegionDataLandscape *__stdcall TESRegionDataManager_GetDataID5(TESRegionData *data)
{
  if ( data && ((int (__thiscall *)(TESRegionData *))data->vtable->unknown0C)(data) == 5 ) /*0x4a4815*/
    return (TESRegionDataLandscape *)data; /*0x4a4817*/
  else
    return 0; /*0x4a481d*/
}
