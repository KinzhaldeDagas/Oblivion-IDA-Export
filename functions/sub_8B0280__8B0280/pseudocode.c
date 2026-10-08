int __thiscall sub_8B0280(_DWORD *this, _DWORD *a2)
{
  int result; // eax
  int v4; // esi

  result = sub_8A2690(this, a2); /*0x8b0289*/
  if ( this && (v4 = *(this + 2)) != 0 ) /*0x8b0297*/
  {
    a2[1] = *(_DWORD *)(v4 + 0xC); /*0x8b029c*/
  }
  else
  {
    a2[1] = 0; /*0x8b02a6*/
    return 0; /*0x8b02a4*/
  }
  return result; /*0x8b029f*/
}
