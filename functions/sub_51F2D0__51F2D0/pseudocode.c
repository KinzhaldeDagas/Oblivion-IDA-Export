void __thiscall sub_51F2D0(int this)
{
  TESTexture_destr((_DWORD *)(this + 0x10)); /*0x51f304*/
  FormHeapFree(*(_DWORD *)(this + 8)); /*0x51f30d*/
  *(_DWORD *)(this + 8) = 0; /*0x51f314*/
  *(_WORD *)(this + 0xE) = 0; /*0x51f317*/
  *(_WORD *)(this + 0xC) = 0; /*0x51f31b*/
  FormHeapFree(*(_DWORD *)this); /*0x51f322*/
  *(_DWORD *)this = 0; /*0x51f32a*/
  *(_WORD *)(this + 6) = 0; /*0x51f32c*/
  *(_WORD *)(this + 4) = 0; /*0x51f330*/
}
