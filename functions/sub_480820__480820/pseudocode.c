char __cdecl sub_480820(_DWORD *a1)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  _DWORD *i; // eax

  if ( !a1 ) /*0x480827*/
    return 0; /*0x480829*/
  if ( sub_700010(a1, (int)&stru_B3CE30) ) /*0x480834*/
    return 1; /*0x48083d*/
  v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1); /*0x480849*/
  v3 = v2; /*0x48084b*/
  if ( !v2 ) /*0x48084f*/
    return 0; /*0x48084f*/
  v4 = *(unsigned __int16 *)(v2 + 0xB6); /*0x480851*/
  v5 = 0; /*0x480858*/
  if ( !*(_WORD *)(v3 + 0xB6) ) /*0x480851*/
    return 0; /*0x48088a*/
  if ( v4 ) /*0x480860*/
    goto LABEL_9; /*0x480860*/
  for ( i = 0; !sub_480820(i); i = *(_DWORD **)(*(_DWORD *)(v3 + 0xB0) + 4 * v5) ) /*0x480862*/
  {
    if ( *(unsigned __int16 *)(v3 + 0xB6) <= (unsigned int)++v5 ) /*0x480888*/
      return 0; /*0x480888*/
LABEL_9:
    ; /*0x480866*/
  }
  return 1; /*0x48082b*/
}
