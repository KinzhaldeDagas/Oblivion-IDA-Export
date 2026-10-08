// Verified: region RDWT weather-list helper uses the same sub_4EEDD0 EntryData loader as TESClimate WLS(T), but stores data at WeatherData +8 and includes region-specific warning.
void __thiscall TESRegionDataWeather_LoadListChunk(TESRegionDataWeather *this, Data *file, TESRegion *region)
{
  char v3; // bl
  int v4; // esi
  bool v5; // cc
  const char *v6; // eax

  v3 = bDisableWarning_MESSAGES; /*0x4a5965*/
  v4 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8]; /*0x4a596c*/
  bDisableWarning_MESSAGES = 1; /*0x4a597d*/
  OblivionTESWeatherList_LoadChunk(&this->weatherList, file, &region->form); /*0x4a5984*/
  v5 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8] <= v4; /*0x4a598c*/
  bDisableWarning_MESSAGES = v3; /*0x4a5992*/
  if ( !v5 ) /*0x4a5998*/
  {
    if ( region ) /*0x4a599c*/
    {
      v6 = region->form.vtbl->GetEditorName(region); /*0x4a59a8*/
      PrintError("Warnings were encountered while loading weather list chunk from region %s", v6); /*0x4a59b0*/
    }
  }
}
