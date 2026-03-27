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

  v2 = *(this + 0x13);
  if ( v2 )
  {
    if ( v2 >= 0xBB8 )
      *(this + 0x13) = 0xBB8;
    v3 = *(this + 0x13);
    v4 = fromIdentityBatchRemove;
    if ( v3 < fromIdentityBatchRemove )
      v4 = *(this + 0x13);
    v5 = v3 - v4;
    v6 = (_DWORD *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this);
    if ( v6 )
    {
      sub_89C8E0(v6, *(this + 0x12) + 4 * v5, v4);
      for ( i = v5; i < *(this + 0x13); ++i )
      {
        v8 = *(_DWORD *)(*(this + 0x12) + 4 * i);
        if ( v8 )
          v9 = *(_DWORD *)(v8 + 0xC);
        else
          v9 = 0;
        if ( v9 )
          *(_DWORD *)(v9 + 0x18) &= ~0x20u;
        sub_8BC730(*(int (__stdcall ****)(signed int))(*(this + 0x12) + 4 * i));
        *(_DWORD *)(*(this + 0x12) + 4 * i) = 0;
      }
      *(this + 0x13) = v5;
    }
  }
}
