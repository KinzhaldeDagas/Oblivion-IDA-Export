int __thiscall sub_96F060(char *this, signed int a2)
{
  char *v3; // esi
  int v4; // ebx

  sub_7094A0(this, a2); /*0x96f06b*/
  v3 = this + 0xC; /*0x96f070*/
  v4 = 3; /*0x96f073*/
  do /*0x96f086*/
  {
    sub_7094A0(v3, a2); /*0x96f07b*/
    v3 += 0xC; /*0x96f080*/
    --v4; /*0x96f083*/
  }
  while ( v4 ); /*0x96f086*/
  return sub_6DE2B0(a2, (int)(this + 0x30), 3); /*0x96f097*/
}
