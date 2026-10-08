TESRegionDataWeather *__stdcall TESRegionDataManager_GetDataID3(TESRegionData *data)
{
  if ( data && ((int (__thiscall *)(TESRegionData *))data->vtable->unknown0C)(data) == 3 ) /*0x4a47b5*/
    return (TESRegionDataWeather *)data; /*0x4a47b7*/
  else
    return 0; /*0x4a47bd*/
}
