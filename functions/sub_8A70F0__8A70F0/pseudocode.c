_DWORD *__cdecl sub_8A70F0(int a1)
{
  _DWORD *result; // eax
  int v2; // edx
  int v3; // ecx

  if ( a1 )
    ++*(_DWORD *)(a1 + 0xC);
  result = (_DWORD *)dword_BA7D98;
  if ( dword_BA7D98 )
  {
    v2 = result[3];
    v3 = dword_BA7D98;
    result += 3;
    *result = --v2;
    if ( !v2 )
      result = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x34))(v3, 1);
  }
  dword_BA7D98 = a1;
  return result;
}
