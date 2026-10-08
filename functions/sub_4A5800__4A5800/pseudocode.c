// Verified: merges only Weather data ID 3 with override/priority rules and delegates weather-list merge to EntryData helpers.
void __thiscall TESRegionDataWeather_MergeForSelection(
        TESRegionDataWeather *this,
        TESRegionData *source,
        int mergeMode)
{
  unsigned __int8 bOverride; // al
  int priority; // ecx
  float sourcea; // [esp+10h] [ebp+4h]
  float sourceb; // [esp+10h] [ebp+4h]
  int mergeModea; // [esp+14h] [ebp+8h]

  if ( source && ((int (__thiscall *)(TESRegionData *))source->vtable->unknown0C)(source) == 3 && mergeMode ) /*0x4a5827*/
  {
    if ( this->base.bIgnore ) /*0x4a582d*/
    {
      bOverride = source->bOverride; /*0x4a5833*/
LABEL_6:
      this->base.bOverride = bOverride; /*0x4a5836*/
      sub_4A3520(this, source->priority); /*0x4a5840*/
      OblivionTESWeatherList_CopyEntries(&this->weatherList, (OblivionTESWeatherList *)&source[1], 0); /*0x4a584e*/
      return; /*0x4a5855*/
    }
    if ( !source->bIgnore ) /*0x4a5858*/
    {
      bOverride = source->bOverride; /*0x4a5866*/
      if ( this->base.bOverride ) /*0x4a5862*/
      {
        if ( bOverride && source->priority > this->base.priority ) /*0x4a5879*/
          goto LABEL_6; /*0x4a5879*/
      }
      else
      {
        if ( bOverride ) /*0x4a588b*/
          goto LABEL_6; /*0x4a588b*/
        OblivionTESWeatherList_CopyEntries(&this->weatherList, (OblivionTESWeatherList *)&source[1], 1); /*0x4a5896*/
        priority = source->priority; /*0x4a589b*/
        sourcea = (double)(this->base.priority * this->base.priority + priority * (0x64 - this->base.priority)) /*0x4a58d6*/
                + (double)(priority * priority + this->base.priority * (0x64 - priority));
        sourceb = sourcea * dbl_A40048; /*0x4a58e4*/
        mergeModea = (int)sub_4842F0(sourceb); /*0x4a590d*/
        sub_4A3520(this, mergeModea); /*0x4a591d*/
      }
    }
  }
}
