NiD3DPass *__thiscall sub_809890(NiD3DShader *this)
{
  NiD3DShader *v2; // esi
  int v3; // edi
  NiD3DShader *v4; // esi
  int v5; // edi

  v2 = (NiD3DShader *)((char *)this + 0x9C);
  v3 = 0x14;
  do
  {
    if ( v2->__vftable )
      (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v2->__vftable->super.super.Destructor + 0x17))(v2->__vftable);
    v2 = (NiD3DShader *)((char *)v2 + 4);
    --v3;
  }
  while ( v3 );
  v4 = (NiD3DShader *)((char *)this + 0xEC);
  v5 = 0xA;
  do
  {
    if ( v4->__vftable )
      (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v4->__vftable->super.super.Destructor + 0x11))(v4->__vftable);
    v4 = (NiD3DShader *)((char *)v4 + 4);
    --v5;
  }
  while ( v5 );
  return sub_7C90B0(this);
}
