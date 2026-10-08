unsigned int __thiscall sub_4A0040(unsigned int this, char a2)
{
  double v3; // st7

  *(float *)(this + 0xE4) = flt_A2FE7C; /*0x4a0049*/
  v3 = flt_A3F888; /*0x4a0051*/
  *(_DWORD *)this = &BSClearZNode::`vftable'; /*0x4a0057*/
  *(float *)(this + 0xE0) = v3; /*0x4a005d*/
  *(_BYTE *)(this + 0xDD) = 0; /*0x4a0063*/
  *(_BYTE *)(this + 0xDC) = 0; /*0x4a0069*/
  NiBSPNode::~NiBSPNode((NiBSPNode *)this); /*0x4a006f*/
  if ( (a2 & 1) != 0 ) /*0x4a0079*/
    FormHeapFree(this); /*0x4a007c*/
  return this; /*0x4a0086*/
}
