int __thiscall sub_6FFCE0(int *this, unsigned int *a2)
{
  sub_7008A0((NiRenderer *)this, (signed int)a2);
  sub_713620(a2, this + 2);
  if ( a2[0x36] >= 0x500000B )
    sub_712AE0(a2);
  else
    sub_712A20(a2);
  return sub_712A20(a2);
}
