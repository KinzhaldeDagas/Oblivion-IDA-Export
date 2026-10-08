int __thiscall sub_471430(_DWORD *this, float *a2)
{
  int result; // eax

  result = _isnan(a2[1]); /*0x471451*/
  if ( !result ) /*0x47145b*/
  {
    result = _finite(a2[1]); /*0x471472*/
    if ( result ) /*0x47147c*/
    {
      result = _isnan(a2[2]); /*0x471493*/
      if ( !result ) /*0x47149d*/
      {
        result = _finite(a2[2]); /*0x4714b4*/
        if ( result ) /*0x4714be*/
        {
          result = _isnan(a2[3]); /*0x4714d5*/
          if ( !result ) /*0x4714df*/
          {
            result = _finite(a2[3]); /*0x4714f2*/
            if ( result ) /*0x4714fc*/
            {
              result = _isnan(*a2); /*0x47150e*/
              if ( !result ) /*0x471518*/
              {
                result = _finite(*a2); /*0x47152a*/
                if ( result ) /*0x471534*/
                {
                  *(this + 3) = *(_DWORD *)a2; /*0x471538*/
                  *(this + 4) = *((_DWORD *)a2 + 1); /*0x47153e*/
                  *(this + 5) = *((_DWORD *)a2 + 2); /*0x471544*/
                  result = *((_DWORD *)a2 + 3); /*0x471547*/
                  *(this + 6) = result; /*0x47154a*/
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x47154d*/
}
