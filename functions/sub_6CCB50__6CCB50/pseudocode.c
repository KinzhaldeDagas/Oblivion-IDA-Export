_DWORD *__userpurge sub_6CCB50@<eax>(_DWORD *result@<eax>, int a2@<ecx>, float a3, float a4)
{
  unsigned __int8 i; // bl

  if ( *(_BYTE *)(a2 + 0xE) == 1 ) /*0x6ccb57*/
    return (*(_DWORD *(__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 0x18) + 0x84))( /*0x6ccb76*/
             *(_DWORD *)(a2 + 0x18),
             LODWORD(a3),
             LODWORD(a4));
  for ( i = 0; i < *(_BYTE *)(a2 + 0xD); ++i ) /*0x6ccb7f*/
  {
    result = (_DWORD *)(*(_DWORD *)(a2 + 0x14) + 0x18 * i); /*0x6ccb8d*/
    if ( *result ) /*0x6ccb90*/
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*result + 0x84))( /*0x6ccbb0*/
                           *result,
                           LODWORD(a3),
                           LODWORD(a4));
  }
  return result; /*0x6ccb78*/
}
