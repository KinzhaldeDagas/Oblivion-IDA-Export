_DWORD *__cdecl sub_8CB820(_DWORD *a1, int a2)
{
  int v2; // edi
  _DWORD *result; // eax
  unsigned __int16 v4; // dx

  v2 = *(unsigned __int16 *)(a2 + 0x20);
  result = a1;
  if ( *(_BYTE *)(a2 + 0x29) )
  {
    *(_DWORD *)(a1[0xE] + 4 * v2) = *(_DWORD *)(a1[0xE] + 4 * a1[0xF] - 4);
    *(_WORD *)(*(_DWORD *)(a1[0xE] + 4 * *(unsigned __int16 *)(a2 + 0x20)) + 0x20) = *(_WORD *)(a2 + 0x20);
    --a1[0xF];
  }
  else
  {
    *(_DWORD *)(a1[0x11] + 4 * v2) = *(_DWORD *)(a1[0x11] + 4 * a1[0x12] - 4);
    *(_WORD *)(*(_DWORD *)(a1[0x11] + 4 * *(unsigned __int16 *)(a2 + 0x20)) + 0x20) = *(_WORD *)(a2 + 0x20);
    --a1[0x12];
  }
  v4 = *(_WORD *)(a2 + 0x22);
  if ( v4 != 0xFFFF )
  {
    result = (_DWORD *)a1[0x14];
    result[v4] = 0;
    *(_WORD *)(a2 + 0x22) = 0xFFFF;
  }
  return result;
}
