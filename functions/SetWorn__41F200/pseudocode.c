char __thiscall SetWorn(ExtraDataList *this, char a2, char a3)
{
  UInt8 v4; // cl
  char result; // al
  _BYTE *v6; // eax
  BSExtraData *v7; // eax
  _BYTE *v8; // eax

  v4 = this->members.m_presenceBitfield[3]; /*0x41f223*/
  if ( a3 ) /*0x41f22d*/
  {
    result = (v4 & 0x10) != 0; /*0x41f234*/
    if ( a2 ) /*0x41f23b*/
    {
      if ( (v4 & 0x10) != 0 ) /*0x41f23f*/
        return result; /*0x41f23f*/
      v6 = (_BYTE *)FormHeapAlloc(0xCu); /*0x41f247*/
      if ( v6 ) /*0x41f25d*/
      {
        v7 = (BSExtraData *)sub_42A030(v6); /*0x41f261*/
        return BaseExtraList_AddExtra(this, v7); /*0x41f2c7*/
      }
      goto LABEL_12; /*0x41f25d*/
    }
    if ( (v4 & 0x10) != 0 ) /*0x41f26a*/
      return BaseExtraList_RemoveExtraByType(this, 0x1Cu); /*0x41f26e*/
  }
  else
  {
    result = (v4 & 8) != 0; /*0x41f275*/
    if ( a2 ) /*0x41f27c*/
    {
      if ( (v4 & 8) != 0 ) /*0x41f280*/
        return result; /*0x41f280*/
      v8 = (_BYTE *)FormHeapAlloc(0xCu); /*0x41f284*/
      if ( v8 ) /*0x41f29a*/
      {
        v7 = (BSExtraData *)sub_429FF0(v8); /*0x41f29e*/
        return BaseExtraList_AddExtra(this, v7); /*0x41f2a3*/
      }
LABEL_12:
      v7 = 0; /*0x41f2a5*/
      return BaseExtraList_AddExtra(this, v7); /*0x41f2a5*/
    }
    if ( (v4 & 8) != 0 ) /*0x41f2cc*/
      return BaseExtraList_RemoveExtraByType(this, 0x1Bu); /*0x41f2d2*/
  }
  return result; /*0x41f2b7*/
}
