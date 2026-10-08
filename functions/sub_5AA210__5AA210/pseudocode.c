_DWORD *__cdecl sub_5AA210(_DWORD *a1, int a2)
{
  _DWORD *result; // eax

  result = (_DWORD *)*(unsigned __int8 *)(a2 + 4); /*0x5aa214*/
  if ( result == (_DWORD *)0x19 ) /*0x5aa21b*/
  {
    *a1 = 6; /*0x5aa221*/
    return a1; /*0x5aa21d*/
  }
  else if ( result == (_DWORD *)0x28 ) /*0x5aa22b*/
  {
    *a1 = 5; /*0x5aa231*/
  }
  else if ( result == (_DWORD *)0x13 ) /*0x5aa23b*/
  {
    *a1 = 4; /*0x5aa241*/
  }
  else if ( result == (_DWORD *)0x15 ) /*0x5aa24b*/
  {
    *a1 = 8; /*0x5aa251*/
    return a1; /*0x5aa24d*/
  }
  else if ( result == (_DWORD *)0x27 ) /*0x5aa25b*/
  {
    *a1 = 9; /*0x5aa261*/
  }
  else if ( result == (_DWORD *)0x26 || result == (_DWORD *)0x2A || a2 == MEMORY[0xB35ED8] || a2 == MEMORY[0xB35EDC] ) /*0x5aa280*/
  {
    *a1 = 0xA; /*0x5aa296*/
  }
  else
  {
    result = a1; /*0x5aa282*/
    if ( *a1 == 8 ) /*0x5aa289*/
      *a1 = 0xB; /*0x5aa28b*/
  }
  return result; /*0x5aa227*/
}
