int __thiscall sub_8A15C0(void *this, _DWORD *a2)
{
  int (__stdcall *v2)(char *); // edx
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // edi
  char v15; // [esp+Fh] [ebp-5h] BYREF
  void *v16; // [esp+10h] [ebp-4h]

  v2 = *(int (__stdcall **)(char *))(*(_DWORD *)this + 0x74);
  v16 = this;
  v3 = v2(&v15);
  v4 = sub_7124D0(a2);
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 0xC);
    v6 = v3 + 4;
    if ( v5 >= 0 )
    {
      v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v7 )
        v7 = dword_BA7D9C;
      sub_8A75D0(v7, *(_DWORD **)v6, 4 * v5, 0x14);
    }
    v8 = *(_DWORD *)(v6 + 8) & 0x40000000 | 0x80000000;
    *(_DWORD *)(v6 + 8) = v8;
    v9 = v8 & 0x3FFFFFFF;
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 4) = 0;
    if ( v9 < v4 )
    {
      v10 = 2 * v9;
      if ( v4 >= v10 )
        v10 = v4;
      sub_8A6E40((const void **)v6, v10, 4);
    }
    if ( v4 )
    {
      v11 = v4;
      do
      {
        v12 = sub_7124A0(a2);
        if ( v12 )
        {
          v13 = *(_DWORD *)(v12 + 8);
          if ( *(_DWORD *)(v6 + 4) == (*(_DWORD *)(v6 + 8) & 0x3FFFFFFF) )
            sub_8A6EE0(v6, 4);
          *(_DWORD *)(*(_DWORD *)v6 + 4 * (*(_DWORD *)(v6 + 4))++) = v13;
        }
        --v11;
      }
      while ( v11 );
    }
  }
  return sub_8A2600(a2);
}
