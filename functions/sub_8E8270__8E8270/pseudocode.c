int __cdecl sub_8E8270(int a1, int a2)
{
  int v2; // esi
  int result; // eax
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int, int, int *, int); // eax
  int v6; // edi
  void (__cdecl *v7)(int, int, int, int *, int); // eax
  int v8; // [esp-2Ch] [ebp-34h]
  int v9; // [esp-18h] [ebp-20h]
  int v10; // [esp-14h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-4h] BYREF

  v2 = a2; /*0x8e8272*/
  result = 0; /*0x8e8276*/
  if ( a2 ) /*0x8e827a*/
  {
    a2 = *(_DWORD *)(a2 + 0x24); /*0x8e828f*/
    v9 = *(_DWORD *)(a1 + 0x220); /*0x8e82a0*/
    v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v9 + 8); /*0x8e82a1*/
    v11 = 4; /*0x8e82a4*/
    v4(v9, &a2, 4, &v11, 1); /*0x8e82ac*/
    v8 = *(_DWORD *)(a1 + 0x220); /*0x8e82c1*/
    v5 = *(void (__cdecl **)(int, int, int, int *, int))(v8 + 8); /*0x8e82c2*/
    v11 = 0x10; /*0x8e82c5*/
    v5(v8, v2 + 0x10, 0x10, &v11, 1); /*0x8e82cd*/
    result = a2; /*0x8e82cf*/
    if ( a2 ) /*0x8e82d8*/
    {
      v6 = *(_DWORD *)(a1 + 0x220); /*0x8e82dd*/
      v7 = *(void (__cdecl **)(int, int, int, int *, int))(v6 + 8); /*0x8e82eb*/
      v10 = *(_DWORD *)(v2 + 0x20); /*0x8e82ee*/
      v11 = 1; /*0x8e82f0*/
      v7(v6, v10, a2, &v11, 1); /*0x8e82f8*/
      return a2; /*0x8e82fa*/
    }
  }
  return result; /*0x8e8302*/
}
