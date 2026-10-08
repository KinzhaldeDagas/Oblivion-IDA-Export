char __thiscall sub_4DBF60(_DWORD *this, TESChildCELL *a2)
{
  char result; // al

  if ( !a2 ) /*0x4dbf6a*/
    return (unsigned __int8)ExtraDataList_SetEnableStateParent((ExtraDataList *)(this + 0x11), (BSExtraDataVtbl *)a2); /*0x4dbf6a*/
  result = TESObjectREFR_IsPersistent((TESObjectREFR *)a2); /*0x4dbf6e*/
  if ( result ) /*0x4dbf75*/
    return (unsigned __int8)ExtraDataList_SetEnableStateParent((ExtraDataList *)(this + 0x11), (BSExtraDataVtbl *)a2); /*0x4dbf7b*/
  return result; /*0x4dbf80*/
}
