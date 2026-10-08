bool __thiscall sub_89E9C0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  bool result; // al

  v1 = *(this + 4); /*0x89e9c0*/
  if ( !v1 ) /*0x89e9c5*/
    return 0; /*0x89e9eb*/
  v2 = *(_DWORD *)(v1 + 8); /*0x89e9c7*/
  result = 1; /*0x89e9e5*/
  if ( v2 ) /*0x89e9cc*/
  {
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 0x50) + 8))(*(_DWORD *)(v2 + 0x50)); /*0x89e9d6*/
    if ( v3 != 6 && v3 != 7 ) /*0x89e9e0*/
      return 0; /*0x89e9cc*/
  }
  return result; /*0x89e9e4*/
}
