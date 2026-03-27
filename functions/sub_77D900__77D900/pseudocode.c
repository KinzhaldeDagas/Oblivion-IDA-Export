_DWORD *__cdecl sub_77D900(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // eax
  _DWORD *result; // eax
  _DWORD *v7; // esi
  int v8; // eax

  v5 = (_DWORD *)FormHeapAlloc(0x34u);
  if ( !v5 )
    return 0;
  result = sub_77D890(v5);
  v7 = result;
  if ( result )
  {
    result[3] = a1;
    if ( a2 )
    {
      result[4] = a2;
      (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2);
    }
    else
    {
      v8 = result[4];
      if ( v8 )
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(v7[4]);
      v7[4] = 0;
    }
    v7[1] = a3;
    v7[2] = a4;
    *v7 = a5;
    sub_77D1F0(v7);
    return v7;
  }
  return result;
}
