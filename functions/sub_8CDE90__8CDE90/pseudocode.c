int __thiscall sub_8CDE90(int this, int a2, int a3)
{
  int v3; // edx
  int i; // eax
  int v5; // edx
  int result; // eax

  v3 = *(_DWORD *)(a2 + 0xC);
  for ( i = a2; v3; v3 = *(_DWORD *)(v3 + 0xC) )
    i = v3;
  *(_DWORD *)(this + 8) = i;
  *(_DWORD *)(this + 0xC) = *(_DWORD *)(a2 + 4);
  v5 = *(_DWORD *)(a3 + 0xC);
  for ( result = a3; v5; v5 = *(_DWORD *)(v5 + 0xC) )
    result = v5;
  *(_DWORD *)(this + 0x10) = result;
  *(_DWORD *)(this + 0x14) = *(_DWORD *)(a3 + 4);
  *(_BYTE *)(this + 4) = 1;
  return result;
}
