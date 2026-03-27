unsigned int __thiscall sub_56BD40(unsigned int this, char a2)
{
  *(float *)(this + 8) = 0.0;
  *(float *)(this + 0x10) = 0.0;
  *(_DWORD *)this = &BSTempEffect::`vftable';
  *(_DWORD *)(this + 0xC) = 0;
  *(_BYTE *)(this + 0x14) = 0;
  NiRefObject_destr((_DWORD *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree(this);
  return this;
}
