_DWORD *__thiscall sub_7AD1E0(_DWORD *this, unsigned int a2)
{
  _DWORD *result; // eax
  int v4; // edx
  unsigned int v5; // esi

  result = (_DWORD *)*(this + 0x88C);
  if ( result )
  {
    v4 = a2;
    while ( 1 )
    {
      v5 = result[2];
      result = (_DWORD *)*result;
      a2 = v5;
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 + 0x10) == v4 )
          break;
      }
      if ( !result )
        return result;
    }
    if ( *(_DWORD *)(v5 + 0x14) )
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v5 + 0x14) + 8))(*(_DWORD *)(v5 + 0x14));
      *(_DWORD *)(v5 + 0x14) = 0;
    }
    FormHeapFree(v5);
    return sub_776690((BSTextureManager *)(this + 0x88B), (int *)&a2);
  }
  return result;
}
