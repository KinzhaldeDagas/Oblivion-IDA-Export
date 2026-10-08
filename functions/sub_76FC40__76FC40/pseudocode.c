// Oblivion raw NiDX9 declaration-element writer. Validates stream and element indexes, stores the source descriptor, D3D declaration type, usage, usage index, and method in a 0x1C-byte record, marks the declaration dirty at +0x28, and releases the cached IDirect3DVertexDeclaration9 at +0x30.
char __thiscall NiDX9ShaderDeclaration_SetRawElement(
        NiDX9ShaderDeclaration *this,
        unsigned int streamIndex,
        unsigned int elementIndex,
        int sourceIndex,
        int sourceDescriptor,
        int declarationType,
        int usage,
        int usageIndex,
        int method)
{
  int v11; // eax
  bool v12; // zf
  _DWORD *v13; // eax
  UInt32 Unk030; // eax

  if ( elementIndex >= this->members.super.MaxStreamEntryCount || streamIndex >= this->members.super.StreamCount ) /*0x76fc59*/
    return 0; /*0x76fc4c*/
  v11 = *(_DWORD *)(0x10 * streamIndex + this->members.super.StreamEntries + 8); /*0x76fc6c*/
  v12 = *(_DWORD *)(v11 + 0x1C * elementIndex + 8) == sourceDescriptor; /*0x76fc81*/
  v13 = (_DWORD *)(v11 + 0x1C * elementIndex); /*0x76fc85*/
  if ( !v12 || v13[3] != declarationType || v13[5] != usage || v13[6] != usageIndex || v13[4] != method ) /*0x76fca0*/
  {
    v13[2] = sourceDescriptor; /*0x76fca5*/
    v13[3] = declarationType; /*0x76fca8*/
    v13[5] = usage; /*0x76fcab*/
    v13[6] = usageIndex; /*0x76fcae*/
    v13[4] = method; /*0x76fcb1*/
    if ( sourceDescriptor == 1 && declarationType != 0x10 ) /*0x76fcb9*/
      v13[3] = 2; /*0x76fcbb*/
    Unk030 = this->members.Declaration; /*0x76fcc2*/
    LOBYTE(this->members.super.Unk028) = 1; /*0x76fcc7*/
    if ( Unk030 ) /*0x76fccb*/
    {
      (*(void (__stdcall **)(UInt32))(*(_DWORD *)Unk030 + 8))(Unk030); /*0x76fcd3*/
      this->members.Declaration = 0; /*0x76fcd5*/
    }
  }
  return 1; /*0x76fc4e*/
}
