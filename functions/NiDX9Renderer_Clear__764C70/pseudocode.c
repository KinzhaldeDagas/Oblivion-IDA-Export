// Clear an optional normalized rectangle of the current target. Save the incoming D3D viewport, install a full-current-target viewport, issue a capability-filtered color/depth/stencil Clear, then restore the saved viewport.
void __thiscall NiDX9Renderer_Clear(NiDX9Renderer *this, const NiViewport *normalizedRect, unsigned int clearFlags)
{
  int v4; // ebp
  int v5; // eax
  int v6; // edi
  double v7; // st7
  double v8; // st7
  int v9; // eax
  double v10; // st5
  NiRenderTargetGroup *currentRTGroup; // ecx
  unsigned int v12; // edi
  int v13; // eax
  NiDX92DBufferData *v14; // eax
  NiDX92DBufferData *v15; // ebp
  int v16; // eax
  int v17; // edi
  int v18; // eax
  DWORD v19; // eax
  NiRenderTargetGroup *v20; // ecx
  int v21; // [esp+38h] [ebp-28h] BYREF
  int v22; // [esp+40h] [ebp-20h]
  int v23; // [esp+44h] [ebp-1Ch]
  _DWORD v24[2]; // [esp+48h] [ebp-18h] BYREF
  _BYTE v25[16]; // [esp+50h] [ebp-10h] BYREF
  int v26; // [esp+6Ch] [ebp+Ch]
  float v27; // [esp+6Ch] [ebp+Ch]
  float v28; // [esp+70h] [ebp+10h]

  if ( clearFlags ) /*0x764c7d*/
  {
    if ( !this->member.lostDevice ) /*0x764c83*/
    {
      v4 = this->member.currentRTGroup->vtbl->GetWidth(this->member.currentRTGroup, 0); /*0x764ca7*/
      v5 = this->member.currentRTGroup->vtbl->GetHeight(this->member.currentRTGroup, 0); /*0x764cb0*/
      v6 = v26; /*0x764cb2*/
      if ( v26 ) /*0x764cba*/
      {
        v7 = (double)v4; /*0x764cc2*/
        if ( v4 < 0 ) /*0x764cc6*/
          v7 = v7 + flt_A2FC78; /*0x764cc8*/
        v28 = v7; /*0x764cd0*/
        v8 = (double)v5; /*0x764cd8*/
        if ( v5 < 0 ) /*0x764cdc*/
          v8 = v8 + flt_A2FC78; /*0x764cde*/
        v27 = v8; /*0x764ce4*/
        v22 = Double_To_SInt32(v28); /*0x764cfe*/
        v23 = Double_To_SInt32(v28); /*0x764d1a*/
        v9 = Double_To_SInt32(1.0); /*0x764d20*/
        v10 = *(float *)(v6 + 0xC); /*0x764d25*/
        v24[0] = v9; /*0x764d2a*/
        v5 = Double_To_SInt32((1.0 - v10) * v27); /*0x764d30*/
      }
      else
      {
        v22 = 0;                                // With no optional normalized rectangle, build one D3DRECT covering the complete current target. /*0x764d37*/
        v23 = 0; /*0x764d3b*/
        v24[0] = v4; /*0x764d3f*/
      }
      currentRTGroup = this->member.currentRTGroup; /*0x764d43*/
      v24[1] = v5; /*0x764d49*/
      v12 = clearFlags & 1; /*0x764d57*/
      v13 = (int)currentRTGroup->vtbl->GetDepthStencilBufferRendererData(currentRTGroup); /*0x764d5a*/
      v14 = (NiDX92DBufferData *)sub_497DD0((int)&stru_B4263C, v13); /*0x764d62*/
      v15 = v14; /*0x764d67*/
      if ( v14 ) /*0x764d6e*/
      {
        if ( (clearFlags & 4) != 0 && NiDX92DBufferData_HasDepthComponent(v14) ) /*0x764d77*/
          v16 = 2; /*0x764d80*/
        else
          v16 = 0; /*0x764d87*/
        v17 = v16 | v12; /*0x764d89*/
        if ( (clearFlags & 2) != 0 && NiDX92DBufferData_HasStencilComponent(v15) ) /*0x764d92*/
          v18 = 4; /*0x764d9b*/
        else
          v18 = 0; /*0x764da2*/
        v12 = v18 | v17; /*0x764da4*/
      }
      ((void (__cdecl *)(IDirect3DDevice9 *, _BYTE *))this->member.device->lpVtbl->GetViewport)( /*0x764dba*/
        this->member.device,
        v25);                                   // Save the incoming D3D viewport before the clear-only full-target viewport override.
      v19 = this->member.currentRTGroup->vtbl->GetWidth(this->member.currentRTGroup, 0); /*0x764dc9*/
      v20 = this->member.currentRTGroup; /*0x764dcb*/
      this->member.viewport.Width = v19; /*0x764dd1*/
      this->member.viewport.Height = v20->vtbl->GetHeight(v20, 0); /*0x764de0*/
      this->member.device->lpVtbl->SetViewport(this->member.device, &this->member.viewport);// Install the renderer's full-current-target viewport for the Clear call. /*0x764dfc*/
      ((void (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->member.device->lpVtbl->Clear)( /*0x764e2d*/
        this->member.device,
        1,
        (const D3DRECT *)&v21,
        v12,
        this->member.clearColor,
        this->member.clearDepth,
        this->member.clearStencil);             // Issue IDirect3DDevice9::Clear for one target-sized rectangle; requested Z/stencil bits are included only when the attached surface format supports them.
      this->member.device->lpVtbl->SetViewport(this->member.device, (const D3DVIEWPORT9 *)v24);// Restore the exact D3D viewport saved before Clear. /*0x764e43*/
    }
  }
}
