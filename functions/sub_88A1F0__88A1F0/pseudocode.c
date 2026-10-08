void __thiscall sub_88A1F0(int *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax
  unsigned int i; // edi
  int v5; // eax
  int v6; // eax

  v2 = *(this + 0x13); /*0x88a1f3*/
  if ( v2 ) /*0x88a1f8*/
  {
    if ( v2 >= 0xBB8 ) /*0x88a203*/
      *(this + 0x13) = 0xBB8; /*0x88a205*/
    v3 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x88a211*/
    if ( v3 ) /*0x88a215*/
    {
      sub_89C8E0(v3, (int *)*(this + 0x12), *(this + 0x13)); /*0x88a222*/
      for ( i = 0; i < *(this + 0x13); ++i ) /*0x88a229*/
      {
        v5 = *(_DWORD *)(*(this + 0x12) + 4 * i); /*0x88a233*/
        if ( v5 ) /*0x88a238*/
          v6 = *(_DWORD *)(v5 + 0xC); /*0x88a23a*/
        else
          v6 = 0; /*0x88a23f*/
        if ( v6 ) /*0x88a243*/
          *(_DWORD *)(v6 + 0x18) &= ~0x20u; /*0x88a245*/
        sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*(this + 0x12) + 4 * i)); /*0x88a24f*/
      }
      _memset(*(this + 0x12), 0, 4 * *(this + 0x13)); /*0x88a26a*/
      *(this + 0x13) = 0; /*0x88a272*/
    }
  }
}
