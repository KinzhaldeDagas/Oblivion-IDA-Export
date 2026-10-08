void __thiscall sub_88A310(int *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax
  unsigned int i; // edi
  int v5; // eax
  int v6; // eax

  v2 = *(this + 0xD); /*0x88a313*/
  if ( v2 ) /*0x88a318*/
  {
    if ( v2 >= 0xC8 ) /*0x88a323*/
      *(this + 0xD) = 0xC8; /*0x88a325*/
    v3 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x88a331*/
    if ( v3 ) /*0x88a335*/
    {
      sub_89D080(v3, *(this + 0xC), *(this + 0xD)); /*0x88a342*/
      for ( i = 0; i < *(this + 0xD); ++i ) /*0x88a349*/
      {
        v5 = *(_DWORD *)(*(this + 0xC) + 4 * i); /*0x88a353*/
        if ( v5 ) /*0x88a358*/
          v6 = *(_DWORD *)(v5 + 0xC); /*0x88a35a*/
        else
          v6 = 0; /*0x88a35f*/
        if ( v6 ) /*0x88a363*/
          *(_BYTE *)(v6 + 0x10) &= ~2u; /*0x88a365*/
        sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*(this + 0xC) + 4 * i)); /*0x88a36f*/
      }
      _memset(*(this + 0xC), 0, 4 * *(this + 0xD)); /*0x88a38a*/
      *(this + 0xD) = 0; /*0x88a392*/
    }
  }
}
