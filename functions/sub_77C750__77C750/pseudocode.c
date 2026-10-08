char __thiscall sub_77C750(_DWORD *this, NiGeometry *a2, const char *ArgList, int a4)
{
  BSShader *v5; // edi

  v5 = (BSShader *)(*(int (__thiscall **)(_DWORD *, const char *, int, int))(*this + 4))(this, ArgList, a4, 1); /*0x77c769*/
  if ( v5 ) /*0x77c76d*/
  {
    if ( a4 == 0xFFFFFFFF ) /*0x77c790*/
      v5->__vftable->super.super.SetUnk01D((NiD3DShaderInterface *)v5, 1); /*0x77c79b*/
    return sub_77C2A0(this, a2, v5); /*0x77c7a5*/
  }
  else
  {
    sub_738460(0x100, 0, "Cannot find shader %s, Implementation %d\n", ArgList, a4); /*0x77c77c*/
    return 0; /*0x77c787*/
  }
}
