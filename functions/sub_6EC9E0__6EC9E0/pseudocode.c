char __thiscall sub_6EC9E0(NiRenderTargetGroup *this, int a2)
{
  char result; // al

  result = NiTimeController_RegisterStreamables(this, a2); /*0x6ec9e9*/
  if ( result ) /*0x6ec9f0*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x10) + 0x24))(*((_DWORD *)this + 0x10), a2); /*0x6eca00*/
    return 1; /*0x6eca03*/
  }
  return result; /*0x6ec9f2*/
}
