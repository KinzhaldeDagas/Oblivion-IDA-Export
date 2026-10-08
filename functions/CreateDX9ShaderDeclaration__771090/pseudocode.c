// Oblivion NiDX9 declaration factory. Allocates a 0x38-byte NiDX9ShaderDeclaration and initializes elementCount internal element records for each streamCount stream.
NiDX9ShaderDeclaration *__cdecl CreateDX9ShaderDeclaration(
        NiDX9Renderer *renderer,
        unsigned int elementCount,
        unsigned int streamCount)
{
  NiDX9ShaderDeclaration *v4; // eax
  NiDX9ShaderDeclaration *v5; // esi

  if ( streamCount > renderer->member.MaxStreams ) /*0x7710a0*/
    return 0; /*0x7710a6*/
  v4 = (NiDX9ShaderDeclaration *)FormHeapAlloc(0x38u); /*0x7710aa*/
  v5 = v4; /*0x7710af*/
  if ( !v4 ) /*0x7710b6*/
    return 0; /*0x7710b6*/
  NiD3DShaderDeclaration::NiD3DShaderDeclaration((NiD3DShaderDeclaration *)v4); /*0x7710ba*/
  v5->__vftable = (#9279 *)&NiDX9ShaderDeclaration::`vftable'; /*0x7710c8*/
  v5->members.Elements = 0; /*0x7710ce*/
  v5->members.Declaration = 0; /*0x7710d5*/
  v5->members.Unk034 = 0; /*0x7710dc*/
  if ( !NiDX9ShaderDeclaration__Initialize(v5, renderer, elementCount, streamCount) ) /*0x7710e0*/
  {
    (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))v5->__vftable)(v5, 1); /*0x7710f1*/
    return 0; /*0x7710f3*/
  }
  return v5; /*0x7710a2*/
}
