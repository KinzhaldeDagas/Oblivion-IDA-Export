int __thiscall sub_8CDE90(int this, int a2, int a3)
{
  int v3; // edx
  int i; // eax
  int v5; // edx
  int result; // eax

  v3 = *(_DWORD *)(a2 + 0xC); /*0x8cde95*/
  for ( i = a2; v3; v3 = *(_DWORD *)(v3 + 0xC) ) /*0x8cde9c*/
    i = v3; /*0x8cdea0*/
  *(_DWORD *)(this + 8) = i; /*0x8cdea9*/
  *(_DWORD *)(this + 0xC) = *(_DWORD *)(a2 + 4); /*0x8cdeb3*/
  v5 = *(_DWORD *)(a3 + 0xC); /*0x8cdeb6*/
  for ( result = a3; v5; v5 = *(_DWORD *)(v5 + 0xC) ) /*0x8cdebd*/
    result = v5; /*0x8cdec0*/
  *(_DWORD *)(this + 0x10) = result; /*0x8cdec9*/
  *(_DWORD *)(this + 0x14) = *(_DWORD *)(a3 + 4); /*0x8cdecf*/
  *(_BYTE *)(this + 4) = 1; /*0x8cded2*/
  return result; /*0x8cded6*/
}
