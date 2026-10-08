TESRegionDataSound *__stdcall TESRegionDataManager_GetDataID7(TESRegionData *data)
{
  if ( data && ((int (__thiscall *)(TESRegionData *))data->vtable->unknown0C)(data) == 7 ) /*0x4a4875*/
    return (TESRegionDataSound *)data; /*0x4a4877*/
  else
    return 0; /*0x4a487d*/
}
