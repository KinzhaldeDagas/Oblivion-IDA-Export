int __thiscall sub_77FF00(_DWORD *this)
{
  int result; // eax
  int v2; // edx

  result = *(this + 0x3F8); /*0x77ff00*/
  v2 = *(this + 0x3FA); /*0x77ff06*/
  *(this + 0x3F9) = result; /*0x77ff0c*/
  *(this + 0x3FB) = v2; /*0x77ff12*/
  return result; /*0x77ff18*/
}
