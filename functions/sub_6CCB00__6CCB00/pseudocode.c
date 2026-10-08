_DWORD *__usercall sub_6CCB00@<eax>(_DWORD *result@<eax>, int a2@<ecx>)
{
  unsigned __int8 i; // bl

  if ( *(_BYTE *)(a2 + 0xE) == 1 ) /*0x6ccb07*/
    return (*(_DWORD *(__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x18) + 0x7C))(*(_DWORD *)(a2 + 0x18)); /*0x6ccb12*/
  for ( i = 0; i < *(_BYTE *)(a2 + 0xD); ++i ) /*0x6ccb17*/
  {
    result = (_DWORD *)(*(_DWORD *)(a2 + 0x14) + 0x18 * i); /*0x6ccb29*/
    if ( *result ) /*0x6ccb2c*/
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*result + 0x7C))(*result); /*0x6ccb37*/
  }
  return result; /*0x6ccb42*/
}
