void __thiscall sub_88A280(unsigned int *this)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  int v4; // edi
  unsigned int v5; // ebx
  _DWORD *v6; // eax
  unsigned int i; // edi
  int v8; // eax
  int v9; // eax

  v2 = *(this + 0x13); /*0x88a283*/
  if ( v2 ) /*0x88a288*/
  {
    if ( v2 >= 0xBB8 ) /*0x88a293*/
      *(this + 0x13) = 0xBB8; /*0x88a295*/
    v3 = *(this + 0x13); /*0x88a29c*/
    v4 = fromIdentityBatchRemove; /*0x88a2a0*/
    if ( v3 < fromIdentityBatchRemove ) /*0x88a2a8*/
      v4 = *(this + 0x13); /*0x88a2aa*/
    v5 = v3 - v4; /*0x88a2af*/
    v6 = (_DWORD *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this); /*0x88a2b6*/
    if ( v6 ) /*0x88a2ba*/
    {
      sub_89C8E0(v6, (int *)(*(this + 0x12) + 4 * v5), v4); /*0x88a2c6*/
      for ( i = v5; i < *(this + 0x13); ++i ) /*0x88a2d0*/
      {
        v8 = *(_DWORD *)(*(this + 0x12) + 4 * i); /*0x88a2d5*/
        if ( v8 ) /*0x88a2da*/
          v9 = *(_DWORD *)(v8 + 0xC); /*0x88a2dc*/
        else
          v9 = 0; /*0x88a2e1*/
        if ( v9 ) /*0x88a2e5*/
          *(_DWORD *)(v9 + 0x18) &= ~0x20u; /*0x88a2e7*/
        sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*(this + 0x12) + 4 * i)); /*0x88a2f1*/
        *(_DWORD *)(*(this + 0x12) + 4 * i) = 0; /*0x88a2f9*/
      }
      *(this + 0x13) = v5; /*0x88a308*/
    }
  }
}
