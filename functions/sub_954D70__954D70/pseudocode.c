bool *__stdcall sub_954D70(bool *a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // eax
  bool v6; // cc
  bool *result; // eax

  v4 = *(_DWORD *)(a4 + 8) - 8;
  if ( v4 <= 0 )
    v4 = 0;
  v5 = *(_DWORD *)(a3 + 0x24) - v4;
  if ( v5 > *(_DWORD *)(a3 + 0x24) )
    v5 = *(_DWORD *)(a3 + 0x24);
  v6 = v5 <= 2;
  result = a1;
  *a1 = !v6;
  return result;
}
