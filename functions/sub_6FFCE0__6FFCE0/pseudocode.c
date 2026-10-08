int __thiscall sub_6FFCE0(NiRenderer *this, unsigned int *a2)
{
  sub_7008A0(this, (signed int)a2); /*0x6ffce9*/
  sub_713620(a2, (int)&this->members.accumulator); /*0x6ffcf4*/
  if ( a2[0x36] >= 0x500000B ) /*0x6ffd05*/
    sub_712AE0(a2); /*0x6ffd18*/
  else
    sub_712A20(a2); /*0x6ffd07*/
  return sub_712A20(a2); /*0x6ffd13*/
}
