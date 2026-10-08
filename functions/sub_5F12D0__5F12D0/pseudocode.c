char __thiscall sub_5F12D0(MobileObject *this)
{
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v3; // edi

  CharProxy = MobileObject_GetCharProxy(this); /*0x5f12d4*/
  v3 = CharProxy; /*0x5f12d9*/
  if ( CharProxy ) /*0x5f12dd*/
  {
    LOBYTE(CharProxy) = ((int (__thiscall *)(MobileObject *, int))this->vtbl[1].super.Unk_4C)(this, 1); /*0x5f12eb*/
    if ( (_BYTE)CharProxy /*0x5f1306*/
      || (LOBYTE(CharProxy) = ((int (__thiscall *)(MobileObject *, int))this->vtbl[1].super.super.Unk_20)(this, 4) == 0,
          (_BYTE)CharProxy) )
    {
      *((_DWORD *)v3 + 0x7D) |= 0x4000u; /*0x5f1308*/
    }
    else
    {
      *((_DWORD *)v3 + 0x7D) &= ~0x4000u; /*0x5f1315*/
    }
  }
  return (char)CharProxy; /*0x5f1312*/
}
