_DWORD *__cdecl sub_8CB820(_DWORD *a1, int a2)
{
  int v2; // edi
  _DWORD *result; // eax
  unsigned __int16 v4; // dx

  v2 = *(unsigned __int16 *)(a2 + 0x20); /*0x8cb829*/
  result = a1; /*0x8cb82f*/
  if ( *(_BYTE *)(a2 + 0x29) ) /*0x8cb824*/
  {
    *(_DWORD *)(a1[0xE] + 4 * v2) = *(_DWORD *)(a1[0xE] + 4 * a1[0xF] - 4); /*0x8cb862*/
    *(_WORD *)(*(_DWORD *)(a1[0xE] + 4 * *(unsigned __int16 *)(a2 + 0x20)) + 0x20) = *(_WORD *)(a2 + 0x20); /*0x8cb872*/
    --a1[0xF]; /*0x8cb876*/
  }
  else
  {
    *(_DWORD *)(a1[0x11] + 4 * v2) = *(_DWORD *)(a1[0x11] + 4 * a1[0x12] - 4); /*0x8cb83f*/
    *(_WORD *)(*(_DWORD *)(a1[0x11] + 4 * *(unsigned __int16 *)(a2 + 0x20)) + 0x20) = *(_WORD *)(a2 + 0x20); /*0x8cb84f*/
    --a1[0x12]; /*0x8cb853*/
  }
  v4 = *(_WORD *)(a2 + 0x22); /*0x8cb879*/
  if ( v4 != 0xFFFF ) /*0x8cb884*/
  {
    result = (_DWORD *)a1[0x14]; /*0x8cb886*/
    result[v4] = 0; /*0x8cb88c*/
    *(_WORD *)(a2 + 0x22) = 0xFFFF; /*0x8cb893*/
  }
  return result; /*0x8cb882*/
}
