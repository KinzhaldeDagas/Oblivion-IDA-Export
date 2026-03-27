unsigned int __thiscall sub_6FDB00(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, _DWORD *, int, unsigned int *, int); // eax
  void (__cdecl *v5)(int, _DWORD *, int, unsigned int *, int); // eax
  int v6; // eax
  int (__cdecl *v7)(int, int *, int, unsigned int *, int); // edx
  unsigned int result; // eax
  bool v9; // zf
  _DWORD *v10; // edi
  int v11; // eax
  void (__cdecl *v12)(int, int *, int, int *, int); // eax
  unsigned int i; // ebx
  unsigned int v14; // ecx
  void (__cdecl *v15)(int, int *, int, int *, int); // eax
  int v16; // [esp-28h] [ebp-3Ch]
  int v17; // [esp-18h] [ebp-2Ch]
  int v18; // [esp-18h] [ebp-2Ch]
  int v19; // [esp-14h] [ebp-28h]
  int v20; // [esp+Ch] [ebp-8h] BYREF
  int v21; // [esp+10h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_716050(this, a2);
  v19 = v2[0x88];
  v4 = *(void (__cdecl **)(int, _DWORD *, int, unsigned int *, int))(v19 + 8);
  a2 = 4;
  v4(v19, this + 0xF, 4, &a2, 1);
  v16 = v2[0x88];
  v5 = *(void (__cdecl **)(int, _DWORD *, int, unsigned int *, int))(v16 + 8);
  a2 = 4;
  v5(v16, this + 0x10, 4, &a2, 1);
  v6 = v2[0x88];
  v20 = *((unsigned __int16 *)this + 0x27);
  v7 = *(int (__cdecl **)(int, int *, int, unsigned int *, int))(v6 + 8);
  a2 = 4;
  result = v7(v6, &v20, 4, &a2, 1);
  v9 = *((_WORD *)this + 0x27) == 0;
  a2 = 0;
  if ( !v9 )
  {
    do
    {
      v10 = *(_DWORD **)(*(this + 0x12) + 4 * a2);
      v11 = v2[0x88];
      if ( v10 )
      {
        v21 = v10[2];
        v17 = v11;
        v12 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 8);
        v20 = 4;
        v12(v17, &v21, 4, &v20, 1);
        for ( i = 0; i < v10[2]; ++i )
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*v10 + 4 * i));
      }
      else
      {
        v20 = 0;
        v18 = v11;
        v15 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 8);
        v21 = 4;
        v15(v18, &v20, 4, &v21, 1);
      }
      v14 = *((unsigned __int16 *)this + 0x27);
      result = ++a2;
    }
    while ( a2 < v14 );
  }
  return result;
}
