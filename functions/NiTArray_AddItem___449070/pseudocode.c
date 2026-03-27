unsigned int __thiscall NiTArray_AddItem_(unsigned int *this, _DWORD *a2)
{
  unsigned int result; // eax
  unsigned int v4; // edi
  _DWORD *v5; // edx
  _DWORD *v6; // ecx
  int v7; // edx

  if ( !*a2 )
    return 0xFFFFFFFF;
  v4 = *(this + 3);
  result = 0;
  if ( v4 )
  {
    v5 = (_DWORD *)*(this + 1);
    v6 = v5;
    while ( *v6 )
    {
      ++result;
      ++v6;
      if ( result >= v4 )
        goto LABEL_7;
    }
    v5[result] = *a2;
    ++*(this + 4);
  }
  else
  {
LABEL_7:
    if ( v4 >= *(this + 2) )
      sub_452910(this, v4 + *(this + 5));
    if ( v4 < *(this + 3) )
    {
      if ( *a2 )
      {
        v7 = *(this + 1);
        if ( !*(_DWORD *)(v7 + 4 * v4) )
        {
          ++*(this + 4);
          *(_DWORD *)(v7 + 4 * v4) = *a2;
          return v4;
        }
      }
      else if ( *(_DWORD *)(*(this + 1) + 4 * v4) )
      {
        --*(this + 4);
      }
    }
    else
    {
      *(this + 3) = v4 + 1;
      if ( *a2 )
      {
        ++*(this + 4);
        *(_DWORD *)(*(this + 1) + 4 * v4) = *a2;
        return v4;
      }
    }
    *(_DWORD *)(*(this + 1) + 4 * v4) = *a2;
    return v4;
  }
  return result;
}
