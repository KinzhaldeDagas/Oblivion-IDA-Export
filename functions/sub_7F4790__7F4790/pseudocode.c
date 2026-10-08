int __thiscall sub_7F4790(BoltShader *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebx
  BOOL v10; // edi
  int v11; // edi
  NiD3DTextureStage *v12; // ebp
  NiTexture *Texture; // ebx
  double v14; // st7
  int v15; // eax
  UInt32 v17; // [esp+1Ch] [ebp+10h]

  this->super.__vftable->super.RemoveShaderPassesMaybe((NiD3DShader *)this); /*0x7f479d*/
  v9 = *(_DWORD *)(a5 + 0x18); /*0x7f47a3*/
  if ( v9 ) /*0x7f47a8*/
    v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 0x54))(*(_DWORD *)(a5 + 0x18)) == 0xD; /*0x7f47bf*/
  else
    v10 = 0; /*0x7f47aa*/
  v11 = v10 ? v9 : 0;
  if ( v11 )
  {
    v12 = **(NiD3DTextureStage ***)(this->Unk00[0x3F] + 0x24); /*0x7f47d7*/
    Texture = v12->Texture; /*0x7f47d9*/
    if ( Texture ) /*0x7f47de*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x7f47e4*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x7f47fa*/
      v12->Texture = 0; /*0x7f47fc*/
    }
    NiD3DTextureStage_ApplyAddressModePreset(v12, 3u); /*0x7f4807*/
    this->Unk00[0x2F] = *(UInt32 *)(v11 + 0x7C); /*0x7f480f*/
    *(float *)&this->Unk00[0x30] = (double)*(int *)(v11 + 0x134) * (double)*(int *)(v11 + 0x14C); /*0x7f4822*/
    *(float *)&this->Unk00[0x31] = (float)*(int *)(v11 + 0x14C); /*0x7f482e*/
    this->Unk00[0x32] = *(UInt32 *)(v11 + 0x154); /*0x7f483a*/
    *(float *)&this->Unk00[0x33] = (float)*(int *)(v11 + 0x84); /*0x7f4846*/
    *(float *)&this->Unk00[0x34] = (float)*(int *)(v11 + 0x88); /*0x7f4852*/
    this->Unk00[0x35] = *(UInt32 *)(v11 + 0x144); /*0x7f485e*/
    this->Unk00[0x36] = *(UInt32 *)(v11 + 0x148); /*0x7f486a*/
    if ( *(_BYTE *)(v11 + 0x180) ) /*0x7f4870*/
      v14 = kTerrainLODQuadRayDirectionZ; /*0x7f4879*/
    else
      v14 = 1.0; /*0x7f4881*/
    *(float *)&v17 = v14; /*0x7f4883*/
    this->Unk00[0x37] = v17; /*0x7f488b*/
    this->Unk00[0x38] = *(UInt32 *)(v11 + 0x198); /*0x7f4897*/
    this->Unk00[0x39] = *(UInt32 *)(v11 + 0x18C); /*0x7f48a3*/
    this->Unk00[0x3A] = *(UInt32 *)(v11 + 0x90); /*0x7f48af*/
    this->Unk00[0x40] = *(_DWORD *)(v11 + 0x160); /*0x7f48bb*/
    this->Unk00[0x41] = *(_DWORD *)(v11 + 0x164); /*0x7f48c7*/
    this->Unk00[0x42] = *(_DWORD *)(v11 + 0x168); /*0x7f48d3*/
    this->Unk00[0x43] = *(_DWORD *)(v11 + 0x16C); /*0x7f48df*/
    this->Unk00[0x44] = *(_DWORD *)(v11 + 0x170); /*0x7f48eb*/
    this->Unk00[0x45] = *(_DWORD *)(v11 + 0x174); /*0x7f48f7*/
    this->Unk00[0x46] = *(_DWORD *)(v11 + 0x178); /*0x7f4903*/
    this->Unk00[0x47] = *(_DWORD *)(v11 + 0x17C); /*0x7f490f*/
    v15 = unk_B468FC; /*0x7f4915*/
    if ( !unk_B468FC )
    {
      v15 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ? 0x4B : 0xEB;
      unk_B468FC = v15; /*0x7f4933*/
    }
    memcpy((void *)this->Unk00[1], *(const void **)(v11 + 0x6C), 0x10 * v15); /*0x7f4947*/
    NiTArray_NiD3DPass_SetAt( /*0x7f495d*/
      &this->super.member.super.Passes,
      this->super.member.super.PassCount,
      (NiD3DPass **)&this->Unk00[0x3F]);
    ++this->super.member.super.PassCount; /*0x7f4962*/
  }
  return 0; /*0x7f4966*/
}
