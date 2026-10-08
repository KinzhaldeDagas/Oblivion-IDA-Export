int __thiscall sub_471390(_DWORD *this, float *a2)
{
  int result; // eax

  result = _isnan(*a2); /*0x4713a0*/
  if ( !result ) /*0x4713aa*/
  {
    result = _finite(*a2); /*0x4713b4*/
    if ( result ) /*0x4713be*/
    {
      result = _isnan(a2[1]); /*0x4713c9*/
      if ( !result ) /*0x4713d3*/
      {
        result = _finite(a2[1]); /*0x4713de*/
        if ( result ) /*0x4713e8*/
        {
          result = _isnan(a2[2]); /*0x4713f3*/
          if ( !result ) /*0x4713fd*/
          {
            result = _finite(a2[2]); /*0x471408*/
            if ( result ) /*0x471412*/
            {
              result = *(_DWORD *)a2; /*0x471414*/
              *this = *(_DWORD *)a2; /*0x471416*/
              *(this + 1) = *((_DWORD *)a2 + 1); /*0x47141b*/
              *(this + 2) = *((_DWORD *)a2 + 2); /*0x471421*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4713a5*/
}
