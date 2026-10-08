char __thiscall ExtraDataList_SetGhost_(ExtraDataList *this, char a2)
{
  UInt8 v3; // cl
  char result; // al
  _BYTE *v5; // eax
  BSExtraData *v6; // eax

  v3 = this->members.m_presenceBitfield[4]; /*0x41f173*/
  result = (v3 & 0x20) != 0; /*0x41f17e*/
  if ( a2 ) /*0x41f185*/
  {
    if ( (v3 & 0x20) == 0 ) /*0x41f189*/
    {
      v5 = (_BYTE *)FormHeapAlloc(0xCu); /*0x41f18d*/
      if ( v5 ) /*0x41f1a3*/
        v6 = (BSExtraData *)sub_429FD0(v5); /*0x41f1a7*/
      else
        v6 = 0; /*0x41f1ae*/
      return BaseExtraList_AddExtra(this, v6); /*0x41f1bb*/
    }
  }
  else if ( (v3 & 0x20) != 0 ) /*0x41f1d5*/
  {
    return BaseExtraList_RemoveExtraByType(this, 0x25u); /*0x41f1db*/
  }
  return result; /*0x41f1c0*/
}
