int __thiscall sub_91B550(int *this, int a2)
{
  int result; // eax
  int v3; // edx
  _DWORD **i; // esi
  int v5; // esi
  int v6; // ecx
  _DWORD *j; // edx
  int v8; // ecx

  result = *(_DWORD *)(a2 + 0x14); /*0x91b555*/
  if ( result ) /*0x91b55a*/
  {
    v3 = *(this + 3); /*0x91b55c*/
    result = 0; /*0x91b55f*/
    if ( v3 > 0 ) /*0x91b567*/
    {
      for ( i = (_DWORD **)*(this + 2); **i != *(_DWORD *)(a2 + 8); ++i ) /*0x91b56a*/
      {
        if ( ++result >= v3 ) /*0x91b57d*/
          return result; /*0x91b57d*/
      }
      if ( result >= 0 ) /*0x91b588*/
      {
        v5 = *(_DWORD *)(*(this + 2) + 4 * result); /*0x91b58d*/
        (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 0x10))( /*0x91b5a0*/
          *(this + 0xFFFFFFFC),
          a2 + 0x17,
          unk_BA842C);
        v6 = *(_DWORD *)(v5 + 8); /*0x91b5a3*/
        result = 0; /*0x91b5a6*/
        if ( v6 > 0 ) /*0x91b5aa*/
        {
          for ( j = *(_DWORD **)(v5 + 4); *j != a2 + 0x17; ++j ) /*0x91b5ac*/
          {
            if ( ++result >= v6 ) /*0x91b5ba*/
              return result; /*0x91b5ba*/
          }
          if ( result >= 0 ) /*0x91b5c5*/
          {
            v8 = *(_DWORD *)(v5 + 8) - 1; /*0x91b5ca*/
            *(_DWORD *)(v5 + 8) = v8; /*0x91b5cb*/
            *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * result) = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v8); /*0x91b5d4*/
          }
        }
      }
    }
  }
  return result; /*0x91b582*/
}
