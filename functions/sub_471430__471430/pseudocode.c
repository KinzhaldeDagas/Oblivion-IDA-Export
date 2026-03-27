int __thiscall sub_471430(_DWORD *this, float *a2)
{
  int result; // eax

  result = _isnan(a2[1]);
  if ( !result )
  {
    result = _finite(a2[1]);
    if ( result )
    {
      result = _isnan(a2[2]);
      if ( !result )
      {
        result = _finite(a2[2]);
        if ( result )
        {
          result = _isnan(a2[3]);
          if ( !result )
          {
            result = _finite(a2[3]);
            if ( result )
            {
              result = _isnan(*a2);
              if ( !result )
              {
                result = _finite(*a2);
                if ( result )
                {
                  *(this + 3) = *(_DWORD *)a2;
                  *(this + 4) = *((_DWORD *)a2 + 1);
                  *(this + 5) = *((_DWORD *)a2 + 2);
                  result = *((_DWORD *)a2 + 3);
                  *(this + 6) = result;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
