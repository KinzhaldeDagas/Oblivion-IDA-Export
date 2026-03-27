BSExtraDataVtbl **__thiscall TESObjectREFR_MoveInitPos(
        TESChildCELL *this,
        BSExtraDataVtbl *a2,
        BSExtraDataVtbl *a3,
        BSExtraData *a4)
{
  int v5; // eax

  if ( Vector3_InitValue_ == *(float *)&a2
    && *(&Vector3_InitValue_ + 1) == *(float *)&a3
    && dword_B3F9B0 == *(float *)&a4 )
  {
    v5 = (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5D))(this);
    ExtraDataList_SetStartingPosition(
      (ExtraDataList *)(this + 0x11),
      &a2,
      this,
      *(BSExtraDataVtbl **)v5,
      *(BSExtraDataVtbl **)(v5 + 4),
      *(BSExtraData **)(v5 + 8));
  }
  else
  {
    ExtraDataList_SetStartingPosition((ExtraDataList *)(this + 0x11), &a2, this, a2, a3, a4);
  }
  return ExtraDataList_SetStartingRotation(
           (ExtraDataList *)(this + 0x11),
           &a2,
           this,
           *((BSExtraDataVtbl **)this + 8),
           *((BSExtraDataVtbl **)this + 9),
           *((BSExtraData **)this + 0xA));
}
