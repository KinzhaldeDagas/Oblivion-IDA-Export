char __thiscall sub_54E7C0(_DWORD *this)
{
  int v2; // edi

  v2 = 0; /*0x54e7c4*/
  if ( !*(this + 4) ) /*0x54e7c6*/
    return 1; /*0x54e7f5*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 0x54))(this, v2) /*0x54e7eb*/
       || *(float *)(*(this + 3) + 4 * v2) <= 0.0 )
  {
    if ( (unsigned int)++v2 >= *(this + 4) ) /*0x54e7f3*/
      return 1; /*0x54e7f3*/
  }
  return 0; /*0x54e7f5*/
}
