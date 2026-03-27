_DWORD *__usercall sub_6CCB00@<eax>(_DWORD *result@<eax>, int a2@<ecx>)
{
  unsigned __int8 i; // bl

  if ( *(_BYTE *)(a2 + 0xE) == 1 )
    return (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x18) + 0x7C))(*(_DWORD *)(a2 + 0x18));
  for ( i = 0; i < *(_BYTE *)(a2 + 0xD); ++i )
  {
    result = (_DWORD *)(*(_DWORD *)(a2 + 0x14) + 0x18 * i);
    if ( *result )
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*result + 0x7C))(*result);
  }
  return result;
}
