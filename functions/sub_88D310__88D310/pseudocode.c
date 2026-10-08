// hkCharacterContext init stores state manager pointer and initial state id; 0x88D370 later returns +0x0C.
_WORD *__thiscall hkCharacterContext_Init(_WORD *this, int a2, int a3)
{
  _WORD *result; // eax

  result = this; /*0x88d314*/
  *(this + 3) = 1; /*0x88d31a*/
  *(_DWORD *)this = &off_A96248; /*0x88d320*/
  *((_DWORD *)this + 2) = a2; /*0x88d326*/
  *((_DWORD *)this + 3) = a3; /*0x88d329*/
  if ( *(_WORD *)(a2 + 4) ) /*0x88d32c*/
    ++*(_WORD *)(a2 + 6); /*0x88d333*/
  return result; /*0x88d337*/
}
