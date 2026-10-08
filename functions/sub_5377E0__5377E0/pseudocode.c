double __thiscall sub_5377E0(_DWORD *this, int a2, int a3)
{
  unsigned int v3; // eax

  v3 = a2 + a3 * *(this + 8); /*0x5377eb*/
  if ( v3 >= *(this + 8) * *(this + 8) ) /*0x5377f7*/
    return flt_A3B888; /*0x537810*/
  else
    return *(float *)(*(this + 6) + 4 * v3); /*0x5377ff*/
}
