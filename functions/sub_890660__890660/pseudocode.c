char __thiscall sub_890660(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // ecx
  _DWORD *v10; // edi
  int v11; // eax

  if ( !this )
    return 0;
  v4 = (_DWORD *)*(this + 2);
  if ( !v4 )
    return 0;
  v5 = sub_8AC0C0(v4);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = *(_DWORD *)(v5 + 0x14);
  v8 = a2 ? *(_DWORD *)(a2 + 8) : 0;
  if ( v7 == v8 )
    return 0;
  v9 = (_DWORD *)*(this + 2);
  v10 = *(_DWORD **)(v6 + 8);
  if ( v9 )
    sub_8AC070(v9);
  if ( v10 )
    sub_899B30(v10, (int (__stdcall ***)(signed int))v6);
  if ( a2 )
    v11 = *(_DWORD *)(a2 + 8);
  else
    v11 = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 8))(v6, v11);
  if ( v10 )
    sub_899A50(v10, (int *)v6);
  return 1;
}
