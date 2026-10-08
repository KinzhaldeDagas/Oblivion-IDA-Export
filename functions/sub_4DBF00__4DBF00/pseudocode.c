char __thiscall sub_4DBF00(_DWORD *this, TESObjectREFR *a2)
{
  char result; // al

  if ( !a2 ) /*0x4dbf0a*/
    return (unsigned __int8)ExtraDataList_SetRandomTeleportMarker((ExtraDataList *)(this + 0x11), a2); /*0x4dbf0a*/
  result = TESObjectREFR_IsPersistent(a2); /*0x4dbf0e*/
  if ( result ) /*0x4dbf15*/
    return (unsigned __int8)ExtraDataList_SetRandomTeleportMarker((ExtraDataList *)(this + 0x11), a2); /*0x4dbf1b*/
  return result; /*0x4dbf20*/
}
