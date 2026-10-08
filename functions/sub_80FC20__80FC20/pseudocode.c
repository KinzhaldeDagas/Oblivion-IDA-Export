// SpeedTreeBranchShader setup-program virtual: reuses shader definition 1 constant maps for current branch pass, then forwards to generic SetupShaderPrograms.
NiObjectNET *__thiscall sub_80FC20(
        NiD3DShader *this,
        NiObjectNET *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  BSShader *shader; // edi

  shader = GetShaderDefinition(1u)->shader; /*0x80fc3b*/
  ((void (__thiscall *)(NiD3DShaderConstantMap *, NiD3DPixelShader *, NiObjectNET *, int, int, int, int, int, int, int, UInt32, int))shader->member.super.PixelConstantMap->_vtbl->sub_9A8E30)( /*0x80fc73*/
    shader->member.super.PixelConstantMap,
    this->member.CurrentPass->PixelShader,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    this->member.CurrentPassIndex,
    1);
  ((void (__thiscall *)(NiD3DShaderConstantMap *, NiD3DVertexShader *, NiObjectNET *, int, int, int, int, int, int, int, UInt32, int))shader->member.super.VertexConstantMap->_vtbl->sub_9A8E30)( /*0x80fcaa*/
    shader->member.super.VertexConstantMap,
    this->member.CurrentPass->VertexShader,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    this->member.CurrentPassIndex,
    1);
  return NiD3DShader__SetupShaderPrograms(this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x80fccf*/
}
