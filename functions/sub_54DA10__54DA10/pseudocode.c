unsigned int **__thiscall sub_54DA10(unsigned int *this, unsigned int **a2)
{
  unsigned int *v3; // ebx
  bool v4; // cc

  v3 = (unsigned int *)*(this + 1); /*0x54da14*/
  v4 = (unsigned int)v3 <= *(this + 2); /*0x54da17*/
  *a2 = 0; /*0x54da1f*/
  if ( !v4 ) /*0x54da25*/
    _invalid_parameter_noinfo(); /*0x54da27*/
  *a2 = this; /*0x54da2c*/
  a2[1] = v3; /*0x54da2e*/
  return a2; /*0x54da33*/
}
