char __thiscall sub_4DBF30(_DWORD *this, TESChildCELL *a2)
{
  char result; // al

  if ( !a2 ) /*0x4dbf3a*/
    return (unsigned __int8)ExtraDataList_SetMerchantContainer((ExtraDataList *)(this + 0x11), (BSExtraDataVtbl *)a2); /*0x4dbf3a*/
  result = TESObjectREFR_IsPersistent((TESObjectREFR *)a2); /*0x4dbf3e*/
  if ( result ) /*0x4dbf45*/
    return (unsigned __int8)ExtraDataList_SetMerchantContainer((ExtraDataList *)(this + 0x11), (BSExtraDataVtbl *)a2); /*0x4dbf4b*/
  return result; /*0x4dbf50*/
}
