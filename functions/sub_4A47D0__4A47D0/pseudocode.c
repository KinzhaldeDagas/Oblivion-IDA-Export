TESRegionDataMap *__stdcall TESRegionDataManager_GetDataID4(TESRegionData *data)
{
  if ( data && ((int (__thiscall *)(TESRegionData *))data->vtable->unknown0C)(data) == 4 ) /*0x4a47e5*/
    return (TESRegionDataMap *)data; /*0x4a47e7*/
  else
    return 0; /*0x4a47ed*/
}
