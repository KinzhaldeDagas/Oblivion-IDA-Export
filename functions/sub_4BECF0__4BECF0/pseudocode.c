// Verified: TESClimate record loader handles WLS(T) by passing the list head at +0x30 to the shared TESWeather list parser; climate-owned list has an 8-byte inline BSSimpleList head.
bool __thiscall TESClimate_LoadRecord(TESClimate *this, Data *file)
{
  signed int i; // eax
  char v5; // bl
  bool v6; // cc
  const char *v7; // eax
  int v8[3]; // [esp+0h] [ebp-14h] BYREF
  int v9; // [esp+Ch] [ebp-8h]

  if ( (unsigned __int8)TESFile_GetRecordType(file) != 0x2E ) /*0x4bed11*/
    return 0; /*0x4bed13*/
  TESFile_InitializeFormFromRecord(file, &this->form, v8[0], v8[1]); /*0x4bed1d*/
  TESForm_SetIsLinked(&this->form, 0); /*0x4bed26*/
  for ( i = TESFile_GetChunkType(file); i; i = TESFile_GetChunkType(file) ) /*0x4bed34*/
  {
    if ( i > 0x4D414E50 ) /*0x4bed45*/
    {
      if ( i == 0x4D414E54 ) /*0x4bedc8*/
      {
        TESFile_GetChunkData(file, (char *)&this->unknown50, 6u); /*0x4bee2a*/
      }
      else if ( i == 0x54534C57 )               // Verified: climate WLS(T) weather-list chunk uses same EntryData parser as TESRegionDataWeather RDWT at WeatherData +8; outer record/chunk tags and owners differ. /*0x4bedcf*/
      {
        v5 = bDisableWarning_MESSAGES; /*0x4bedd7*/
        v9 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8]; /*0x4bede3*/
        bDisableWarning_MESSAGES = 1; /*0x4bede6*/
        OblivionTESWeatherList_LoadChunk(&this->weatherList, file, &this->form); /*0x4beded*/
        v6 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8] <= v9; /*0x4bedf8*/
        bDisableWarning_MESSAGES = v5; /*0x4bedfe*/
        if ( !v6 ) /*0x4bee04*/
        {
          v7 = this->form.vtbl->GetEditorName(this); /*0x4bee10*/
          PrintError("Warnings were encountered while loading weather list chunk from climate %s", v7); /*0x4bee18*/
        }
      }
    }
    else if ( i >= 0x4D414E46 ) /*0x4bed4c*/
    {
      if ( i - 0x4D414E46 < 2 ) /*0x4beda7*/
        TESTexture_Load((int)this + 0xC * i + 0x60F054F0, file); /*0x4bedb9*/
    }
    else if ( i == 0x44494445 ) /*0x4bed53*/
    {
      _alloca_(v8[0]); /*0x4bed78*/
      TESFile_GetChunkData(file, (char *)v8, 0x200u); /*0x4bed87*/
      this->form.vtbl->SetEditorID((TESForm *)this, (const char *)v8); /*0x4bed97*/
    }
    else if ( i == 0x4C444F4D ) /*0x4bed5a*/
    {
      TESModel_Load((float *)&this->model, file); /*0x4bed65*/
    }
    if ( !TESFile_GetNextChunk(file) ) /*0x4bee31*/
      break; /*0x4bee38*/
  }
  return 1; /*0x4bee4e*/
}
