_DWORD *__thiscall sub_77D270(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi

  result = (_DWORD *)*(this + 0xB); /*0x77d270*/
  if ( result ) /*0x77d275*/
  {
    v3 = 0; /*0x77d280*/
    while ( result[9] <= a2[9] ) /*0x77d285*/
    {
      v3 = result; /*0x77d287*/
      result = (_DWORD *)result[0xF]; /*0x77d289*/
      if ( !result ) /*0x77d28e*/
      {
        v3[0xF] = a2; /*0x77d290*/
        a2[0x10] = v3; /*0x77d293*/
        a2[0xF] = 0; /*0x77d296*/
        return result; /*0x77d296*/
      }
    }
    if ( v3 ) /*0x77d2a0*/
      v3[0xF] = a2; /*0x77d2a2*/
    result[0x10] = a2; /*0x77d2a5*/
    a2[0xF] = result; /*0x77d2a8*/
    a2[0x10] = v3; /*0x77d2ab*/
    if ( result == (_DWORD *)*(this + 0xB) ) /*0x77d2b1*/
      *(this + 0xB) = a2; /*0x77d2b4*/
  }
  else
  {
    *(this + 0xB) = a2; /*0x77d2bf*/
    a2[0xF] = 0; /*0x77d2c2*/
    result = (_DWORD *)*(this + 0xB); /*0x77d2c9*/
    result[0x10] = 0; /*0x77d2cc*/
  }
  return result; /*0x77d29b*/
}
