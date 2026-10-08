// Verified: clears destination weather list when mode is false, then copies each 8-byte {TESWeather*, sortWeight} payload into a new list node; mode true preserves existing entries and appends.
void __thiscall OblivionTESWeatherList_CopyEntries(
        OblivionTESWeatherList *this,
        OblivionTESWeatherList *source,
        char append)
{
  OblivionTESWeatherList *v3; // esi
  TESWeather **v5; // eax
  OblivionTESWeatherWeightEntry *firstEntry; // ecx

  v3 = source; /*0x4eed81*/
  if ( source ) /*0x4eed8a*/
  {
    if ( !append ) /*0x4eed91*/
      sub_5B1D70((unsigned int *)this); /*0x4eed93*/
    if ( source->overflowNodes || source->firstEntry ) /*0x4eed9e*/
    {
      do /*0x4eedc6*/
      {
        v5 = (TESWeather **)FormHeapAlloc(8u); /*0x4eeda5*/
        firstEntry = v3->firstEntry; /*0x4eedaa*/
        *v5 = v3->firstEntry->weather; /*0x4eedae*/
        v5[1] = (TESWeather *)firstEntry->selectionWeight; /*0x4eedb6*/
        BSSimpleList_PushBack(this, (int)v5); /*0x4eedbc*/
        v3 = (OblivionTESWeatherList *)v3->overflowNodes; /*0x4eedc1*/
      }
      while ( v3 ); /*0x4eedc6*/
    }
  }
}
