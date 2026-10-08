int __cdecl sub_88AAF0(int a1, int a2)
{
  _DWORD *v2; // ecx
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int result; // eax
  int v9; // eax
  int v10; // edx
  int v11; // edx

  v2 = *(_DWORD **)(a1 + 0x10); /*0x88aaf4*/
  v3 = *(_DWORD *)(a2 + 0x10); /*0x88aafe*/
  v4 = *(_DWORD *)(a2 + 0xC); /*0x88ab02*/
  if ( v2 && (v5 = v2[2]) != 0 && (v6 = v5 + 0x14) != 0 ) /*0x88ab11*/
    v7 = *(_DWORD *)(v6 + 0x1C); /*0x88ab13*/
  else
    v7 = 0; /*0x88ab18*/
  result = v7 & 0x3F; /*0x88ab1c*/
  if ( v3 != result && (!v4 || v4 == result) ) /*0x88ab29*/
  {
    v9 = v7 ^ ((unsigned __int8)v3 ^ (unsigned __int8)v7) & 0x3F; /*0x88ab32*/
    if ( v2 ) /*0x88ab36*/
    {
      v10 = v2[2]; /*0x88ab38*/
      if ( v10 ) /*0x88ab3d*/
      {
        v11 = v10 + 0x14; /*0x88ab3f*/
        if ( v11 ) /*0x88ab42*/
          *(_DWORD *)(v11 + 0x1C) = v9; /*0x88ab44*/
      }
    }
    return (*(int (__thiscall **)(_DWORD *))(*v2 + 0x80))(v2); /*0x88ab51*/
  }
  return result; /*0x88ab50*/
}
