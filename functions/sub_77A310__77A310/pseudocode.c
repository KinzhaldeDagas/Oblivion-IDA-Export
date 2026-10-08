// Oblivion NiD3DShader geometry binder. Uses the currently selected ShaderDeclaration while packing normal or hardware-skinned geometry buffers, then binds every resulting vertex stream with SetStreamSource and binds the index buffer.
NiGeometryBufferData *__thiscall NiD3DShader_BindGeometryBuffers(
        NiD3DShader *this,
        NiGeometry *geometry,
        void *skinPartitionRecord,
        NiGeometryBufferData *existingBuffer,
        unsigned int unused)
{
  NiTriShapeData *geomData; // eax
  NiObject *skinData; // edx
  NiGeometryBufferData *BuffData; // edi
  UInt32 StreamCount; // eax
  UINT i; // esi
  NiVBChip *v11; // ecx

  if ( geometry /*0x77a33d*/
    && (!this->member.CurrentPassIndex
     || (geometry->member.geomData->member.m_usDirtyFlags & 0xF000) == 0x8000 && skinPartitionRecord) )
  {
    geomData = (NiTriShapeData *)geometry->member.geomData; /*0x77a341*/
    skinData = geometry->member.skinData; /*0x77a347*/
    if ( skinPartitionRecord ) /*0x77a34f*/
    {
      BuffData = *((NiGeometryBufferData **)skinPartitionRecord + 0xA); /*0x77a354*/
      NiDX9Renderer::PackSkinnedGeometryBuffer( /*0x77a35f*/
        this->member.super.D3DRenderer,
        (int)BuffData,
        (int)geomData,
        (int)skinData,
        (int)skinPartitionRecord,
        this->member.ShaderDeclaration,
        0);                                     // Pack hardware-skinned geometry with the active Lighting30 ShaderDeclaration.
    }
    else
    {
      BuffData = geomData->member.super.super.BuffData; /*0x77a369*/
      NiDX9Renderer::PackGeometryBuffers( /*0x77a373*/
        this->member.super.D3DRenderer,
        BuffData,
        geomData,
        skinData,
        this->member.ShaderDeclaration,
        0);                                     // Pack non-skinned geometry with the active Lighting30 ShaderDeclaration.
    }
  }
  else
  {
    BuffData = existingBuffer; /*0x77a37a*/
  }
  if ( BuffData ) /*0x77a380*/
  {
    StreamCount = BuffData->StreamCount; /*0x77a382*/
    for ( i = 0; i < StreamCount; ++i ) /*0x77a389*/
    {
      if ( i >= StreamCount ) /*0x77a39c*/
        v11 = 0; /*0x77a3a6*/
      else
        v11 = BuffData->VBChip[i]; /*0x77a3a1*/
      this->member.super.D3DDevice->lpVtbl->SetStreamSource( /*0x77a3bc*/
        this->member.super.D3DDevice,
        i,
        v11->VB,
        0,
        BuffData->VertexStride[i]);
      StreamCount = BuffData->StreamCount; /*0x77a3be*/
    }
    this->member.super.D3DDevice->lpVtbl->SetIndices(this->member.super.D3DDevice, BuffData->IB); /*0x77a3d9*/
  }
  return BuffData; /*0x77a3dd*/
}
