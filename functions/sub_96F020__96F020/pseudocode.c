int __thiscall sub_96F020(char *this, signed int a2)
{
  char *v3; // esi
  int v4; // ebx

  sub_709430(this, a2);
  v3 = this + 0xC;
  v4 = 3;
  do
  {
    sub_709430(v3, a2);
    v3 += 0xC;
    --v4;
  }
  while ( v4 );
  return sub_6DE270(a2, (int)(this + 0x30), 3);
}
