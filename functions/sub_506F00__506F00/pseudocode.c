int __stdcall PointerArray_ShellSort(_DWORD *a1, int (__cdecl *a2)(int, _DWORD), int a3)
{
  int v3; // ecx
  int v4; // edi
  int result; // eax
  int v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  int v9; // esi
  _DWORD *v10; // [esp+4h] [ebp-8h]
  int v11; // [esp+8h] [ebp-4h]
  int v12; // [esp+18h] [ebp+Ch]

  v3 = a3 - 1; /*0x506f07*/
  v4 = 1; /*0x506f19*/
  result = (a3 - 1) / 9; /*0x506f1e*/
  v11 = a3 - 1; /*0x506f22*/
  if ( result < 1 ) /*0x506f26*/
    goto LABEL_14; /*0x506f26*/
  do /*0x506f2e*/
    v4 = 3 * v4 + 1; /*0x506f28*/
  while ( v4 <= result ); /*0x506f2e*/
  if ( v4 > 0 ) /*0x506f32*/
  {
LABEL_14:
    do /*0x506fbe*/
    {
      v6 = v4; /*0x506f42*/
      if ( v4 <= v3 ) /*0x506f44*/
      {
        v7 = a1; /*0x506f46*/
        v8 = a1; /*0x506f4a*/
        v10 = a1; /*0x506f4c*/
        do /*0x506faa*/
        {
          v9 = v6; /*0x506f55*/
          v12 = v7[v6]; /*0x506f57*/
          if ( v6 >= v4 ) /*0x506f5b*/
          {
            do /*0x506f89*/
            {
              if ( a2(v12, *v8) >= 0 ) /*0x506f71*/
                break; /*0x506f71*/
              a1[v9] = *v8; /*0x506f79*/
              v9 -= v4; /*0x506f83*/
              v8 -= v4; /*0x506f85*/
            }
            while ( v9 >= v4 ); /*0x506f89*/
            v7 = a1; /*0x506f8b*/
            v3 = v11; /*0x506f8f*/
          }
          ++v6; /*0x506f9b*/
          v8 = v10 + 1; /*0x506f9e*/
          v7[v9] = v12; /*0x506fa3*/
          ++v10; /*0x506fa6*/
        }
        while ( v6 <= v3 ); /*0x506faa*/
      }
      result = v4 / 3; /*0x506fb8*/
      v4 /= 3; /*0x506fba*/
    }
    while ( v4 > 0 ); /*0x506fbe*/
  }
  return result; /*0x506fc3*/
}
