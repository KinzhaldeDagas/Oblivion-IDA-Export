NiD3DPass *__thiscall sub_80B710(NiD3DShader *this)
{
  NiD3DShader *v2; // esi
  int v3; // edi
  NiD3DShader *v4; // esi
  int v5; // edi
  NiD3DShader *v6; // esi
  int v7; // edi
  int v8; // ecx

  if ( this->member.ShaderDeclaration )
  {
    v2 = (NiD3DShader *)((char *)this + 0xA4);
    v3 = 7;
    do
    {
      if ( v2->__vftable )
        (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v2->__vftable->super.super.Destructor + 0x17))(v2->__vftable);
      v2 = (NiD3DShader *)((char *)v2 + 4);
      --v3;
    }
    while ( v3 );
    v4 = (NiD3DShader *)((char *)this + 0xCC);
    v5 = 7;
    do
    {
      if ( v4->__vftable )
        (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v4->__vftable->super.super.Destructor + 0x17))(v4->__vftable);
      v4 = (NiD3DShader *)((char *)v4 + 4);
      --v5;
    }
    while ( v5 );
  }
  v6 = (NiD3DShader *)((char *)this + 0xE8);
  v7 = 3;
  do
  {
    v8 = *(_DWORD *)&v6[0xFFFFFFFF].member.Passes.capacity;
    if ( v8 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x44))(v8);
    if ( v6->__vftable )
      (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v6->__vftable->super.super.Destructor + 0x11))(v6->__vftable);
    v6 = (NiD3DShader *)((char *)v6 + 4);
    --v7;
  }
  while ( v7 );
  return sub_7C90B0(this);
}
