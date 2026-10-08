// Registers base streamables first; on success, invokes interpolator virtual RegisterStreamables (+0x24) when +0x3C is non-null.
char __thiscall NiSingleInterpController_RegisterStreamables(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = j_NiTimeController_RegisterStreamables(a2); /*0x6ce359*/
  if ( result ) /*0x6ce360*/
  {
    v4 = *(this + 0xF); /*0x6ce367*/
    if ( v4 ) /*0x6ce36c*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x6ce374*/
    return 1; /*0x6ce377*/
  }
  return result; /*0x6ce362*/
}
