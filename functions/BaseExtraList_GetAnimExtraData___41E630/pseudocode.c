BSExtraDataVtbl *__thiscall BaseExtraList_GetAnimExtraData_(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Anim);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
