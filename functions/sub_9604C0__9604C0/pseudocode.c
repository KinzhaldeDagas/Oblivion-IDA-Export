int __thiscall sub_9604C0(int this, float a2, float a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  *(float *)(this + 0x1C) = a3; /*0x9604d3*/
  *(_DWORD *)(this + 4) = a4; /*0x9604da*/
  *(float *)(this + 0x38) = a2; /*0x9604e1*/
  *(_DWORD *)(this + 8) = a5; /*0x9604e4*/
  *(_DWORD *)(this + 0x10) = a7; /*0x9604eb*/
  *(_DWORD *)(this + 0xC) = a6; /*0x9604ee*/
  *(_DWORD *)(this + 0x14) = a8; /*0x9604f5*/
  *(_DWORD *)this = &NiCapsuleBV::`vftable'; /*0x9604fa*/
  *(_DWORD *)(this + 0x18) = a9; /*0x960500*/
  sub_9600B0((float *)this); /*0x960503*/
  return this; /*0x96050b*/
}
