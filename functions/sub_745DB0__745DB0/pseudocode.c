_WORD *__fastcall sub_745DB0(int a1, int a2)
{
  _WORD *v2; // eax
  int v3; // ecx
  _WORD *v4; // eax
  int v5; // ecx
  _WORD *result; // eax
  int v7; // ecx

  v2 = (_WORD *)(a2 + 0x8C); /*0x745db1*/
  v3 = 0x11E; /*0x745db7*/
  do /*0x745dc9*/
  {
    *v2 = 0; /*0x745dc0*/
    v2 += 2; /*0x745dc3*/
    --v3; /*0x745dc6*/
  }
  while ( v3 ); /*0x745dc9*/
  v4 = (_WORD *)(a2 + 0x980); /*0x745dcb*/
  v5 = 0x1E; /*0x745dd1*/
  do /*0x745ddf*/
  {
    *v4 = 0; /*0x745dd6*/
    v4 += 2; /*0x745dd9*/
    --v5; /*0x745ddc*/
  }
  while ( v5 ); /*0x745ddf*/
  result = (_WORD *)(a2 + 0xA74); /*0x745de1*/
  v7 = 0x13; /*0x745de7*/
  do /*0x745df9*/
  {
    *result = 0; /*0x745df0*/
    result += 2; /*0x745df3*/
    --v7; /*0x745df6*/
  }
  while ( v7 ); /*0x745df9*/
  *(_DWORD *)(a2 + 0x16A4) = 0; /*0x745dfb*/
  *(_DWORD *)(a2 + 0x16A0) = 0; /*0x745e01*/
  *(_DWORD *)(a2 + 0x16A8) = 0; /*0x745e07*/
  *(_DWORD *)(a2 + 0x1698) = 0; /*0x745e0d*/
  *(_WORD *)(a2 + 0x48C) = 1; /*0x745e13*/
  return result; /*0x745e1c*/
}
