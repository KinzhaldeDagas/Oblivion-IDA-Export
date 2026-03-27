// positive sp value has been detected, the output may be wrong!
_DWORD *__userpurge def_674561@<eax>(int a1@<esi>, int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *result; // eax

  v3 = *(_DWORD **)(a1 + 0x74);
  if ( v3 )
  {
    if ( a2 == *v3 )
      *(_DWORD *)(a1 + 0x74) = 0;
  }
  result = *(_DWORD **)(a1 + 0x78);
  if ( result )
  {
    if ( a2 == *result )
      *(_DWORD *)(a1 + 0x78) = 0;
  }
  return result;
}
