void __thiscall sub_6DBBC0(int this)
{
  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6dbbc7*/
  {
    *(float *)(this + 0x24) = sub_6DBB10(this); /*0x6dbbce*/
    *(_WORD *)(this + 0xC) &= ~1u; /*0x6dbbd1*/
  }
}
