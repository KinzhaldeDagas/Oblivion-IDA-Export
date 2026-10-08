NiD3DPass *__thiscall sub_80B710(NiD3DShader *this)
{
  NiD3DShader *v2; // esi
  int v3; // edi
  NiD3DShader *v4; // esi
  int v5; // edi
  NiD3DShader *v6; // esi
  int v7; // edi
  int v8; // ecx

  if ( this->member.ShaderDeclaration ) /*0x80b713*/
  {
    v2 = (NiD3DShader *)((char *)this + 0xA4); /*0x80b71b*/
    v3 = 7; /*0x80b721*/
    do /*0x80b739*/
    {
      if ( v2->__vftable ) /*0x80b726*/
        (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v2->__vftable->super.super.Destructor + 0x17))(v2->__vftable); /*0x80b731*/
      v2 = (NiD3DShader *)((char *)v2 + 4); /*0x80b733*/
      --v3; /*0x80b736*/
    }
    while ( v3 ); /*0x80b739*/
    v4 = (NiD3DShader *)((char *)this + 0xCC); /*0x80b73b*/
    v5 = 7; /*0x80b741*/
    do /*0x80b759*/
    {
      if ( v4->__vftable ) /*0x80b746*/
        (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v4->__vftable->super.super.Destructor + 0x17))(v4->__vftable); /*0x80b751*/
      v4 = (NiD3DShader *)((char *)v4 + 4); /*0x80b753*/
      --v5; /*0x80b756*/
    }
    while ( v5 ); /*0x80b759*/
  }
  v6 = (NiD3DShader *)((char *)this + 0xE8); /*0x80b75b*/
  v7 = 3; /*0x80b761*/
  do /*0x80b787*/
  {
    v8 = *(_DWORD *)&v6[0xFFFFFFFF].member.Passes.capacity; /*0x80b766*/
    if ( v8 ) /*0x80b76b*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x44))(v8); /*0x80b772*/
    if ( v6->__vftable ) /*0x80b774*/
      (*((void (__thiscall **)(NiD3DShaderInterfaceVtbl *))v6->__vftable->super.super.Destructor + 0x11))(v6->__vftable); /*0x80b77f*/
    v6 = (NiD3DShader *)((char *)v6 + 4); /*0x80b781*/
    --v7; /*0x80b784*/
  }
  while ( v7 ); /*0x80b787*/
  return sub_7C90B0(this); /*0x80b789*/
}
