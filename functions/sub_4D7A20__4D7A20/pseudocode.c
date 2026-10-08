// TESObjectREFR wrapper records package start location from worldspace/cell, position XYZ, and rotZ into ExtraPackageStartLocation.
BSExtraData *__thiscall sub_4D7A20(_BYTE *this, BSExtraDataVtbl *a2, BSExtraDataVtbl *a3, _DWORD *a4, float a5)
{
  return ExtraDataList_SetStartLocation((ExtraDataList *)(this + 0x44), a2, a3, a4, a5); /*0x4d7a3f*/
}
