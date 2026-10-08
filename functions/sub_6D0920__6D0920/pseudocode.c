char __thiscall sub_6D0920(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx
  int i; // edi
  int v6; // eax

  result = j_NiTimeController_RegisterStreamables(a2); /*0x6d0929*/
  if ( result ) /*0x6d0930*/
  {
    v4 = *(this + 0x14); /*0x6d0937*/
    if ( v4 ) /*0x6d093c*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x6d0944*/
    for ( i = 0; (unsigned __int16)i < (*(unsigned __int16 (__thiscall **)(_DWORD *))(*this + 0x74))(this); ++i ) /*0x6d0950*/
    {
      v6 = (*(int (__thiscall **)(_DWORD *, int))(*this + 0x80))(this, i); /*0x6d0962*/
      if ( v6 ) /*0x6d0966*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x24))(v6, a2); /*0x6d0970*/
    }
    return 1; /*0x6d0985*/
  }
  return result; /*0x6d0932*/
}
