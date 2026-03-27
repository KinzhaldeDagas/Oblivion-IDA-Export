char __thiscall ExtraDataList_SetGhost_(ExtraDataList *this, char a2)
{
  UInt8 v3; // cl
  char result; // al
  _BYTE *v5; // eax
  BSExtraData *v6; // eax

  v3 = this->members.m_presenceBitfield[4];
  result = (v3 & 0x20) != 0;
  if ( a2 )
  {
    if ( (v3 & 0x20) == 0 )
    {
      v5 = (_BYTE *)FormHeapAlloc(0xCu);
      if ( v5 )
        v6 = (BSExtraData *)sub_429FD0(v5);
      else
        v6 = 0;
      return BaseExtraList_AddExtra(this, v6);
    }
  }
  else if ( (v3 & 0x20) != 0 )
  {
    return BaseExtraList_RemoveExtraByType(this, 0x25u);
  }
  return result;
}
