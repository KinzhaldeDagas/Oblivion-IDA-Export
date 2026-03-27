unsigned int __thiscall SaveLoad_IRefToFormID_(unsigned int **this, unsigned int a2)
{
  unsigned int result; // eax
  unsigned int *v4; // esi
  unsigned int v5; // ecx
  _DWORD *v6; // edx
  unsigned int v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // edx

  if ( TESDataHandler_IsFormIDCreated_(a2) )
    return a2;
  v4 = *(this + 0x1D);
  v5 = v4[3];
  result = 0;
  if ( v5 )
  {
    v6 = (_DWORD *)v4[1];
    while ( *v6 != a2 )
    {
      ++result;
      ++v6;
      if ( result >= v5 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v7 = v4[3];
    if ( v5 >= v4[2] )
      sub_452910(v4, v5 + v4[5]);
    if ( v7 < v4[3] )
    {
      if ( a2 )
      {
        v9 = v4[1];
        if ( !*(_DWORD *)(v9 + 4 * v7) )
        {
          ++v4[4];
          *(_DWORD *)(v9 + 4 * v7) = a2;
          return v7;
        }
      }
      else if ( *(_DWORD *)(v4[1] + 4 * v7) )
      {
        --v4[4];
      }
    }
    else
    {
      v4[3] = v7 + 1;
      if ( a2 )
      {
        v8 = v4[1];
        ++v4[4];
        *(_DWORD *)(v8 + 4 * v7) = a2;
        return v7;
      }
    }
    *(_DWORD *)(v4[1] + 4 * v7) = a2;
    return v7;
  }
  return result;
}
