int __thiscall sub_471390(_DWORD *this, float *a2)
{
  int result; // eax

  result = _isnan(*a2);
  if ( !result )
  {
    result = _finite(*a2);
    if ( result )
    {
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
              result = *(_DWORD *)a2;
              *this = *(_DWORD *)a2;
              *(this + 1) = *((_DWORD *)a2 + 1);
              *(this + 2) = *((_DWORD *)a2 + 2);
            }
          }
        }
      }
    }
  }
  return result;
}
