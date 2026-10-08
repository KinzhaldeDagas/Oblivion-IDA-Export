int __thiscall sub_6E9940(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, _DWORD *, int, unsigned int *, int); // eax
  void (__cdecl *v5)(int, _DWORD *, int, unsigned int *, int); // eax
  int v6; // eax
  void (__cdecl *v7)(int, int *, int, unsigned int *, int); // edx
  bool v8; // zf
  _DWORD *v9; // edi
  int v10; // eax
  void (__cdecl *v11)(int, int *, int, int *, int); // eax
  unsigned int i; // ebp
  unsigned int v13; // ecx
  int v14; // eax
  void (__cdecl *v15)(int, int *, int, unsigned int *, int); // eax
  _DWORD *v16; // edi
  unsigned int j; // ebp
  void (__thiscall *v18)(_DWORD *, _DWORD); // edx
  unsigned int v19; // ecx
  int v20; // eax
  int (__cdecl *v21)(int, int *, int, unsigned int *, int); // eax
  int result; // eax
  unsigned int k; // edi
  void (__cdecl *v24)(int, int *, int, int *, int); // eax
  int v25; // eax
  int v26; // [esp-28h] [ebp-40h]
  int v27; // [esp-14h] [ebp-2Ch]
  int v28; // [esp-14h] [ebp-2Ch]
  int v29; // [esp-14h] [ebp-2Ch]
  int v30; // [esp-14h] [ebp-2Ch]
  int v31; // [esp-14h] [ebp-2Ch]
  int v32; // [esp+10h] [ebp-8h] BYREF
  int v33; // [esp+14h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2; /*0x6e9946*/
  NiTimeController_SaveBinary(this, a2); /*0x6e994e*/
  v27 = v2[0x88]; /*0x6e996a*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, unsigned int *, int))(v27 + 8); /*0x6e996b*/
  a2 = 4; /*0x6e996e*/
  v4(v27, this + 0xF, 4, &a2, 1); /*0x6e9972*/
  v26 = v2[0x88]; /*0x6e9986*/
  v5 = *(void (__cdecl **)(int, _DWORD *, int, unsigned int *, int))(v26 + 8); /*0x6e9987*/
  a2 = 4; /*0x6e998a*/
  v5(v26, this + 0x10, 4, &a2, 1); /*0x6e998e*/
  v6 = v2[0x88]; /*0x6e9994*/
  v32 = *((unsigned __int16 *)this + 0x27); /*0x6e99a1*/
  v7 = *(void (__cdecl **)(int, int *, int, unsigned int *, int))(v6 + 8); /*0x6e99a5*/
  a2 = 4; /*0x6e99af*/
  v7(v6, &v32, 4, &a2, 1); /*0x6e99b3*/
  v8 = *((_WORD *)this + 0x27) == 0; /*0x6e99b8*/
  a2 = 0; /*0x6e99bd*/
  if ( !v8 ) /*0x6e99c5*/
  {
    do /*0x6e9a3d*/
    {
      v9 = *(_DWORD **)(*(this + 0x12) + 4 * a2); /*0x6e99d7*/
      v10 = v2[0x88]; /*0x6e99dc*/
      if ( v9 ) /*0x6e99e4*/
      {
        v33 = v9[2]; /*0x6e99f2*/
        v28 = v10; /*0x6e99fc*/
        v11 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 8); /*0x6e99fd*/
        v32 = 4; /*0x6e9a00*/
        v11(v28, &v33, 4, &v32, 1); /*0x6e9a04*/
        for ( i = 0; i < v9[2]; ++i ) /*0x6e9a0b*/
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*v9 + 4 * i)); /*0x6e9a1d*/
      }
      else
      {
        v32 = 0; /*0x6e9b65*/
        v31 = v10; /*0x6e9b6d*/
        v24 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 8); /*0x6e9b6e*/
        v33 = 4; /*0x6e9b71*/
        v24(v31, &v32, 4, &v33, 1); /*0x6e9b75*/
      }
      v13 = *((unsigned __int16 *)this + 0x27); /*0x6e9a30*/
      ++a2; /*0x6e9a39*/
    }
    while ( a2 < v13 ); /*0x6e9a3d*/
  }
  v14 = v2[0x88]; /*0x6e9a43*/
  v33 = *((unsigned __int16 *)this + 0x2F); /*0x6e9a50*/
  v29 = v14; /*0x6e9a5a*/
  v15 = *(void (__cdecl **)(int, int *, int, unsigned int *, int))(v14 + 8); /*0x6e9a5b*/
  a2 = 4; /*0x6e9a5e*/
  v15(v29, &v33, 4, &a2, 1); /*0x6e9a62*/
  v8 = *((_WORD *)this + 0x2F) == 0; /*0x6e9a67*/
  a2 = 0; /*0x6e9a6c*/
  if ( !v8 ) /*0x6e9a74*/
  {
    do /*0x6e9b04*/
    {
      v16 = *(_DWORD **)(*(this + 0x16) + 4 * a2); /*0x6e9a87*/
      v33 = 4; /*0x6e9a98*/
      if ( v16 ) /*0x6e9a9d*/
      {
        v32 = v16[2]; /*0x6e9aa6*/
        (*(void (__cdecl **)(_DWORD, int *, int, int *, int))(v2[0x88] + 8))(v2[0x88], &v32, 4, &v33, 1); /*0x6e9ab4*/
        for ( j = 0; j < v16[2]; ++j ) /*0x6e9abb*/
        {
          v18 = *(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C); /*0x6e9ac7*/
          v33 = *(_DWORD *)(*v16 + 4 * j); /*0x6e9aca*/
          v18(v2, *(_DWORD *)v33); /*0x6e9ad3*/
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(v33 + 4)); /*0x6e9ae4*/
        }
      }
      else
      {
        v25 = v2[0x88]; /*0x6e9b7f*/
        v32 = 0; /*0x6e9b85*/
        (*(void (__cdecl **)(int, int *, int, int *, int))(v25 + 8))(v25, &v32, 4, &v33, 1); /*0x6e9b91*/
      }
      v19 = *((unsigned __int16 *)this + 0x2F); /*0x6e9af7*/
      ++a2; /*0x6e9b00*/
    }
    while ( a2 < v19 ); /*0x6e9b04*/
  }
  v20 = v2[0x88]; /*0x6e9b0d*/
  v33 = *(this + 0x1B); /*0x6e9b1a*/
  v30 = v20; /*0x6e9b24*/
  v21 = *(int (__cdecl **)(int, int *, int, unsigned int *, int))(v20 + 8); /*0x6e9b25*/
  a2 = 4; /*0x6e9b28*/
  result = v21(v30, &v33, 4, &a2, 1); /*0x6e9b2c*/
  for ( k = 0; k < *(this + 0x1B); ++k ) /*0x6e9b33*/
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*(this + 0x19) + 4 * k)); /*0x6e9b46*/
  return result; /*0x6e9b50*/
}
