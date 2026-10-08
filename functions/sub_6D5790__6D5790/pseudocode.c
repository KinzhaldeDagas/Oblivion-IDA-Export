char __thiscall sub_6D5790(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = NiTimeController_RegisterStreamables(this, a2); /*0x6d5799*/
  if ( result ) /*0x6d57a0*/
  {
    v4 = *((_DWORD *)this + 0x14); /*0x6d57a7*/
    if ( v4 ) /*0x6d57ac*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x6d57b4*/
    return 1; /*0x6d57b7*/
  }
  return result; /*0x6d57a2*/
}
