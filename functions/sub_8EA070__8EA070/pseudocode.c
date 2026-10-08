int __stdcall sub_8EA070(int a1, int a2)
{
  *(_BYTE *)a2 = 1; /*0x8ea079*/
  *(_OWORD *)(a2 + 0x30) = 0; /*0x8ea07c*/
  *(_OWORD *)(a2 + 0x10) = 0; /*0x8ea080*/
  *(_OWORD *)(a2 + 0x20) = 0; /*0x8ea084*/
  *(_OWORD *)(a2 + 0x40) = 0; /*0x8ea088*/
  *(_OWORD *)(a2 + 0x50) = 0; /*0x8ea08c*/
  *(_OWORD *)(a2 + 0x60) = 0; /*0x8ea090*/
  *(_OWORD *)(a2 + 0x70) = 0; /*0x8ea097*/
  return a2 + 0x80; /*0x8ea0a2*/
}
