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

  v2 = (_DWORD *)a2; /*0x6fdb06*/
  NiTimeController_SaveBinary(this, a2); /*0x6fdb0d*/
  v19 = v2[0x88]; /*0x6fdb29*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, unsigned int *, int))(v19 + 8); /*0x6fdb2a*/
  a2 = 4; /*0x6fdb2d*/
  v4(v19, this + 0xF, 4, &a2, 1); /*0x6fdb31*/
  v16 = v2[0x88]; /*0x6fdb45*/
  v5 = *(void (__cdecl **)(int, _DWORD *, int, unsigned int *, int))(v16 + 8); /*0x6fdb46*/
  a2 = 4; /*0x6fdb49*/
  v5(v16, this + 0x10, 4, &a2, 1); /*0x6fdb4d*/
  v6 = v2[0x88]; /*0x6fdb53*/
  v20 = *((unsigned __int16 *)this + 0x27); /*0x6fdb60*/
  v7 = *(int (__cdecl **)(int, int *, int, unsigned int *, int))(v6 + 8); /*0x6fdb64*/
  a2 = 4; /*0x6fdb6e*/
  result = v7(v6, &v20, 4, &a2, 1); /*0x6fdb72*/
  v9 = *((_WORD *)this + 0x27) == 0; /*0x6fdb77*/
  a2 = 0; /*0x6fdb7c*/
  if ( !v9 ) /*0x6fdb84*/
  {
    do /*0x6fdbfd*/
    {
      v10 = *(_DWORD **)(*(this + 0x12) + 4 * a2); /*0x6fdb97*/
      v11 = v2[0x88]; /*0x6fdb9c*/
      if ( v10 ) /*0x6fdba4*/
      {
        v21 = v10[2]; /*0x6fdbae*/
        v17 = v11; /*0x6fdbb8*/
        v12 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 8); /*0x6fdbb9*/
        v20 = 4; /*0x6fdbbc*/
        v12(v17, &v21, 4, &v20, 1); /*0x6fdbc0*/
        for ( i = 0; i < v10[2]; ++i ) /*0x6fdbc7*/
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*v10 + 4 * i)); /*0x6fdbdd*/
      }
      else
      {
        v20 = 0; /*0x6fdc14*/
        v18 = v11; /*0x6fdc1c*/
        v15 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 8); /*0x6fdc1d*/
        v21 = 4; /*0x6fdc20*/
        v15(v18, &v20, 4, &v21, 1); /*0x6fdc24*/
      }
      v14 = *((unsigned __int16 *)this + 0x27); /*0x6fdbf0*/
      result = ++a2; /*0x6fdbf4*/
    }
    while ( a2 < v14 ); /*0x6fdbfd*/
  }
  return result; /*0x6fdc00*/
}
