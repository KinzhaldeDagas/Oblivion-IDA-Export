NiD3DPass *__thiscall sub_7E5EB0(NiD3DShader *this)
{
  NiD3DShader *v2; // esi
  int v3; // edi
  NiD3DShader *v4; // esi
  int v5; // edi

  if ( this->member.ShaderDeclaration ) /*0x7e5eb3*/
  {
    v2 = (NiD3DShader *)((char *)this + 0x94); /*0x7e5ebb*/
    v3 = 0x14; /*0x7e5ec1*/
    do /*0x7e5ed9*/
    {
      if ( v2->__vftable ) /*0x7e5ec6*/
        (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v2->__vftable->super.super.Destructor + 0x17))(v2->__vftable); /*0x7e5ed1*/
      v2 = (NiD3DShader *)((char *)v2 + 4); /*0x7e5ed3*/
      --v3; /*0x7e5ed6*/
    }
    while ( v3 ); /*0x7e5ed9*/
  }
  v4 = (NiD3DShader *)((char *)this + 0x134); /*0x7e5edb*/
  v5 = 2; /*0x7e5ee1*/
  do /*0x7e5ef9*/
  {
    if ( v4->__vftable ) /*0x7e5ee6*/
      (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v4->__vftable->super.super.Destructor + 0x11))(v4->__vftable); /*0x7e5ef1*/
    v4 = (NiD3DShader *)((char *)v4 + 4); /*0x7e5ef3*/
    --v5; /*0x7e5ef6*/
  }
  while ( v5 ); /*0x7e5ef9*/
  return sub_77A4A0(this); /*0x7e5efb*/
}
