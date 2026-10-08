void __thiscall sub_46AA00(_DWORD *this, char a2)
{
  bool v3; // al

  v3 = sub_45A500(g_TESSaveLoadGame); /*0x46aa09*/
  if ( a2 ) /*0x46aa13*/
  {
    if ( !v3 ) /*0x46aa17*/
      (*(void (__thiscall **)(_DWORD *, int))(*this + 0x40))(this, 0x10000); /*0x46aa25*/
    *(this + 2) |= 0x2000u; /*0x46aa27*/
  }
  else
  {
    if ( !v3 ) /*0x46aa34*/
      (*(void (__thiscall **)(_DWORD *, int))(*this + 0x44))(this, 0x10000); /*0x46aa42*/
    *(this + 2) &= ~0x2000u; /*0x46aa44*/
  }
}
