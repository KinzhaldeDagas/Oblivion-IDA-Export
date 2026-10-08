NiD3DPass *__thiscall sub_8067A0(NiD3DShader *this)
{
  NiD3DShader *v2; // esi
  int v3; // edi
  NiD3DShader *v4; // esi
  int v5; // edi

  v2 = (NiD3DShader *)((char *)this + 0x9C); /*0x8067a5*/
  v3 = 0x24; /*0x8067ab*/
  do /*0x8067c3*/
  {
    if ( v2->__vftable ) /*0x8067b0*/
      (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v2->__vftable->super.super.Destructor + 0x17))(v2->__vftable); /*0x8067bb*/
    v2 = (NiD3DShader *)((char *)v2 + 4); /*0x8067bd*/
    --v3; /*0x8067c0*/
  }
  while ( v3 ); /*0x8067c3*/
  v4 = (NiD3DShader *)((char *)this + 0x12C); /*0x8067c5*/
  v5 = 0x1E; /*0x8067cb*/
  do /*0x8067e3*/
  {
    if ( v4->__vftable ) /*0x8067d0*/
      (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v4->__vftable->super.super.Destructor + 0x11))(v4->__vftable); /*0x8067db*/
    v4 = (NiD3DShader *)((char *)v4 + 4); /*0x8067dd*/
    --v5; /*0x8067e0*/
  }
  while ( v5 ); /*0x8067e3*/
  return sub_7C90B0(this); /*0x8067e5*/
}
