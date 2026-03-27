char __thiscall sub_5F12D0(MobileObject *this)
{
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v3; // edi

  CharProxy = MobileObject_GetCharProxy(this);
  v3 = CharProxy;
  if ( CharProxy )
  {
    LOBYTE(CharProxy) = ((int (__thiscall *)(MobileObject *, int))this->vtbl[1].super.Unk_4C)(this, 1);
    if ( (_BYTE)CharProxy
      || (LOBYTE(CharProxy) = ((int (__thiscall *)(MobileObject *, int))this->vtbl[1].super.super.Unk_20)(this, 4) == 0,
          (_BYTE)CharProxy) )
    {
      *((_DWORD *)v3 + 0x7D) |= 0x4000u;
    }
    else
    {
      *((_DWORD *)v3 + 0x7D) &= ~0x4000u;
    }
  }
  return (char)CharProxy;
}
