int __cdecl sub_8A2730(int a1, _DWORD *a2)
{
  int result; // eax

  *a2 = *(_DWORD *)(0xC * a1 + 0xB2E988);
  a2[1] = *(_DWORD *)(0xC * a1 + 0xB2E98C);
  result = *(_DWORD *)(0xC * a1 + 0xB2E990);
  a2[2] = result;
  return result;
}
