//
// Verified vtableA8997C slot12/+0x30 (xrefA899AC). Releases previous surface, clears cached RT0/DS bindings, replaces retained device+0x4C, AddRefs it, GetRenderTarget(0)->surface+0x0C, reads desc and updates parent dimensions and SurfaceData+0x10. Retains saved PresentParams+0x14; no sample count is selected here.
bool __thiscall NiDX9ImplicitBufferData_Recreate(NiDX9ImplicitBufferData *self, IDirect3DDevice9 *device)
{
  IDirect3DSurface9 **p_Surface; // edi
  IDirect3DDevice9 *v4; // eax
  void *v6; // ecx
  D3DFORMAT a1[8]; // [esp+1Ch] [ebp-20h] BYREF

  p_Surface = &self->super.Surface; /*0x76d6fb*/
  if ( self->super.Surface ) /*0x76d6f6*/
    self->__vftable->ReleaseSurface1((NiDX92DBufferData *)self); /*0x76d705*/
  g_D3D9BoundRenderTargetSurfaces[0] = 0; /*0x76d707*/
  g_D3D9BoundDepthStencilSurface = 0; /*0x76d711*/
  v4 = self->device; /*0x76d71b*/
  if ( v4 ) /*0x76d720*/
  {
    v4->lpVtbl->Release(self->device); /*0x76d728*/
    self->device = 0; /*0x76d72a*/
  }
  self->device = device; /*0x76d735*/
  device->lpVtbl->AddRef(device); /*0x76d73e*/
  if ( (int)self->device->lpVtbl->GetRenderTarget(self->device, 0, p_Surface) < 0 ) /*0x76d753*/
    return 0; /*0x76d753*/
  if ( (int)(*p_Surface)->lpVtbl->GetDesc(*p_Surface, (D3DSURFACE_DESC *)a1) < 0 ) /*0x76d766*/
  {
    (*p_Surface)->lpVtbl->Release(*p_Surface); /*0x76d770*/
    *p_Surface = 0; /*0x76d772*/
    return 0; /*0x76d77f*/
  }
  sub_731E40(&self->super.ParentData->__vftable, a1[6], a1[7]); /*0x76d78f*/
  self->super.SurfaceData = CreateSurfaceData(a1[0]); /*0x76d79e*/
  OB_D3DFormat_ToString_010201A0(a1[0]); /*0x76d7a6*/
  Shared_NoOpVirtual_60D0A0(v6); /*0x76d7b1*/
  return 1; /*0x76d778*/
}
