unsigned int __thiscall sub_6F0400(int *this, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  int v7; // edi
  unsigned int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  bool v12; // cc

  v5 = *(this + 1); /*0x6f0405*/
  if ( v5 ) /*0x6f040b*/
    result = (int)(*(this + 2) - v5) / 6; /*0x6f0422*/
  else
    result = 0; /*0x6f040d*/
  if ( result >= a2 ) /*0x6f042a*/
  {
    if ( v5 ) /*0x6f046d*/
    {
      v9 = *(this + 2); /*0x6f046f*/
      result = (int)(v9 - v5) / 6; /*0x6f0482*/
      if ( a2 < result ) /*0x6f0486*/
      {
        if ( v5 > v9 ) /*0x6f048a*/
          _invalid_parameter_noinfo(); /*0x6f048c*/
        v10 = *(this + 1); /*0x6f0491*/
        if ( v10 > *(this + 2) ) /*0x6f0497*/
          _invalid_parameter_noinfo(); /*0x6f0499*/
        v11 = v10 + 6 * a2; /*0x6f04a1*/
        v12 = v11 <= *(this + 2); /*0x6f04a5*/
        a4 = v10; /*0x6f04a8*/
        if ( !v12 || v11 < *(this + 1) ) /*0x6f04b1*/
          _invalid_parameter_noinfo(); /*0x6f04b3*/
        return (unsigned int)sub_556D00(this, &a3, (int)this, v11, (int)this, v9); /*0x6f04c3*/
      }
    }
  }
  else
  {
    if ( v5 ) /*0x6f042e*/
      v7 = (int)(*(this + 2) - v5) / 6; /*0x6f0445*/
    else
      v7 = 0; /*0x6f0430*/
    v8 = *(this + 2); /*0x6f0447*/
    if ( v5 > v8 ) /*0x6f044c*/
      _invalid_parameter_noinfo(); /*0x6f044e*/
    return sub_6F0160(this, (int)this, v8, a2 - v7, &a3); /*0x6f045f*/
  }
  return result; /*0x6f0464*/
}
