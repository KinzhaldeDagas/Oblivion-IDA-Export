int __stdcall NiTPointerMap_SetValue(int a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 4) = a2; /*0x67f13c*/
  *(_DWORD *)(a1 + 8) = a3; /*0x67f13f*/
  return a1; /*0x67f142*/
}
