char __thiscall sub_77C750(_DWORD *this, NiGeometry *a2, const char *ArgList, int a4)
{
  BSShader *v5; // edi

  v5 = (BSShader *)(*(int (__thiscall **)(_DWORD *, const char *, int, int))(*this + 4))(this, ArgList, a4, 1);
  if ( v5 )
  {
    if ( a4 == 0xFFFFFFFF )
      v5->__vftable->super.super.SetUnk01D((NiD3DShaderInterface *)v5, 1);
    return sub_77C2A0(this, a2, v5);
  }
  else
  {
    sub_738460(0x100, 0, "Cannot find shader %s, Implementation %d\n", ArgList, a4);
    return 0;
  }
}
