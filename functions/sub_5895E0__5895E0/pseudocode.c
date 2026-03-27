_DWORD *__thiscall sub_5895E0(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // edx
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // esi

  result = *(_DWORD **)(*this + 0x28);
  v2 = result;
  v3 = 0;
  if ( result )
  {
    while ( v2 != this )
    {
      v3 = v2;
      v2 = (_DWORD *)v2[5];
      if ( !v2 )
        return result;
    }
    v4 = v2[5];
    if ( v3 )
    {
      v3[5] = v4;
      v5 = v4;
    }
    else
    {
      *(_DWORD *)(*this + 0x28) = v4;
      v5 = *(_DWORD *)(*this + 0x28);
    }
    FormHeapFree((unsigned int)v2);
    return (_DWORD *)v5;
  }
  return result;
}
