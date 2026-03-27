int __cdecl sub_8A7F20(int a1, int a2, char a3)
{
  int result; // eax
  int v4; // esi

  result = a1;
  v4 = 1 << a2;
  if ( a3 )
  {
    *(_DWORD *)(4 * a1 + 0xBA7DB0) |= v4;
    *(_DWORD *)(4 * a2 + 0xBA7DB0) |= 1 << a1;
  }
  else
  {
    *(_DWORD *)(4 * a1 + 0xBA7DB0) &= ~v4;
    *(_DWORD *)(4 * a2 + 0xBA7DB0) &= ~(1 << a1);
  }
  return result;
}
