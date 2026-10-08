double __thiscall sub_8C5070(_DWORD *this)
{
  int v1; // eax

  if ( this && (v1 = *(this + 2)) != 0 ) /*0x8c507a*/
    return *(float *)(v1 + 0x20); /*0x8c5082*/
  else
    return (float)1.0; /*0x8c508c*/
}
