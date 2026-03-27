NiGeometryBufferData *__thiscall sub_77A310(NiD3DShader *this, int a2, int a5, NiGeometryBufferData *a4, int _1C)
{
  NiTriShapeData *v6; // eax
  _DWORD *v7; // edx
  NiGeometryBufferData *BuffData; // edi
  UInt32 StreamCount; // eax
  UINT i; // esi
  NiVBChip *v11; // ecx

  if ( a2 && (!this->member.CurrentPassIndex || (*(_WORD *)(*(_DWORD *)(a2 + 0xB4) + 0x2E) & 0xF000) == 0x8000 && a5) )
  {
    v6 = *(NiTriShapeData **)(a2 + 0xB4);
    v7 = *(_DWORD **)(a2 + 0xB8);
    if ( a5 )
    {
      BuffData = *(NiGeometryBufferData **)(a5 + 0x28);
      NiDX9Renderer::PackSkinnedGeometryBuffer(
        this->member.super.D3DRenderer,
        (int)BuffData,
        (int)v6,
        (int)v7,
        a5,
        this->member.ShaderDeclaration,
        0);
    }
    else
    {
      BuffData = v6->member.super.super.BuffData;
      NiDX9Renderer::PackGeometryBuffers(
        this->member.super.D3DRenderer,
        BuffData,
        v6,
        v7,
        this->member.ShaderDeclaration,
        0);
    }
  }
  else
  {
    BuffData = a4;
  }
  if ( BuffData )
  {
    StreamCount = BuffData->StreamCount;
    for ( i = 0; i < StreamCount; ++i )
    {
      if ( i >= StreamCount )
        v11 = 0;
      else
        v11 = BuffData->VBChip[i];
      this->member.super.D3DDevice->lpVtbl->SetStreamSource(
        this->member.super.D3DDevice,
        i,
        v11->VB,
        0,
        BuffData->VertexStride[i]);
      StreamCount = BuffData->StreamCount;
    }
    this->member.super.D3DDevice->lpVtbl->SetIndices(this->member.super.D3DDevice, BuffData->IB);
  }
  return BuffData;
}
