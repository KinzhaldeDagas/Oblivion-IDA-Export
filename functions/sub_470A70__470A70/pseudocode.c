int __stdcall sub_470A70(int a1, __int16 a2, int a3)
{
  *(_WORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  return a1;
}
