char __thiscall sub_6C5A10(float *this, int a2, int *a3)
{
  LONG v4; // eax
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  LONG v10; // edi

  sub_715D80(this, a2, a3);
  LOBYTE(v4) = *((_BYTE *)this + 0x6C);
  v5 = 0;
  for ( *(_BYTE *)(a2 + 0x6C) = v4; v5 < *((unsigned __int16 *)this + 0x23); ++v5 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)this + 0x10) + 4 * v5);
    if ( v6 )
    {
      v7 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 0x18))(v6, a3);
      LOBYTE(v4) = sub_6C5760((_DWORD *)a2, v7, 0, 0);
    }
  }
  v8 = *((_DWORD *)this + 0x1F);
  if ( v8 )
  {
    v4 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v8 + 0x18))(v8, a3);
    v9 = *(_DWORD *)(a2 + 0x7C);
    v10 = v4;
    if ( v9 != v4 )
    {
      if ( v9 )
      {
        v4 = InterlockedDecrement((volatile LONG *)(v9 + 4));
        if ( !v4 )
          LOBYTE(v4) = (**(int (__thiscall ***)(int, int))v9)(v9, 1);
      }
      *(_DWORD *)(a2 + 0x7C) = v10;
      if ( v10 )
        LOBYTE(v4) = InterlockedIncrement((volatile LONG *)(v10 + 4));
    }
  }
  return v4;
}
