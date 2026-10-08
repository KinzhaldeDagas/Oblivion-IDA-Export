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

  v2 = a2; /*0x6de797*/
  nullsub_returnvVoid_1arg((int)a2); /*0x6de79e*/
  v4 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(v2[0x88] + 8); /*0x6de7a9*/
  v15 = v2[0x88]; /*0x6de7bd*/
  v19 = 4; /*0x6de7be*/
  v4(v15, this + 8, 4, &v19, 1); /*0x6de7c2*/
  v14 = v2[0x88]; /*0x6de7d6*/
  v5 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(v14 + 8); /*0x6de7d7*/
  v19 = 4; /*0x6de7da*/
  v5(v14, this + 0xC, 4, &v19, 1); /*0x6de7de*/
  v6 = v2[0x88]; /*0x6de7e3*/
  LOBYTE(a2) = *(this + 0x14); /*0x6de7f0*/
  v7 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v6 + 8); /*0x6de7f4*/
  v19 = 1; /*0x6de7ff*/
  v7(v6, &a2, 1, &v19, 1); /*0x6de807*/
  result = 0; /*0x6de809*/
  v9 = *((_DWORD *)this + 2) == 0; /*0x6de80e*/
  v19 = 0; /*0x6de810*/
  if ( !v9 ) /*0x6de814*/
  {
    v18 = 0; /*0x6de816*/
    do /*0x6de876*/
    {
      v10 = (int *)(v18 + *((_DWORD *)this + 4)); /*0x6de823*/
      v11 = *((_DWORD *)this + 3); /*0x6de827*/
      sub_713720(v2, (const char *)v10[1]); /*0x6de830*/
      if ( v11 ) /*0x6de837*/
      {
        v12 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8); /*0x6de851*/
        v17 = *v10; /*0x6de854*/
        v16 = v2[0x88]; /*0x6de855*/
        v20 = 4; /*0x6de856*/
        v12(v16, v17, 0xC * v11, &v20, 1); /*0x6de85e*/
      }
      v18 += 0xC; /*0x6de867*/
      result = v19 + 1; /*0x6de86c*/
    }
    while ( (unsigned int)++v19 < *((_DWORD *)this + 2) ); /*0x6de876*/
  }
  return result; /*0x6de878*/
}
