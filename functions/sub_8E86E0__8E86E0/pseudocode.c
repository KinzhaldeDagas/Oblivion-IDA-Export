_DWORD *__thiscall sub_8E86E0(_WORD *this, int a2, int a3)
{
  sub_8E89D0(this, a2, a3); /*0x8e86ef*/
  *(_DWORD *)this = &off_A9ABC4; /*0x8e86f4*/
  *((_DWORD *)this + 7) = 0x3F800000; /*0x8e86fa*/
  return this; /*0x8e8703*/
}
