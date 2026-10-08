TESRegionDataGrass *__stdcall TESRegionDataManager_GetDataID6(TESRegionData *data)
{
  if ( data && ((int (__thiscall *)(TESRegionData *))data->vtable->unknown0C)(data) == 6 ) /*0x4a4845*/
    return (TESRegionDataGrass *)data; /*0x4a4847*/
  else
    return 0; /*0x4a484d*/
}
