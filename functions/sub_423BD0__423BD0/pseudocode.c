void __thiscall sub_423BD0(ExtraDataList *this, char a2)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Seed);
  if ( a2 == (char)0xFF )
  {
    if ( ExtraData )
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
  else if ( ExtraData )
  {
    LOBYTE(ExtraData[1].vtbl) = a2;
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)sub_42A160(v4, a2);
    else
      v5 = 0;
    BaseExtraList_AddExtra(this, v5);
  }
}
