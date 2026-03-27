NiDX9RenderState *__thiscall NiD3DShaderInterface::SetDX9Renderer(NiD3DShaderInterface *this, NiDX9Renderer *a2)
{
  IDirect3DDevice9 *device; // edi
  IDirect3DDevice9 *D3DDevice; // eax
  NiDX9RenderState *result; // eax

  this->member.D3DRenderer = a2;
  if ( a2 )
  {
    device = a2->member.device;
    D3DDevice = this->member.D3DDevice;
    if ( D3DDevice )
      D3DDevice->lpVtbl->Release(this->member.D3DDevice);
    this->member.D3DDevice = device;
    if ( device )
      device->lpVtbl->AddRef(device);
    result = this->member.D3DRenderer->member.renderState;
    this->member.D3DRenderState = result;
  }
  else
  {
    result = (NiDX9RenderState *)this->member.D3DDevice;
    this->member.D3DRenderState = 0;
    if ( result )
      result = (NiDX9RenderState *)((int (__stdcall *)(NiDX9RenderState *))result->vtbl->SetAlpha)(result);
    this->member.D3DDevice = 0;
  }
  return result;
}
