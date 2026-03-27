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

  v2 = (_DWORD *)a2;
  sub_716050(this, a2);
  v27 = v2[0x88];
  v4 = *(void (__cdecl **)(int, _DWORD *, int, unsigned int *, int))(v27 + 8);
  a2 = 4;
  v4(v27, this + 0xF, 4, &a2, 1);
  v26 = v2[0x88];
  v5 = *(void (__cdecl **)(int, _DWORD *, int, unsigned int *, int))(v26 + 8);
  a2 = 4;
  v5(v26, this + 0x10, 4, &a2, 1);
  v6 = v2[0x88];
  v32 = *((unsigned __int16 *)this + 0x27);
  v7 = *(void (__cdecl **)(int, int *, int, unsigned int *, int))(v6 + 8);
  a2 = 4;
  v7(v6, &v32, 4, &a2, 1);
  v8 = *((_WORD *)this + 0x27) == 0;
  a2 = 0;
  if ( !v8 )
  {
    do
    {
      v9 = *(_DWORD **)(*(this + 0x12) + 4 * a2);
      v10 = v2[0x88];
      if ( v9 )
      {
        v33 = v9[2];
        v28 = v10;
        v11 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 8);
        v32 = 4;
        v11(v28, &v33, 4, &v32, 1);
        for ( i = 0; i < v9[2]; ++i )
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*v9 + 4 * i));
      }
      else
      {
        v32 = 0;
        v31 = v10;
        v24 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 8);
        v33 = 4;
        v24(v31, &v32, 4, &v33, 1);
      }
      v13 = *((unsigned __int16 *)this + 0x27);
      ++a2;
    }
    while ( a2 < v13 );
  }
  v14 = v2[0x88];
  v33 = *((unsigned __int16 *)this + 0x2F);
  v29 = v14;
  v15 = *(void (__cdecl **)(int, int *, int, unsigned int *, int))(v14 + 8);
  a2 = 4;
  v15(v29, &v33, 4, &a2, 1);
  v8 = *((_WORD *)this + 0x2F) == 0;
  a2 = 0;
  if ( !v8 )
  {
    do
    {
      v16 = *(_DWORD **)(*(this + 0x16) + 4 * a2);
      v33 = 4;
      if ( v16 )
      {
        v32 = v16[2];
        (*(void (__cdecl **)(_DWORD, int *, int, int *, int))(v2[0x88] + 8))(v2[0x88], &v32, 4, &v33, 1);
        for ( j = 0; j < v16[2]; ++j )
        {
          v18 = *(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C);
          v33 = *(_DWORD *)(*v16 + 4 * j);
          v18(v2, *(_DWORD *)v33);
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(v33 + 4));
        }
      }
      else
      {
        v25 = v2[0x88];
        v32 = 0;
        (*(void (__cdecl **)(int, int *, int, int *, int))(v25 + 8))(v25, &v32, 4, &v33, 1);
      }
      v19 = *((unsigned __int16 *)this + 0x2F);
      ++a2;
    }
    while ( a2 < v19 );
  }
  v20 = v2[0x88];
  v33 = *(this + 0x1B);
  v30 = v20;
  v21 = *(int (__cdecl **)(int, int *, int, unsigned int *, int))(v20 + 8);
  a2 = 4;
  result = v21(v30, &v33, 4, &a2, 1);
  for ( k = 0; k < *(this + 0x1B); ++k )
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*(this + 0x19) + 4 * k));
  return result;
}
