char __thiscall sub_6DD230(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx

  result = NiTimeController_RegisterStreamables(this, a2); /*0x6dd239*/
  if ( result ) /*0x6dd240*/
  {
    v4 = *((_DWORD *)this + 0x12); /*0x6dd247*/
    if ( v4 ) /*0x6dd24c*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x6dd254*/
    v5 = *((_DWORD *)this + 0x13); /*0x6dd256*/
    if ( v5 ) /*0x6dd25b*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2); /*0x6dd263*/
    return 1; /*0x6dd266*/
  }
  return result; /*0x6dd242*/
}
