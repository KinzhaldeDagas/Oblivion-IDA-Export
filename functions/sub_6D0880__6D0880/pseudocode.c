_DWORD *__thiscall sub_6D0880(_DWORD *this, float a2, float a3)
{
  _DWORD *result; // eax
  unsigned int v5; // edi

  result = (_DWORD *)*(this + 0x14);
  v5 = 0;
  if ( result[2] )
  {
    do
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 0x80))(this, v5);
      if ( result )
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*result + 0x84))(
                             result,
                             LODWORD(a2),
                             LODWORD(a3));
      ++v5;
    }
    while ( v5 < *(_DWORD *)(*(this + 0x14) + 8) );
  }
  return result;
}
