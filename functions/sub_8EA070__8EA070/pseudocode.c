int __stdcall sub_8EA070(int a1, int a2)
{
  *(_BYTE *)a2 = 1;
  *(_OWORD *)(a2 + 0x30) = 0;
  *(_OWORD *)(a2 + 0x10) = 0;
  *(_OWORD *)(a2 + 0x20) = 0;
  *(_OWORD *)(a2 + 0x40) = 0;
  *(_OWORD *)(a2 + 0x50) = 0;
  *(_OWORD *)(a2 + 0x60) = 0;
  *(_OWORD *)(a2 + 0x70) = 0;
  return a2 + 0x80;
}
