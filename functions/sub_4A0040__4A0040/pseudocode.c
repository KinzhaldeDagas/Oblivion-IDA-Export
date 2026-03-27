unsigned int __thiscall sub_4A0040(unsigned int this, char a2)
{
  double v3; // st7

  *(float *)(this + 0xE4) = flt_A2FE7C;
  v3 = flt_A3F888;
  *(_DWORD *)this = &BSClearZNode::`vftable';
  *(float *)(this + 0xE0) = v3;
  *(_BYTE *)(this + 0xDD) = 0;
  *(_BYTE *)(this + 0xDC) = 0;
  NiBSPNode::~NiBSPNode((NiBSPNode *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree(this);
  return this;
}
