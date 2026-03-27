char __thiscall sub_4DBF00(_DWORD *this, TESChildCELL *a2)
{
  char result; // al

  if ( !a2 )
    return (unsigned __int8)sub_4205C0((ExtraDataList *)(this + 0x11), (BSExtraDataVtbl *)a2);
  result = TESObjectREFR_IsPersistent_((TESObjectREFR *)a2);
  if ( result )
    return (unsigned __int8)sub_4205C0((ExtraDataList *)(this + 0x11), (BSExtraDataVtbl *)a2);
  return result;
}
