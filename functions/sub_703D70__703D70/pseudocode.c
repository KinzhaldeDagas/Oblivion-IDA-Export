char __thiscall sub_703D70(int this, int a2)
{
  _DWORD *v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // edx

  LOBYTE(v2) = a2 != 0; /*0x703d76*/
  if ( a2 ) /*0x703d7b*/
  {
LABEL_7:
    *(_WORD *)(this + 0x18) |= 1u; /*0x703da9*/
    return (char)v2; /*0x703da9*/
  }
  v3 = *(unsigned __int16 *)(this + 0x26); /*0x703d7d*/
  v4 = 1; /*0x703d81*/
  if ( v3 > 1 ) /*0x703d88*/
  {
    v2 = (_DWORD *)(*(_DWORD *)(this + 0x20) + 4); /*0x703d8d*/
    while ( !*v2 ) /*0x703d93*/
    {
      ++v4; /*0x703d95*/
      ++v2; /*0x703d98*/
      if ( v4 >= v3 ) /*0x703d9d*/
        goto LABEL_6; /*0x703d9d*/
    }
    goto LABEL_7; /*0x703d93*/
  }
LABEL_6:
  *(_WORD *)(this + 0x18) &= ~1u; /*0x703d9f*/
  return (char)v2; /*0x703da5*/
}
