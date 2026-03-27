TESObjectCELL *__thiscall MobileObject_ChangeCell(TESObjectREFR *this, ExtraDataList *a2)
{
  TESObjectCELL *result; // eax
  bhkCharacterProxy *CharProxy; // esi

  result = TESObjectREFR_GetParentCell(this);
  if ( a2 != (ExtraDataList *)result )
  {
    if ( a2 )
    {
      CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
      if ( CharProxy )
        *((float *)CharProxy + 0xC6) = TESObjectCELL_GetWaterHeight(a2) * hkFactor;
    }
    return (TESObjectCELL *)TESObjectREFR_ChangeCell(this, (TESObjectCELL *)a2);
  }
  return result;
}
