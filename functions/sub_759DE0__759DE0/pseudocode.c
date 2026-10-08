int __thiscall sub_759DE0(int *this, signed int a2)
{
  signed int v2; // ebp
  int v4; // eax
  unsigned __int16 v5; // di
  bool v6; // zf
  int v7; // ebx
  int v8; // eax
  bool v9; // sf
  int v10; // ebx
  float *v11; // edi
  int v12; // edi
  void (__cdecl *v13)(int, signed int *, int, int *, int); // eax
  int v14; // eax
  void (__cdecl *v15)(int, int, int, int *, int); // eax
  int v16; // eax
  void (__cdecl *v17)(int, int *, int, signed int *, int); // edx
  int (__cdecl *v18)(int, char *, int, signed int *, int); // edx
  int v20; // [esp-2Ch] [ebp-38h]
  int v21; // [esp-1Ch] [ebp-28h]
  int v22; // [esp-18h] [ebp-24h]
  int v23; // [esp-18h] [ebp-24h]
  int v24; // [esp-18h] [ebp-24h]
  int v25; // [esp-14h] [ebp-20h]
  unsigned int v26; // [esp-Ch] [ebp-18h]
  int v27; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x759de2*/
  sub_73F460(this, (unsigned int *)a2); /*0x759deb*/
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA030005u )
  {
    if ( *(this + 0x14) )
    {
      *(this + 0x15) = FormHeapAlloc(
                         (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
                       ? 0xFFFFFFFF
                       : 4 * *((unsigned __int16 *)this + 4));
      v4 = FormHeapAlloc(
             (0xC * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0
           ? 0xFFFFFFFF
           : 0xC * *((unsigned __int16 *)this + 4));
      v5 = 0; /*0x759e39*/
      v6 = *((_WORD *)this + 4) == 0; /*0x759e3e*/
      *(this + 0x16) = v4; /*0x759e42*/
      if ( !v6 ) /*0x759e45*/
      {
        do /*0x759e6d*/
        {
          sub_715000( /*0x759e61*/
            (float *)(*(this + 0x14) + 0x10 * v5),
            (float *)(*(this + 0x15) + 4 * v5),
            (float *)(*(this + 0x16) + 0xC * v5));
          ++v5; /*0x759e66*/
        }
        while ( v5 < *((_WORD *)this + 4) ); /*0x759e6d*/
      }
      sub_73EF50((unsigned int *)this, 0); /*0x759e73*/
    }
  }
  v7 = *((unsigned __int16 *)this + 4); /*0x759e79*/
  v8 = FormHeapAlloc((0x1C * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * v7);
  a2 = v8; /*0x759e9a*/
  if ( v8 ) /*0x759e9e*/
  {
    v9 = v7 - 1 < 0; /*0x759ea0*/
    v10 = v7 - 1; /*0x759ea0*/
    v11 = (float *)v8; /*0x759ea3*/
    if ( !v9 ) /*0x759ea5*/
    {
      do /*0x759eb4*/
      {
        sub_75F780(v11); /*0x759ea9*/
        v11 += 7; /*0x759eae*/
        --v10; /*0x759eb1*/
      }
      while ( v10 >= 0 ); /*0x759eb4*/
      v8 = a2; /*0x759eb6*/
    }
  }
  else
  {
    v8 = 0; /*0x759ebc*/
  }
  v12 = 0; /*0x759ebe*/
  v6 = *((_WORD *)this + 4) == 0; /*0x759ec0*/
  *(this + 0x17) = v8; /*0x759ec4*/
  if ( !v6 ) /*0x759ec8*/
  {
    do /*0x759eef*/
      sub_75F840((char *)(*(this + 0x17) + 0x1C * (unsigned __int16)v12++), v2); /*0x759ee3*/
    while ( (unsigned __int16)v12 < *((_WORD *)this + 4) ); /*0x759eef*/
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0x14000002u )
  {
    if ( *(this + 0x15) )
    {
      v16 = FormHeapAlloc(
              (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
            ? 0xFFFFFFFF
            : 4 * *((unsigned __int16 *)this + 4));
      v26 = 4 * *((unsigned __int16 *)this + 4); /*0x759f98*/
      *(this + 0x18) = v16; /*0x759f9c*/
      _memset(v16, 0, v26); /*0x759f9f*/
    }
  }
  else
  {
    v22 = *(_DWORD *)(v2 + 0x21C); /*0x759f11*/
    v13 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v22 + 4); /*0x759f12*/
    v27 = 1; /*0x759f15*/
    v13(v22, &a2, 1, &v27, 1); /*0x759f1d*/
    if ( (_BYTE)a2 )
    {
      v14 = FormHeapAlloc(
              (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
            ? 0xFFFFFFFF
            : 4 * *((unsigned __int16 *)this + 4));
      v25 = 4 * *((unsigned __int16 *)this + 4); /*0x759f52*/
      *(this + 0x18) = v14; /*0x759f53*/
      v23 = v14; /*0x759f5c*/
      v15 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x759f5d*/
      v21 = *(_DWORD *)(v2 + 0x21C); /*0x759f60*/
      v27 = 4; /*0x759f61*/
      v15(v21, v23, v25, &v27, 1); /*0x759f69*/
    }
  }
  v17 = *(void (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x759fb4*/
  v24 = *(_DWORD *)(v2 + 0x21C); /*0x759fc1*/
  a2 = 2; /*0x759fc2*/
  v17(v24, this + 0x19, 2, &a2, 1); /*0x759fc6*/
  v18 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x759fce*/
  v20 = *(_DWORD *)(v2 + 0x21C); /*0x759fdd*/
  a2 = 2; /*0x759fde*/
  return v18(v20, (char *)this + 0x66, 2, &a2, 1); /*0x759fe8*/
}
