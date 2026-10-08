// Creates NiDX9AdditionalDepthStencilBufferData for a requested NiPixelFormat. Converts and validates the D3DFORMAT against the current adapter/backbuffer, creates a matching depth/stencil surface at the parent buffer dimensions, registers it for reset reconstruction, and attaches it to the Ni2DBuffer.
NiDX9AdditionalDepthStencilBufferData *__cdecl NiDX9AdditionalDepthStencilBufferData::Create(
        IDirect3DDevice9 *device,
        Ni2DBuffer **parentBuffer,
        const void *pixelFormat)
{
  NiDX9AdditionalDepthStencilBufferData *result; // eax
  NiDX9AdditionalDepthStencilBufferData *v4; // ebx
  NiDX9Renderer *v5; // esi
  NiRenderTargetGroup *v6; // eax
  IDirect3D9 *v7; // edi
  int v8; // eax
  signed int v9; // eax
  void *v10; // ecx
  NiDX9AdditionalDepthStencilBufferData *v11; // eax
  NiDX9AdditionalDepthStencilBufferData *v12; // esi
  HRESULT v13; // eax
  void *v14; // ecx
  D3DSURFACE_DESC a1; // [esp+4Ch] [ebp-20h] BYREF

  result = (NiDX9AdditionalDepthStencilBufferData *)pixelFormat; /*0x76de00*/
  if ( pixelFormat ) /*0x76de09*/
  {
    result = (NiDX9AdditionalDepthStencilBufferData *)NiDX9Renderer_ConvertPixelFormatToD3DFormat(pixelFormat); /*0x76de11*/
    v4 = result; /*0x76de16*/
    if ( result ) /*0x76de1d*/
    {
      v5 = renderer; /*0x76de25*/
      v6 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x76de33*/
      v7 = g_Direct3D9; /*0x76de37*/
      v8 = (int)v6->vtbl->GetPixelFormat(v6, 0); /*0x76de44*/
      v9 = (signed int)v7->lpVtbl->CheckDeviceFormat( /*0x76de63*/
                         v7,
                         v5->member.adapterIdx,
                         (D3DDEVTYPE)v5->member.d3dDevType,
                         *(D3DFORMAT *)(v8 + 0xC),
                         2,
                         D3DRTYPE_SURFACE,
                         (D3DFORMAT)v4);
      if ( v9 < 0 ) /*0x76de67*/
      {
        D3D9_HResultToString(v9); /*0x76de6a*/
        Shared_NoOpVirtual_60D0A0(v10); /*0x76de75*/
        return 0; /*0x76de85*/
      }
      v11 = (NiDX9AdditionalDepthStencilBufferData *)FormHeapAlloc(0x1Cu); /*0x76de88*/
      if ( v11 ) /*0x76de92*/
        v12 = NiDX9AdditionalDepthStencilBufferData::NiDX9AdditionalDepthStencilBufferData(v11); /*0x76de9b*/
      else
        v12 = 0; /*0x76de9f*/
      *((_DWORD *)v12 + 6) = dword_B294EC; /*0x76deae*/
      v13 = device->lpVtbl->CreateDepthStencilSurface( /*0x76ded6*/
              device,
              (*parentBuffer)->members.width,
              (*parentBuffer)->members.height,
              v4,
              0,
              0,
              *((_DWORD *)v12 + 6),
              (char *)v12 + 0xC,
              0);
      if ( (int)v13 < 0 ) /*0x76dedb*/
      {
        D3D9_HResultToString((unsigned int)v13); /*0x76dede*/
        Shared_NoOpVirtual_60D0A0(v14); /*0x76dee9*/
LABEL_10:
        (**(void (__thiscall ***)(NiDX9AdditionalDepthStencilBufferData *, int))v12)(v12, 1); /*0x76def1*/
        return 0; /*0x76df03*/
      }
      if ( (*(int (__stdcall **)(_DWORD, D3DSURFACE_DESC *))(**((_DWORD **)v12 + 3) + 0x30))(*((_DWORD *)v12 + 3), &a1) < 0 ) /*0x76df15*/
        goto LABEL_10; /*0x76df15*/
      *((_DWORD *)v12 + 4) = CreateSurfaceData(a1.Format); /*0x76df28*/
      *((_DWORD *)v12 + 5) = v4; /*0x76df2b*/
      sub_70BD60(*parentBuffer, (NiDX9TextureBufferData *)v12); /*0x76df31*/
      *((_DWORD *)v12 + 2) = *parentBuffer; /*0x76df39*/
      return v12; /*0x76df3c*/
    }
  }
  return result; /*0x76de0b*/
}
