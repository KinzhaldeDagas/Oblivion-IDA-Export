NiDX9RenderState *__thiscall NiD3DShaderInterface::SetDX9Renderer(NiD3DShaderInterface *this, NiDX9Renderer *a2)
{
  IDirect3DDevice9 *device; // edi
  IDirect3DDevice9 *D3DDevice; // eax
  NiDX9RenderState *result; // eax

  this->member.D3DRenderer = a2; /*0x7790f9*/
  if ( a2 ) /*0x7790fc*/
  {
    device = a2->member.device; /*0x7790ff*/
    D3DDevice = this->member.D3DDevice; /*0x779105*/
    if ( D3DDevice ) /*0x77910a*/
      D3DDevice->lpVtbl->Release(this->member.D3DDevice); /*0x779112*/
    this->member.D3DDevice = device; /*0x779116*/
    if ( device ) /*0x779119*/
      device->lpVtbl->AddRef(device); /*0x779121*/
    result = this->member.D3DRenderer->member.renderState; /*0x779126*/
    this->member.D3DRenderState = result; /*0x77912d*/
  }
  else
  {
    result = (NiDX9RenderState *)this->member.D3DDevice; /*0x779134*/
    this->member.D3DRenderState = 0; /*0x779139*/
    if ( result ) /*0x779140*/
      result = (NiDX9RenderState *)((int (__stdcall *)(NiDX9RenderState *))result->vtbl->SetAlpha)(result); /*0x779148*/
    this->member.D3DDevice = 0; /*0x77914a*/
  }
  return result; /*0x779130*/
}
