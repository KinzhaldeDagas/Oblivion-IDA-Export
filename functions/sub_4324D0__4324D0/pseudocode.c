_DWORD *__thiscall sub_4324D0(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v4; // ecx

  result = (_DWORD *)FormHeapAlloc(0x14u); /*0x4324d5*/
  if ( !result ) /*0x4324df*/
    return 0; /*0x432513*/
  v4 = *(this + 4); /*0x4324f3*/
  result[2] = v4 + 8 * a2 + 4; /*0x4324f6*/
  *result = this; /*0x4324fc*/
  result[1] = 8 * a2 + v4; /*0x4324fe*/
  result[3] = 0; /*0x432501*/
  result[4] = 0; /*0x432508*/
  return result; /*0x43250f*/
}
