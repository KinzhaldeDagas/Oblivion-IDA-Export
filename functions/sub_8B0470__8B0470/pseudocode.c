_DWORD *__thiscall sub_8B0470(_DWORD *this, int a2)
{
  int v2; // eax
  _DWORD *result; // eax

  if ( this && (v2 = *(this + 2)) != 0 ) /*0x8b0479*/
    result = *(_DWORD **)(v2 + 0xC); /*0x8b047b*/
  else
    result = 0; /*0x8b0480*/
  if ( result ) /*0x8b0484*/
  {
    result = (_DWORD *)result[2]; /*0x8b0486*/
    if ( result ) /*0x8b048b*/
      return (*(_DWORD *(__thiscall **)(_DWORD *, int))(*result + 0x90))(result, a2); /*0x8b0497*/
  }
  return result; /*0x8b0499*/
}
