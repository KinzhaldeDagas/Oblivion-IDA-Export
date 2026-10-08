int __thiscall sub_8EA1A0(_OWORD *this, int a2, int a3)
{
  *(_BYTE *)a3 = 1; /*0x8ea1a6*/
  *(_OWORD *)(a3 + 0x30) = 0; /*0x8ea1ac*/
  *(_OWORD *)(a3 + 0x40) = *(this + 6); /*0x8ea1b4*/
  *(_OWORD *)(a3 + 0x20) = *(this + 0xE); /*0x8ea1bf*/
  *(_OWORD *)(a3 + 0x10) = *(this + 0xD); /*0x8ea1ca*/
  *(_OWORD *)(a3 + 0x50) = 0; /*0x8ea1ce*/
  *(_OWORD *)(a3 + 0x60) = 0; /*0x8ea1d2*/
  *(_OWORD *)(a3 + 0x70) = 0; /*0x8ea1d6*/
  *(_DWORD *)(a3 + 0x50) = 0x3F800000; /*0x8ea1df*/
  *(_DWORD *)(a3 + 0x64) = 0x3F800000; /*0x8ea1e2*/
  *(_DWORD *)(a3 + 0x78) = 0x3F800000; /*0x8ea1e5*/
  *(_BYTE *)(a3 + 0xC) = 1; /*0x8ea1eb*/
  return a3 + 0x80; /*0x8ea1f6*/
}
