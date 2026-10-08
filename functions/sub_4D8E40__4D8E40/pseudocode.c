BSExtraDataVtbl *__thiscall sub_4D8E40(_BYTE *this)
{
  BSExtraData *OblivionEntry; // eax

  OblivionEntry = ExtraDataList_GetOblivionEntry((ExtraDataList *)(this + 0x44)); /*0x4d8e43*/
  if ( OblivionEntry ) /*0x4d8e4a*/
    return OblivionEntry[2].vtbl; /*0x4d8e4c*/
  else
    return 0; /*0x4d8e50*/
}
