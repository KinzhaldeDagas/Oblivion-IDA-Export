void (__thiscall ***__thiscall sub_77CA50(unsigned int **this))(_DWORD, signed int)
{
  unsigned int **v2; // ecx
  unsigned int **v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // esi
  unsigned int v6; // [esp+0h] [ebp-8h] BYREF
  int v7; // [esp+4h] [ebp-4h] BYREF

  v2 = (unsigned int **)*(this + 8); /*0x77ca52*/
  if ( !v2 ) /*0x77ca5a*/
    return 0; /*0x77ca5a*/
  v3 = this + 7; /*0x77ca5c*/
  if ( !*v3 ) /*0x77ca5f*/
    return 0; /*0x77caa4*/
  v6 = 0; /*0x77ca70*/
  sub_7B2600(v2, v3, &v7, &v6); /*0x77ca78*/
  v4 = (void (__thiscall ***)(_DWORD, int))v6; /*0x77ca7d*/
  if ( v6 ) /*0x77ca83*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x77ca89*/
      (**v4)(v4, 1); /*0x77ca9b*/
  }
  return v4; /*0x77caa0*/
}
