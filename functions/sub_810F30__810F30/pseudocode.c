NiD3DPass *__thiscall sub_810F30(NiD3DShader *this)
{
  NiD3DShader *v2; // esi
  int v3; // edi
  NiD3DShader *v4; // esi
  int v5; // edi

  if ( this->member.ShaderDeclaration ) /*0x810f33*/
  {
    v2 = (NiD3DShader *)((char *)this + 0x8C); /*0x810f3b*/
    v3 = 4; /*0x810f41*/
    do /*0x810f59*/
    {
      if ( v2->__vftable ) /*0x810f46*/
        (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v2->__vftable->super.super.Destructor + 0x17))(v2->__vftable); /*0x810f51*/
      v2 = (NiD3DShader *)((char *)v2 + 4); /*0x810f53*/
      --v3; /*0x810f56*/
    }
    while ( v3 ); /*0x810f59*/
  }
  v4 = (NiD3DShader *)((char *)this + 0x9C); /*0x810f5b*/
  v5 = 2; /*0x810f61*/
  do /*0x810f79*/
  {
    if ( v4->__vftable ) /*0x810f66*/
      (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v4->__vftable->super.super.Destructor + 0x11))(v4->__vftable); /*0x810f71*/
    v4 = (NiD3DShader *)((char *)v4 + 4); /*0x810f73*/
    --v5; /*0x810f76*/
  }
  while ( v5 ); /*0x810f79*/
  return sub_77A4A0(this); /*0x810f7b*/
}
