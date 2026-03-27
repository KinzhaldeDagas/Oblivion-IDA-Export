int __thiscall sub_8B02B0(_DWORD *this, int a2, _DWORD **a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  char v11; // [esp+Fh] [ebp-1h] BYREF

  v4 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v11);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 4);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 8);
    else
      v7 = 0;
    if ( v7 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD **))(*(_DWORD *)v7 + 0x8C))(v7, a3) )
      {
        v8 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v7 + 0x18))(v7, a3);
        if ( v8 )
          v9 = *(_DWORD *)(v8 + 8);
        else
          v9 = 0;
        *(_DWORD *)(v5 + 4) = v9;
      }
    }
  }
  return sub_8A2670(this, a2, a3);
}
