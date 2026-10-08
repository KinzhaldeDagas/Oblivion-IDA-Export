char __thiscall sub_6E03E0(NiRenderTargetGroup *this, int a2)
{
  char result; // al

  result = NiTimeController_RegisterStreamables(this, a2); /*0x6e03e9*/
  if ( result ) /*0x6e03f0*/
  {
    if ( *((_DWORD *)this + 0x10) ) /*0x6e03f7*/
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x10) + 0x24))(*((_DWORD *)this + 0x10), a2); /*0x6e0406*/
    return 1; /*0x6e0409*/
  }
  return result; /*0x6e03f2*/
}
