_DWORD *__userpurge sub_6CCB50@<eax>(_DWORD *result@<eax>, int a2@<ecx>, float a3, float a4)
{
  unsigned __int8 i; // bl

  if ( *(_BYTE *)(a2 + 0xE) == 1 )
    return (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 0x18) + 0x84))(
                       *(_DWORD *)(a2 + 0x18),
                       LODWORD(a3),
                       LODWORD(a4));
  for ( i = 0; i < *(_BYTE *)(a2 + 0xD); ++i )
  {
    result = (_DWORD *)(*(_DWORD *)(a2 + 0x14) + 0x18 * i);
    if ( *result )
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*result + 0x84))(
                           *result,
                           LODWORD(a3),
                           LODWORD(a4));
  }
  return result;
}
