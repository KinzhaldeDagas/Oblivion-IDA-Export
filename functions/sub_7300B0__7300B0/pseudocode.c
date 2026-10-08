double __thiscall sub_7300B0(_DWORD *this, unsigned int a2)
{
  if ( a2 >= *(this + 3) ) /*0x7300b7*/
    return 0.0; /*0x7300c2*/
  else
    return *(float *)(*(this + 4) + 4 * a2); /*0x7300bc*/
}
