int __thiscall sub_8CAE40(_DWORD *this, int *a2)
{
  int result; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // ebp
  _WORD *v7; // esi
  int i; // edi
  int j; // edi
  int k; // edi
  int m; // edi
  _DWORD *v12; // [esp+Ch] [ebp-4h]
  _DWORD *v13; // [esp+14h] [ebp+4h]

  result = *(this + 3);
  if ( result )
  {
    v5 = this + 0x13;
    sub_8989E0(a2, (int)(this + 0x13));
    v6 = this + 0x14;
    sub_898A30(a2, (int)(this + 0x14));
    v13 = this + 0x16;
    sub_898940(a2, (int)(this + 0x16));
    v12 = this + 0x15;
    sub_898990(a2, (int)(this + 0x15));
    v7 = sub_8991C0(a2);
    for ( i = 0; i < *((_DWORD *)v7 + 3); ++i )
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 8))(v5, *(_DWORD *)(*((_DWORD *)v7 + 2) + 4 * i));
    for ( j = 0; j < *((_DWORD *)v7 + 0xC); ++j )
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v6 + 8))(v6, *(_DWORD *)(*((_DWORD *)v7 + 0xB) + 4 * j));
    for ( k = 0; k < *((_DWORD *)v7 + 9); ++k )
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 8))(v13, *(_DWORD *)(*((_DWORD *)v7 + 8) + 4 * k));
    result = *((_DWORD *)v7 + 6);
    for ( m = 0; m < result; ++m )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v12 + 8))(v12, *(_DWORD *)(*((_DWORD *)v7 + 5) + 4 * m));
      result = *((_DWORD *)v7 + 6);
    }
    if ( v7[2] )
    {
      if ( !--v7[3] )
        return (**(int (__thiscall ***)(_WORD *, int))v7)(v7, 1);
    }
  }
  return result;
}
