NiDX9RenderState *__cdecl sub_75FB30(NiDX9Renderer *a1)
{
  IDirect3DDevice9 *device; // esi
  NiDX9RenderState *result; // eax

  GlobalRenderPtr = a1;
  if ( a1 )
  {
    device = a1->member.device;
    if ( dword_B42038 )
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_B42038 + 8))(dword_B42038);
    dword_B42038 = (int)device;
    if ( device )
      device->lpVtbl->AddRef(device);
    result = GlobalRenderPtr->member.renderState;
    renderStateG = result;
  }
  else
  {
    result = (NiDX9RenderState *)dword_B42038;
    if ( dword_B42038 )
      result = (NiDX9RenderState *)((int (__stdcall *)(int))result->vtbl->SetAlpha)(dword_B42038);
    dword_B42038 = 0;
    renderStateG = 0;
  }
  return result;
}
