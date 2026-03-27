unsigned int __thiscall sub_446C50(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  unsigned int result; // eax
  _DWORD *v4; // edx
  int v5; // esi

  result = a2;
  if ( a2 < *(this + 3) )
  {
    v4 = a3;
    v5 = *(this + 1);
    if ( *a3 )
    {
      if ( !*(_DWORD *)(v5 + 4 * a2) )
      {
        ++*(this + 4);
        *(_DWORD *)(*(this + 1) + 4 * a2) = *a3;
        return result;
      }
    }
    else if ( *(_DWORD *)(v5 + 4 * a2) )
    {
      --*(this + 4);
    }
  }
  else
  {
    *(this + 3) = a2 + 1;
    v4 = a3;
    if ( *a3 )
    {
      ++*(this + 4);
      *(_DWORD *)(*(this + 1) + 4 * a2) = *a3;
      return result;
    }
  }
  *(_DWORD *)(*(this + 1) + 4 * a2) = *v4;
  return result;
}
