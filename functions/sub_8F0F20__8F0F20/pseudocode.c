_DWORD *__cdecl sub_8F0F20(int a1, int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *result; // eax

  v3 = *(_DWORD **)(a3 + 4);
  v3[1] = a1;
  *v3 = 0x20C0F;
  v3[2] = a2;
  result = v3 + 3;
  *(_DWORD *)(a3 + 4) = result;
  return result;
}
