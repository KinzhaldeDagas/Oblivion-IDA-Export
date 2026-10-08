double __thiscall sub_8C6210(_DWORD *this)
{
  int v1; // eax

  if ( this && (v1 = *(this + 2)) != 0 ) /*0x8c621a*/
    return *(float *)(v1 + 0x10); /*0x8c6222*/
  else
    return (float)1.0; /*0x8c622c*/
}
