double __thiscall sub_54E770(_DWORD *this)
{
  unsigned int i; // edi
  float *v3; // ecx
  float v5; // [esp+8h] [ebp-4h]

  v5 = 0.0; /*0x54e775*/
  for ( i = 0; i < *(this + 4); ++i ) /*0x54e77d*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, unsigned int))(*this + 0x54))(this, i) ) /*0x54e78a*/
    {
      v3 = (float *)(*(this + 3) + 4 * i); /*0x54e796*/
      if ( v5 < (double)*v3 ) /*0x54e7a4*/
        v5 = *v3; /*0x54e7a8*/
    }
  }
  return v5; /*0x54e7b8*/
}
