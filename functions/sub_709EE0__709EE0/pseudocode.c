unsigned int __thiscall sub_709EE0(int *this, unsigned int *a2)
{
  unsigned int result; // eax

  sub_707F00(this, (int)a2); /*0x709ee9*/
  sub_712AE0(a2); /*0x709ef0*/
  result = sub_712AE0(a2); /*0x709ef7*/
  *((_WORD *)this + 0xC) &= ~0x40u; /*0x709efc*/
  return result; /*0x709f02*/
}
