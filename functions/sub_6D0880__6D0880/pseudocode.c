_DWORD *__thiscall sub_6D0880(_DWORD *this, float a2, float a3)
{
  _DWORD *result; // eax
  unsigned int v5; // edi

  result = (_DWORD *)*(this + 0x14); /*0x6d0883*/
  v5 = 0; /*0x6d0887*/
  if ( result[2] ) /*0x6d0889*/
  {
    do /*0x6d08c8*/
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 0x80))(this, v5); /*0x6d089b*/
      if ( result ) /*0x6d089f*/
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*result + 0x84))( /*0x6d08bd*/
                             result,
                             LODWORD(a2),
                             LODWORD(a3));
      ++v5; /*0x6d08c2*/
    }
    while ( v5 < *(_DWORD *)(*(this + 0x14) + 8) ); /*0x6d08c8*/
  }
  return result; /*0x6d08ca*/
}
