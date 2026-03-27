int __cdecl sub_747C40(int a1, int a2)
{
  int v2; // eax
  int result; // eax

  v2 = dword_B403B8;
  *(_DWORD *)(4 * v2 + 0xB40378) = a1;
  *(_DWORD *)(4 * v2 + 0xB40338) = a2;
  result = v2 + 1;
  dword_B403B8 = result;
  return result;
}
