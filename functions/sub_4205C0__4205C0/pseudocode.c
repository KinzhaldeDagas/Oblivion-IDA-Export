// Verified ExtraDataList random-marker setter: null removes ExtraData type 0x43; non-null updates or allocates an ExtraRandomTeleportMarker and stores the TESObjectREFR* marker at +0x0C.
ExtraRandomTeleportMarker *__thiscall ExtraDataList_SetRandomTeleportMarker(
        ExtraDataList *this,
        TESObjectREFR *markerReference)
{
  ExtraRandomTeleportMarker *result; // eax
  ExtraRandomTeleportMarker *v4; // eax
  ExtraRandomTeleportMarker *v5; // eax

  if ( !markerReference ) /*0x4205ec*/
    return (ExtraRandomTeleportMarker *)BaseExtraList_RemoveExtraByType(this, 0x43u); /*0x42065a*/
  result = (ExtraRandomTeleportMarker *)BaseExtraList_GetExtraData(this, kExtraData_RandomTeleportMarker); /*0x4205ee*/
  if ( result ) /*0x4205f5*/
  {
    result->teleportRef = markerReference; /*0x4205f7*/
  }
  else
  {
    v4 = (ExtraRandomTeleportMarker *)FormHeapAlloc(0x10u); /*0x420610*/
    if ( v4 ) /*0x420626*/
      v5 = ExtraRandomTeleportMarker_ctor(v4); /*0x42062a*/
    else
      v5 = 0; /*0x420631*/
    v5->teleportRef = markerReference; /*0x42063e*/
    return (ExtraRandomTeleportMarker *)BaseExtraList_AddExtra(this, &v5->super); /*0x420641*/
  }
  return result; /*0x4205fa*/
}
