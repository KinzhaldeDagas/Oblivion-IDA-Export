void __thiscall sub_6D0D30(int *this, unsigned int a2)
{
  unsigned int v2; // esi
  void (__cdecl *v4)(int, int *, int, unsigned int *, int); // eax
  void (__cdecl *v5)(int, unsigned int *, int, int *, int); // eax
  void (__cdecl *v6)(int, unsigned int *, int, int *, int); // edx
  unsigned int i; // edi
  void (__cdecl *v8)(int, int *, int, int *, int); // eax
  unsigned int v9; // ecx
  int v10; // [esp-1Ch] [ebp-2Ch]
  int v11; // [esp-1Ch] [ebp-2Ch]
  int v12; // [esp-14h] [ebp-24h]
  int v13; // [esp-14h] [ebp-24h]
  int v14; // [esp+8h] [ebp-8h] BYREF
  int v15; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_6D0550(this, a2);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u )
  {
    v12 = *(_DWORD *)(v2 + 0x21C);
    v4 = *(void (__cdecl **)(int, int *, int, unsigned int *, int))(v12 + 4);
    a2 = 2;
    v4(v12, this + 0xF, 2, &a2, 1);
  }
  else
  {
    *((_WORD *)this + 0x1E) = (*(_WORD *)(v2 + 0x25A) >> 5) & 0x3F;
  }
  sub_712A20((unsigned int *)v2);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x4000002u )
  {
    v13 = *(_DWORD *)(v2 + 0x21C);
    v5 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v13 + 4);
    v14 = 1;
    v5(v13, &a2, 1, &v14, 1);
    *((_BYTE *)this + 0x5A) = (_BYTE)a2 != 0;
  }
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA010068u )
    sub_712AE0((_DWORD *)v2);
  if ( *(_DWORD *)(v2 + 4) >= 0xAu )
  {
    v6 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v10 = *(_DWORD *)(v2 + 0x21C);
    v14 = 4;
    v6(v10, &a2, 4, &v14, 1);
    sub_4CA040((unsigned __int16 *)this + 0x20, a2);
    for ( i = 0; i < a2; ++i )
    {
      v11 = *(_DWORD *)(v2 + 0x21C);
      v8 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 4);
      v14 = 4;
      v8(v11, &v15, 4, &v14, 1);
      v9 = *((unsigned __int16 *)this + 0x25);
      v14 = v15;
      if ( i < v9 )
        sub_4CA210((int)(this + 0x10), i, (float *)&v14);
    }
  }
}
