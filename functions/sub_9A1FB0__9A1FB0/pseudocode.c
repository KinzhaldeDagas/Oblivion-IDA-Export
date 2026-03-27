NiSurfaceData *__thiscall sub_9A1FB0(NiRenderTargetGroup *this)
{
  NiDepthStencilBuffer *DepthStencilBuffer; // eax
  NiDX92DBufferData *data; // ecx

  DepthStencilBuffer = this->members.DepthStencilBuffer;
  if ( DepthStencilBuffer && (data = DepthStencilBuffer->members.data) != 0 )
    return data->__vftable->GetSurfaceData(data);
  else
    return 0;
}
