char __thiscall sub_812510(int this, _DWORD *a2, int a3)
{
  unsigned __int16 v3; // ax
  _DWORD *v4; // eax

  v3 = *(_WORD *)(this + 0xE); /*0x812510*/
  if ( v3 == *(_WORD *)(this + 0xC) || !a2 ) /*0x812520*/
    return 0; /*0x81255d*/
  v4 = (_DWORD *)(*(_DWORD *)(this + 0x10) + 0x10 * v3); /*0x812528*/
  *v4 = *a2; /*0x81252e*/
  v4[1] = a2[1]; /*0x812533*/
  v4[2] = a2[2]; /*0x812539*/
  v4[3] = a2[3]; /*0x812543*/
  *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * (unsigned __int16)(*(_WORD *)(this + 0xE))++) = a3; /*0x81254d*/
  return 1; /*0x81255a*/
}
