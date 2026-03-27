int __stdcall NiTPointerMap_SetValue(int a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  return a1;
}
