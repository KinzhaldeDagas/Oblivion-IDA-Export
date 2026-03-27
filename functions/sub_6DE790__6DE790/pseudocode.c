int __thiscall sub_6DE790(_BYTE *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _BYTE *, int, int *, int); // edx
  void (__cdecl *v5)(int, _BYTE *, int, int *, int); // eax
  int v6; // eax
  void (__cdecl *v7)(int, _DWORD **, int, int *, int); // edx
  int result; // eax
  bool v9; // zf
  int *v10; // esi
  int v11; // ebp
  void (__cdecl *v12)(int, int, int, int *, int); // edx
  int v14; // [esp-28h] [ebp-44h]
  int v15; // [esp-14h] [ebp-30h]
  int v16; // [esp-14h] [ebp-30h]
  int v17; // [esp-10h] [ebp-2Ch]
  int v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+14h] [ebp-8h] BYREF
  int v20; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  nullsub_returnvVoid_1arg((int)a2);
  v4 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(v2[0x88] + 8);
  v15 = v2[0x88];
  v19 = 4;
  v4(v15, this + 8, 4, &v19, 1);
  v14 = v2[0x88];
  v5 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(v14 + 8);
  v19 = 4;
  v5(v14, this + 0xC, 4, &v19, 1);
  v6 = v2[0x88];
  LOBYTE(a2) = *(this + 0x14);
  v7 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v6 + 8);
  v19 = 1;
  v7(v6, &a2, 1, &v19, 1);
  result = 0;
  v9 = *((_DWORD *)this + 2) == 0;
  v19 = 0;
  if ( !v9 )
  {
    v18 = 0;
    do
    {
      v10 = (int *)(v18 + *((_DWORD *)this + 4));
      v11 = *((_DWORD *)this + 3);
      sub_713720(v2, (const char *)v10[1]);
      if ( v11 )
      {
        v12 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8);
        v17 = *v10;
        v16 = v2[0x88];
        v20 = 4;
        v12(v16, v17, 0xC * v11, &v20, 1);
      }
      v18 += 0xC;
      result = v19 + 1;
    }
    while ( (unsigned int)++v19 < *((_DWORD *)this + 2) );
  }
  return result;
}
