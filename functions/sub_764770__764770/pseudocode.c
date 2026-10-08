// DX9 compatible-surface selector: convert the render-target pixel format, query device-format capabilities, choose a compatible depth/stencil D3DFORMAT, and return its NiSurfaceData.
NiSurfaceData *__thiscall NiDX9Renderer_SelectCompatibleSurfaceData(
        NiDX9Renderer *this,
        NiSurfaceData *renderTargetSurfaceData,
        unsigned int desiredDepthBits,
        unsigned int desiredStencilBits)
{
  void *v6; // eax
  int v7; // edi
  D3DFORMAT v8; // eax
  D3DFORMAT v9; // eax

  if ( renderTargetSurfaceData /*0x7647c9*/
    && (v6 = this->member.defaultRTGroup->vtbl->GetRenderTargetData(this->member.defaultRTGroup, 0),
        v7 = sub_497DD0((int)&stru_B4265C, (int)v6),
        v8 = NiDX9Renderer_ConvertPixelFormatToD3DFormat(renderTargetSurfaceData),
        (v9 = NiDX9DeviceDesc_SelectCompatibleDepthStencilFormat(
                (_DWORD *)this->member.deviceDesc,
                *(_DWORD *)(v7 + 0x1C),
                v8,
                desiredDepthBits,
                desiredStencilBits)) != D3DFMT_UNKNOWN) )
  {
    return CreateSurfaceData(v9); /*0x7647cc*/
  }
  else
  {
    return 0; /*0x76477d*/
  }
}
