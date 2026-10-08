// Verified: inserts default weather FormID 0x15E into the climate list with selectionWeight 100; the Oblivion selector confirms this controls weighted selection.
void __thiscall TESClimate_MakeDefault(TESClimate *this)
{
  OblivionTESWeatherList *p_weatherList; // esi
  OblivionTESWeatherListNode *next; // edi
  _DWORD *v4; // edi
  TESForm *v5; // eax
  void *v6; // eax

  BSStringT_Set(&this->weatherTextures[0].path, "Sky\\Sun.dds", 0); /*0x4bee7e*/
  BSStringT_Set(&this->weatherTextures[1].path, "Sky\\SunGlare.dds", 0); /*0x4bee8d*/
  this->model.vtbl->SetModelPath(&this->model, "Sky\\Stars.nif"); /*0x4beea0*/
  this->unknown50 = 0x726C2A24; /*0x4beea2*/
  this->weatherAndMoonFlags = 0xC300;           // Verified: built-in default climate writes byte +0x54 = 0 and +0x55 = 0xC3. Field semantic remains Unknown; Sky reads the low byte for weather-reselection timing. /*0x4beeb2*/
  p_weatherList = &this->weatherList;           // Verified Oblivion default Climate writes high climate flag byte 0xC3 (moon bits 0x80 and 0x40 enable Masser/Secunda). Fallout default Climate writes 0xFF at the corresponding byte; meaning of remaining bits is Unknown. /*0x4beeba*/
  if ( p_weatherList->overflowNodes ) /*0x4beebd*/
  {
    do /*0x4beed7*/
    {
      next = p_weatherList->overflowNodes->next; /*0x4beec6*/
      FormHeapFree((unsigned int)p_weatherList->overflowNodes); /*0x4beeca*/
      p_weatherList->overflowNodes = next; /*0x4beed4*/
    }
    while ( next ); /*0x4beed7*/
  }
  p_weatherList->firstEntry = 0; /*0x4beedb*/
  v4 = (_DWORD *)FormHeapAlloc(8u); /*0x4beefc*/
  v5 = TESForm_LookupByFormID(0x15Eu); /*0x4beefe*/
  v6 = OblivionDynamicCast( /*0x4bef07*/
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESWeather `RTTI Type Descriptor',
         0);
  *v4 = v6; /*0x4bef11*/
  v4[1] = 0x64; /*0x4bef13*/
  if ( v6 ) /*0x4bef1b*/
  {
    BSSimpleList_PushFront(p_weatherList, (int)v4); /*0x4bef1f*/
  }
  else
  {
    FormHeapFree((unsigned int)v4); /*0x4bef27*/
    PrintError("Unable to add default weather to default climate.  ( TESClimate::MakeDefault() )"); /*0x4bef31*/
  }
}
