BSExtraDataVtbl *__thiscall sub_424180(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v2; // eax
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0;
  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Havok);
  if ( ExtraData )
  {
    v2 = ExtraData + 1;
  }
  else
  {
    v4 = 0;
    v2 = (BSExtraData *)&v4;
  }
  return v2->vtbl;
}
