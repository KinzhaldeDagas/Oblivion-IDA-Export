int __thiscall sub_91B550(int *this, int a2)
{
  int result; // eax
  int v3; // edx
  _DWORD **i; // esi
  int v5; // esi
  int v6; // ecx
  _DWORD *j; // edx
  int v8; // ecx

  result = *(_DWORD *)(a2 + 0x14);
  if ( result )
  {
    v3 = *(this + 3);
    result = 0;
    if ( v3 > 0 )
    {
      for ( i = (_DWORD **)*(this + 2); **i != *(_DWORD *)(a2 + 8); ++i )
      {
        if ( ++result >= v3 )
          return result;
      }
      if ( result >= 0 )
      {
        v5 = *(_DWORD *)(*(this + 2) + 4 * result);
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 0x10))(
          *(this + 0xFFFFFFFC),
          a2 + 0x17,
          dword_BA842C);
        v6 = *(_DWORD *)(v5 + 8);
        result = 0;
        if ( v6 > 0 )
        {
          for ( j = *(_DWORD **)(v5 + 4); *j != a2 + 0x17; ++j )
          {
            if ( ++result >= v6 )
              return result;
          }
          if ( result >= 0 )
          {
            v8 = *(_DWORD *)(v5 + 8) - 1;
            *(_DWORD *)(v5 + 8) = v8;
            *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * result) = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v8);
          }
        }
      }
    }
  }
  return result;
}
