NiSurfaceData *__thiscall sub_9A1FB0(NiRenderTargetGroup *this)
{
  NiDepthStencilBuffer *DepthStencilBuffer; // eax
  NiDX92DBufferData *data; // ecx

  DepthStencilBuffer = this->members.DepthStencilBuffer; /*0x9a1fb0*/
  if ( DepthStencilBuffer && (data = DepthStencilBuffer->members.data) != 0 ) /*0x9a1fbc*/
    return data->__vftable->GetSurfaceData(data); /*0x9a1fc3*/
  else
    return 0; /*0x9a1fc5*/
}
