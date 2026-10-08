int __cdecl sub_6BBA80(signed int a1, int a2, signed int a3)
{
  signed int v3; // ebx
  int v4; // esi
  void (__cdecl *v5)(int, int, int, signed int *, int); // eax
  int (__cdecl *v6)(int, int, int, signed int *, int); // edx
  int result; // eax
  int v8; // [esp-3Ch] [ebp-40h]
  int v9; // [esp-28h] [ebp-2Ch]

  v3 = a3; /*0x6bba81*/
  if ( a3 ) /*0x6bba87*/
  {
    v4 = a2 + 0xC; /*0x6bba94*/
    do /*0x6bbae8*/
    {
      sub_6BB620(a1, v4 - 0xC); /*0x6bbaa5*/
      v9 = *(_DWORD *)(a1 + 0x220); /*0x6bbabc*/
      v5 = *(void (__cdecl **)(int, int, int, signed int *, int))(v9 + 8); /*0x6bbabd*/
      a3 = 4; /*0x6bbac0*/
      v5(v9, v4 - 4, 4, &a3, 1); /*0x6bbac4*/
      v6 = *(int (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(a1 + 0x220) + 8); /*0x6bbacc*/
      v8 = *(_DWORD *)(a1 + 0x220); /*0x6bbad8*/
      a3 = 4; /*0x6bbad9*/
      result = v6(v8, v4, 4, &a3, 1); /*0x6bbadd*/
      v4 += 0x10; /*0x6bbae2*/
      --v3; /*0x6bbae5*/
    }
    while ( v3 ); /*0x6bbae8*/
  }
  return result; /*0x6bbaed*/
}
