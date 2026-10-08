unsigned int __thiscall sub_56BD40(unsigned int this, char a2)
{
  *(float *)(this + 8) = 0.0; /*0x56bd45*/
  *(float *)(this + 0x10) = 0.0; /*0x56bd4a*/
  *(_DWORD *)this = &BSTempEffect::`vftable'; /*0x56bd4d*/
  *(_DWORD *)(this + 0xC) = 0; /*0x56bd53*/
  *(_BYTE *)(this + 0x14) = 0; /*0x56bd56*/
  NiRefObject_destr((_DWORD *)this); /*0x56bd59*/
  if ( (a2 & 1) != 0 ) /*0x56bd63*/
    FormHeapFree(this); /*0x56bd66*/
  return this; /*0x56bd70*/
}
