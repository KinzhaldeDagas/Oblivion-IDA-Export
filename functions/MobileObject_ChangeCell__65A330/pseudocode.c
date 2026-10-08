TESObjectCELL *__thiscall MobileObject_ChangeCell(TESObjectREFR *this, ExtraDataList *a2)
{
  TESObjectCELL *result; // eax
  bhkCharacterProxy *CharProxy; // esi

  result = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x65a334*/
  if ( a2 != (ExtraDataList *)result ) /*0x65a33f*/
  {
    if ( a2 ) /*0x65a343*/
    {
      CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x65a34d*/
      if ( CharProxy ) /*0x65a351*/
        *((float *)CharProxy + 0xC6) = TESObjectCELL_GetWaterHeight(a2) * hkFactor;// TES4 authoritative: cell change refreshes proxy+0x318 as parent cell water height converted to Havok units. /*0x65a360*/
    }
    return (TESObjectCELL *)TESObjectREFR_ChangeCell(this, (TESObjectCELL *)a2); /*0x65a36a*/
  }
  return result; /*0x65a36f*/
}
