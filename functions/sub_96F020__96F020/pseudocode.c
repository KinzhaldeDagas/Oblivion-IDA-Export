int __thiscall sub_96F020(char *this, signed int a2)
{
  char *v3; // esi
  int v4; // ebx

  sub_709430(this, a2); /*0x96f02b*/
  v3 = this + 0xC; /*0x96f030*/
  v4 = 3; /*0x96f033*/
  do /*0x96f046*/
  {
    sub_709430(v3, a2); /*0x96f03b*/
    v3 += 0xC; /*0x96f040*/
    --v4; /*0x96f043*/
  }
  while ( v4 ); /*0x96f046*/
  return sub_6DE270(a2, (int)(this + 0x30), 3); /*0x96f057*/
}
