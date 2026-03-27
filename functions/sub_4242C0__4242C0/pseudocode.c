void __thiscall sub_4242C0(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CellMusicType);
  if ( a2 )
  {
    if ( ExtraData )
    {
      LOBYTE(ExtraData[1].vtbl) = a2;
    }
    else
    {
      v4 = (_BYTE *)FormHeapAlloc(0x10u);
      if ( v4 )
        v5 = (BSExtraData *)ExtraCellMusicType_Constructor(v4, a2);
      else
        v5 = 0;
      BaseExtraList_AddExtra(this, v5);
    }
  }
  else if ( ExtraData )
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
}
