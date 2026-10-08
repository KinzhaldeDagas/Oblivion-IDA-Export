// Registers the NiObject base first and, on success, registers the refcounted next-controller object at +0x34. The target at +0x30 is a link, not recursively registered here.
char __thiscall NiTimeController_RegisterStreamables(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_700650(this, a2); /*0x715f19*/
  if ( result ) /*0x715f20*/
  {
    v4 = *((_DWORD *)this + 0xD); /*0x715f27*/
    if ( v4 ) /*0x715f2c*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x715f34*/
    return 1; /*0x715f37*/
  }
  return result; /*0x715f22*/
}
