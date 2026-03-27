char __thiscall SetWorn(ExtraDataList *this, char a2, char a3)
{
  UInt8 v4; // cl
  char result; // al
  _BYTE *v6; // eax
  BSExtraData *v7; // eax
  _BYTE *v8; // eax

  v4 = this->members.m_presenceBitfield[3];
  if ( a3 )
  {
    result = (v4 & 0x10) != 0;
    if ( a2 )
    {
      if ( (v4 & 0x10) != 0 )
        return result;
      v6 = (_BYTE *)FormHeapAlloc(0xCu);
      if ( v6 )
      {
        v7 = (BSExtraData *)sub_42A030(v6);
        return BaseExtraList_AddExtra(this, v7);
      }
      goto LABEL_12;
    }
    if ( (v4 & 0x10) != 0 )
      return BaseExtraList_RemoveExtraByType(this, 0x1Cu);
  }
  else
  {
    result = (v4 & 8) != 0;
    if ( a2 )
    {
      if ( (v4 & 8) != 0 )
        return result;
      v8 = (_BYTE *)FormHeapAlloc(0xCu);
      if ( v8 )
      {
        v7 = (BSExtraData *)sub_429FF0(v8);
        return BaseExtraList_AddExtra(this, v7);
      }
LABEL_12:
      v7 = 0;
      return BaseExtraList_AddExtra(this, v7);
    }
    if ( (v4 & 8) != 0 )
      return BaseExtraList_RemoveExtraByType(this, 0x1Bu);
  }
  return result;
}
