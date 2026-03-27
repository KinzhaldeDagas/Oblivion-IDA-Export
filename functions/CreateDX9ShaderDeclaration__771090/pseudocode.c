NiDX9ShaderDeclaration *__cdecl CreateDX9ShaderDeclaration(NiDX9Renderer *a1, int a2, unsigned int StreamCount)
{
  NiDX9ShaderDeclaration *v4; // eax
  NiDX9ShaderDeclaration *v5; // esi

  if ( StreamCount > a1->member.MaxStreams )
    return 0;
  v4 = (NiDX9ShaderDeclaration *)FormHeapAlloc(0x38u);
  v5 = v4;
  if ( !v4 )
    return 0;
  NiD3DShaderDeclaration::NiD3DShaderDeclaration((NiD3DShaderDeclaration *)v4);
  v5->__vftable = (#9279 *)&NiDX9ShaderDeclaration::`vftable';
  v5->members.Unk02C = 0;
  v5->members.Unk030 = 0;
  v5->members.Unk034 = 0;
  if ( !sub_76E320(v5, a1, a2, StreamCount) )
  {
    (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))v5->__vftable)(v5, 1);
    return 0;
  }
  return v5;
}
