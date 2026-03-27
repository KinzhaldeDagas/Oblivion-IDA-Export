_DWORD *__cdecl sub_70BE00(int *a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  _DWORD *result; // eax
  unsigned int v5; // esi
  _DWORD *v6; // edi

  if ( !a1 || !a2 )
    return 0;
  v2 = a1[4];
  if ( v2 )
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0xC))(v2);
  else
    v3 = 0;
  result = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x98))(a2, v3);
  v5 = (unsigned int)result;
  if ( result )
  {
    v6 = sub_70BC70(a1[2], a1[3], a2, (int)result);
    FormHeapFree(v5);
    return v6;
  }
  return result;
}
