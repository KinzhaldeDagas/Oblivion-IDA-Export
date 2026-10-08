int __thiscall sub_712260(_DWORD *this, int a2)
{
  int v3; // edx
  int result; // eax

  v3 = *this; /*0x712267*/
  *(this + 0x88) = a2; /*0x712269*/
  result = (*(int (**)(void))(v3 + 0x40))(); /*0x712272*/
  *(this + 0x88) = 0; /*0x712274*/
  return result; /*0x71227e*/
}
