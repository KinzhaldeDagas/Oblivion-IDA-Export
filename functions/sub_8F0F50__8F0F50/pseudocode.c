_DWORD *__cdecl sub_8F0F50(int a1)
{
  _DWORD *v1; // eax
  _DWORD *result; // eax

  v1 = *(_DWORD **)(a1 + 4);
  *v1 = 0x20410;
  result = v1 + 1;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
