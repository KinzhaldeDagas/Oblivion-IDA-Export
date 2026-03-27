int __thiscall sub_7201B0(NiTriBasedGeomData *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  void (__cdecl *v4)(int, NiTriBasedGeomData *, int, int *, int); // edx
  void (__cdecl *v5)(int, _DWORD **, int, int *, int); // eax
  void (__cdecl *v6)(int, int, int, int *, int); // edx
  int (__cdecl *v7)(int, char *, int, int *, int); // edx
  int result; // eax
  unsigned __int16 i; // bp
  int v10; // esi
  int v11; // eax
  int (__cdecl *v12)(int, int *, int, int *, int); // edx
  int (__cdecl *v13)(int, int, int, int *, int); // edx
  int v14; // [esp-28h] [ebp-40h]
  int v15; // [esp-14h] [ebp-2Ch]
  int v16; // [esp-14h] [ebp-2Ch]
  int v17; // [esp-14h] [ebp-2Ch]
  int v18; // [esp-14h] [ebp-2Ch]
  int v19; // [esp-10h] [ebp-28h]
  int v20; // [esp-10h] [ebp-28h]
  int v21; // [esp-Ch] [ebp-24h]
  int v22; // [esp+10h] [ebp-8h] BYREF
  int v23; // [esp+14h] [ebp-4h] BYREF

  v2 = a2;
  sub_732EB0(this, (int)a2);
  v4 = *(void (__cdecl **)(int, NiTriBasedGeomData *, int, int *, int))(v2[0x88] + 8);
  v15 = v2[0x88];
  v22 = 4;
  v4(v15, this + 1, 4, &v22, 1);
  LOBYTE(a2) = *((_DWORD *)this + 0x12) != 0;
  v14 = v2[0x88];
  v5 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v14 + 8);
  v22 = 1;
  v5(v14, &a2, 1, &v22, 1);
  if ( (_BYTE)a2 )
  {
    v21 = 2 * *((_DWORD *)this + 0x11);
    v6 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8);
    v19 = *((_DWORD *)this + 0x12);
    v16 = v2[0x88];
    v22 = 2;
    v6(v16, v19, v21, &v22, 1);
  }
  v7 = *(int (__cdecl **)(int, char *, int, int *, int))(v2[0x88] + 8);
  v17 = v2[0x88];
  v22 = 2;
  result = v7(v17, (char *)this + 0x50, 2, &v22, 1);
  for ( i = 0; i < *((_WORD *)this + 0x28); ++i )
  {
    v10 = 8 * i;
    v11 = v2[0x88];
    v22 = *(unsigned __int16 *)(v10 + *((_DWORD *)this + 0x13));
    v12 = *(int (__cdecl **)(int, int *, int, int *, int))(v11 + 8);
    v23 = 2;
    result = v12(v11, &v22, 2, &v23, 1);
    if ( (_WORD)v22 )
    {
      v13 = *(int (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8);
      v20 = *(_DWORD *)(*((_DWORD *)this + 0x13) + v10 + 4);
      v18 = v2[0x88];
      v23 = 2;
      result = v13(v18, v20, 2 * (unsigned __int16)v22, &v23, 1);
    }
  }
  return result;
}
