char __thiscall sub_41F370(ExtraDataList *this, char a2)
{
  char v3; // cl
  char result; // al
  _BYTE *v5; // eax
  BSExtraData *v6; // eax

  v3 = this->members.m_presenceBitfield[8];
  result = v3 < 0;
  if ( a2 )
  {
    if ( v3 >= 0 )
    {
      v5 = (_BYTE *)FormHeapAlloc(0xCu);
      if ( v5 )
        v6 = (BSExtraData *)sub_42A050(v5);
      else
        v6 = 0;
      return BaseExtraList_AddExtra(this, v6);
    }
  }
  else if ( v3 < 0 )
  {
    return BaseExtraList_RemoveExtraByType(this, 0x47u);
  }
  return result;
}
