void __thiscall sub_6DBBC0(int this)
{
  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 )
  {
    *(float *)(this + 0x24) = sub_6DBB10(this);
    *(_WORD *)(this + 0xC) &= ~1u;
  }
}
