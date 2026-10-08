// DirectX10OBSE authority: Oblivion declaration element emitter. Uses B29858/B2983C/B298A0 type-method-usage tables and returns the D3D9 element byte size; DX10 input-layout mapping follows this emitted declaration surface.
// Comparative declaration family verified 2026-10-01: Fallout 827AFA98 AddDeclarationEntry matches the field-mapping algorithm. Oblivion uses entry PackingOffset+4, Input+8, Type+C, Method+10, Usage+14, UsageIndex+18; emits 8-byte DX9 elements through B29858/B2983C/B298A0 and returns B42708[type] for type<12h (18 decimal). These fields and the 28-byte entry/16-byte stream structures were typed from Oblivion accesses and allocation sizes. Unknown entry+0 and stream+4 remain explicitly unknown.
unsigned int __thiscall NiDX9ShaderDeclaration_AddDeclarationEntry(
        NiDX9ShaderDeclaration *self,
        OblivionShaderDeclarationEntry *entry,
        unsigned __int16 stream)
{
  self->members.Elements[self->members.super.DeclarationElementCount].Stream = stream; /*0x77015d*/
  self->members.Elements[self->members.super.DeclarationElementCount].Offset = entry->PackingOffset; /*0x770170*/
  self->members.Elements[self->members.super.DeclarationElementCount].Type = *(_BYTE *)(4 * entry->Type + 0xB29858); /*0x770186*/
  self->members.Elements[self->members.super.DeclarationElementCount].Method = *(_BYTE *)(4 * entry->Method + 0xB2983C); /*0x77019b*/
  self->members.Elements[self->members.super.DeclarationElementCount].Usage = *(_BYTE *)(4 * entry->Usage + 0xB298A0); /*0x7701b0*/
  self->members.Elements[self->members.super.DeclarationElementCount++].UsageIndex = entry->UsageIndex; /*0x7701bd*/
  if ( (int)entry->Type < 0x12 ) /*0x7701cc*/
    return *(_DWORD *)(4 * entry->Type + 0xB42708); /*0x7701d6*/
  else
    return 0; /*0x7701ce*/
}
