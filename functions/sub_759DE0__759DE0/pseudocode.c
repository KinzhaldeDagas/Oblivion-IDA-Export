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
  int v26; // [esp-Ch] [ebp-18h]
  int v27; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_73F460(this, (unsigned int *)a2);
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
      v5 = 0;
      v6 = *((_WORD *)this + 4) == 0;
      *(this + 0x16) = v4;
      if ( !v6 )
      {
        do
        {
          sub_715000(
            (float *)(*(this + 0x14) + 0x10 * v5),
            (float *)(*(this + 0x15) + 4 * v5),
            (float *)(*(this + 0x16) + 0xC * v5));
          ++v5;
        }
        while ( v5 < *((_WORD *)this + 4) );
      }
      sub_73EF50((unsigned int *)this, 0);
    }
  }
  v7 = *((unsigned __int16 *)this + 4);
  v8 = FormHeapAlloc((0x1C * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * v7);
  a2 = v8;
  if ( v8 )
  {
    v9 = v7 - 1 < 0;
    v10 = v7 - 1;
    v11 = (float *)v8;
    if ( !v9 )
    {
      do
      {
        sub_75F780(v11);
        v11 += 7;
        --v10;
      }
      while ( v10 >= 0 );
      v8 = a2;
    }
  }
  else
  {
    v8 = 0;
  }
  v12 = 0;
  v6 = *((_WORD *)this + 4) == 0;
  *(this + 0x17) = v8;
  if ( !v6 )
  {
    do
      sub_75F840((char *)(*(this + 0x17) + 0x1C * (unsigned __int16)v12++), v2);
    while ( (unsigned __int16)v12 < *((_WORD *)this + 4) );
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0x14000002u )
  {
    if ( *(this + 0x15) )
    {
      v16 = FormHeapAlloc(
              (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
            ? 0xFFFFFFFF
            : 4 * *((unsigned __int16 *)this + 4));
      v26 = 4 * *((unsigned __int16 *)this + 4);
      *(this + 0x18) = v16;
      _memset(v16, 0, v26);
    }
  }
  else
  {
    v22 = *(_DWORD *)(v2 + 0x21C);
    v13 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v22 + 4);
    v27 = 1;
    v13(v22, &a2, 1, &v27, 1);
    if ( (_BYTE)a2 )
    {
      v14 = FormHeapAlloc(
              (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
            ? 0xFFFFFFFF
            : 4 * *((unsigned __int16 *)this + 4));
      v25 = 4 * *((unsigned __int16 *)this + 4);
      *(this + 0x18) = v14;
      v23 = v14;
      v15 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
      v21 = *(_DWORD *)(v2 + 0x21C);
      v27 = 4;
      v15(v21, v23, v25, &v27, 1);
    }
  }
  v17 = *(void (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v24 = *(_DWORD *)(v2 + 0x21C);
  a2 = 2;
  v17(v24, this + 0x19, 2, &a2, 1);
  v18 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v20 = *(_DWORD *)(v2 + 0x21C);
  a2 = 2;
  return v18(v20, (char *)this + 0x66, 2, &a2, 1);
}
