_DWORD *__cdecl sub_77D900(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // eax
  _DWORD *result; // eax
  _DWORD *v7; // esi
  int v8; // eax

  v5 = (_DWORD *)FormHeapAlloc(0x34u); /*0x77d902*/
  if ( !v5 ) /*0x77d90c*/
    return 0; /*0x77d938*/
  result = sub_77D890(v5); /*0x77d911*/
  v7 = result; /*0x77d916*/
  if ( result ) /*0x77d91a*/
  {
    result[3] = a1; /*0x77d920*/
    if ( a2 ) /*0x77d929*/
    {
      result[4] = a2; /*0x77d92b*/
      (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x77d934*/
    }
    else
    {
      v8 = result[4]; /*0x77d93b*/
      if ( v8 ) /*0x77d940*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(v7[4]); /*0x77d948*/
      v7[4] = 0; /*0x77d94a*/
    }
    v7[1] = a3; /*0x77d95e*/
    v7[2] = a4; /*0x77d961*/
    *v7 = a5; /*0x77d964*/
    sub_77D1F0(v7); /*0x77d966*/
    return v7; /*0x77d96e*/
  }
  return result; /*0x77d93a*/
}
