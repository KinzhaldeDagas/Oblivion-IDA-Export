int __thiscall sub_634400(_DWORD *this, int a2)
{
  int v3; // edx
  int (*v4)(void); // eax
  int result; // eax
  int (__thiscall *v6)(_DWORD *); // eax

  v3 = *this; /*0x634407*/
  *(this + 0xB3) = a2; /*0x634409*/
  v4 = *(int (**)(void))(v3 + 0x4CC); /*0x63440f*/
  *((_BYTE *)this + 0x2DD) = 1; /*0x634415*/
  result = v4(); /*0x63441c*/
  if ( *(this + 0xB9) != result ) /*0x634424*/
  {
    v6 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC); /*0x634428*/
    *((_BYTE *)this + 0x2E8) = 0; /*0x634430*/
    result = v6(this); /*0x634437*/
    *(this + 0xB9) = result; /*0x634439*/
  }
  return result; /*0x63443f*/
}
