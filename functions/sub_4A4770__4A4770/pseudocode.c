void *__stdcall TESRegionDataManager_GetDataID2(TESRegionData *data)
{
  if ( data && ((int (__thiscall *)(TESRegionData *))data->vtable->unknown0C)(data) == 2 ) /*0x4a4785*/
    return data; /*0x4a4787*/
  else
    return 0; /*0x4a478d*/
}
