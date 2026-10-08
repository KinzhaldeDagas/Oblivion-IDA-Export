BSExtraDataVtbl **__thiscall TESObjectREFR_MoveInitPos(
        TESChildCELL *this,
        BSExtraDataVtbl *a2,
        BSExtraDataVtbl *a3,
        BSExtraDataVtbl *a4)
{
  BSExtraDataVtbl **v5; // eax

  if ( g_zeroNiPoint3.x == *(float *)&a2 && g_zeroNiPoint3.y == *(float *)&a3 && g_zeroNiPoint3.z == *(float *)&a4 ) /*0x4dd1db*/
  {
    v5 = (BSExtraDataVtbl **)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5D))(this); /*0x4dd206*/
    ExtraDataList_SetStartingPosition((ExtraDataList *)(this + 0x11), &a2, this, *v5, v5[1], v5[2]); /*0x4dd228*/
  }
  else
  {
    ExtraDataList_SetStartingPosition((ExtraDataList *)(this + 0x11), &a2, this, a2, a3, a4); /*0x4dd1fc*/
  }
  return ExtraDataList_SetStartingRotation( /*0x4dd252*/
           (ExtraDataList *)(this + 0x11),
           &a2,
           this,
           *((BSExtraDataVtbl **)this + 8),
           *((BSExtraDataVtbl **)this + 9),
           *((BSExtraDataVtbl **)this + 0xA));
}
