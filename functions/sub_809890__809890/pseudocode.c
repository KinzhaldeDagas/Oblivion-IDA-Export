NiD3DPass *__thiscall sub_809890(NiD3DShader *this)
{
  NiD3DShader *v2; // esi
  int v3; // edi
  NiD3DShader *v4; // esi
  int v5; // edi

  v2 = (NiD3DShader *)((char *)this + 0x9C); /*0x809895*/
  v3 = 0x14; /*0x80989b*/
  do /*0x8098b3*/
  {
    if ( v2->__vftable ) /*0x8098a0*/
      (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v2->__vftable->super.super.Destructor + 0x17))(v2->__vftable); /*0x8098ab*/
    v2 = (NiD3DShader *)((char *)v2 + 4); /*0x8098ad*/
    --v3; /*0x8098b0*/
  }
  while ( v3 ); /*0x8098b3*/
  v4 = (NiD3DShader *)((char *)this + 0xEC); /*0x8098b5*/
  v5 = 0xA; /*0x8098bb*/
  do /*0x8098d3*/
  {
    if ( v4->__vftable ) /*0x8098c0*/
      (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v4->__vftable->super.super.Destructor + 0x11))(v4->__vftable); /*0x8098cb*/
    v4 = (NiD3DShader *)((char *)v4 + 4); /*0x8098cd*/
    --v5; /*0x8098d0*/
  }
  while ( v5 ); /*0x8098d3*/
  return sub_7C90B0(this); /*0x8098d5*/
}
