char __stdcall sub_6E0A50(int a1)
{
  NiRTTI *v1; // eax

  if ( !a1 ) /*0x6e0a56*/
    return 0; /*0x6e0a56*/
  v1 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6e0a5d*/
  if ( !v1 ) /*0x6e0a61*/
    return 0; /*0x6e0a71*/
  while ( v1 != &stru_B3FD14 ) /*0x6e0a68*/
  {
    v1 = v1->parent; /*0x6e0a6a*/
    if ( !v1 ) /*0x6e0a6f*/
      return 0; /*0x6e0a6f*/
  }
  return 1; /*0x6e0a73*/
}
