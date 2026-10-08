// Adds or removes marker extra ExtraCannotWear type 0x47 according to the requested state.
char __thiscall ExtraDataList_SetCannotWear(ExtraDataList *this, char a2)
{
  char v3; // cl
  char result; // al
  _BYTE *v5; // eax
  BSExtraData *v6; // eax

  v3 = this->members.m_presenceBitfield[8]; /*0x41f393*/
  result = v3 < 0; /*0x41f39d*/
  if ( a2 ) /*0x41f3a4*/
  {
    if ( v3 >= 0 ) /*0x41f3a8*/
    {
      v5 = (_BYTE *)FormHeapAlloc(0xCu); /*0x41f3ac*/
      if ( v5 ) /*0x41f3c2*/
        v6 = (BSExtraData *)ExtraCannotWear_ctor(v5); /*0x41f3c6*/
      else
        v6 = 0; /*0x41f3cd*/
      return BaseExtraList_AddExtra(this, v6); /*0x41f3da*/
    }
  }
  else if ( v3 < 0 ) /*0x41f3f4*/
  {
    return BaseExtraList_RemoveExtraByType(this, 0x47u); /*0x41f3fa*/
  }
  return result; /*0x41f3df*/
}
