// Recreates an additional depth/stencil surface after device reset. Validates the stored depth format against the current default framebuffer with IDirect3D9::CheckDeviceFormat, calls CreateDepthStencilSurface using saved width/height/multisample settings, and rebuilds NiSurfaceData.
bool __thiscall NiDX9AdditionalDepthStencilBufferData::Recreate(
        NiDX9AdditionalDepthStencilBufferData *this,
        IDirect3DDevice9 *device)
{
  NiDX9Renderer *v4; // esi
  NiRenderTargetGroup *v5; // eax
  IDirect3D9 *v6; // ebx
  int v7; // eax
  HRESULT v8; // eax
  _DWORD *v9; // esi
  void *v10; // ecx
  D3DFORMAT a1[8]; // [esp+4Ch] [ebp-20h] BYREF

  if ( *((_DWORD *)this + 3) ) /*0x76d5c6*/
    (*(void (__thiscall **)(NiDX9AdditionalDepthStencilBufferData *))(*(_DWORD *)this + 0x2C))(this); /*0x76d5d1*/
  if ( !*((_DWORD *)this + 5) ) /*0x76d5d3*/
    return 0; /*0x76d5d9*/
  v4 = renderer; /*0x76d5e5*/
  v5 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x76d5f2*/
  v6 = g_Direct3D9; /*0x76d5f6*/
  v7 = (int)v5->vtbl->GetPixelFormat(v5, 0); /*0x76d603*/
  v8 = v6->lpVtbl->CheckDeviceFormat( /*0x76d625*/
         v6,
         v4->member.adapterIdx,
         (D3DDEVTYPE)v4->member.d3dDevType,
         *(D3DFORMAT *)(v7 + 0xC),
         2,
         D3DRTYPE_SURFACE,
         *((D3DFORMAT *)this + 5));
  if ( (int)v8 >= 0 /*0x76d656*/
    && (v9 = (_DWORD *)((char *)this + 0xC),
        v8 = device->lpVtbl->CreateDepthStencilSurface(
               device,
               *(_DWORD *)(*((_DWORD *)this + 2) + 8),
               *(_DWORD *)(*((_DWORD *)this + 2) + 0xC),
               *((_DWORD *)this + 5),
               0,
               0,
               *((_DWORD *)this + 6),
               (char *)this + 0xC,
               0),
        (int)v8 >= 0) )
  {
    if ( (*(int (__stdcall **)(_DWORD, D3DFORMAT *))(*(_DWORD *)*v9 + 0x30))(*v9, a1) >= 0 ) /*0x76d689*/
    {
      *((_DWORD *)this + 4) = CreateSurfaceData(a1[0]); /*0x76d6b6*/
      return 1; /*0x76d6ba*/
    }
    else
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v9 + 8))(*v9); /*0x76d693*/
      *v9 = 0; /*0x76d695*/
      return 0; /*0x76d69e*/
    }
  }
  else
  {
    D3D9_HResultToString((unsigned int)v8); /*0x76d659*/
    Shared_NoOpVirtual_60D0A0(v10); /*0x76d664*/
    return 0; /*0x76d66f*/
  }
}
