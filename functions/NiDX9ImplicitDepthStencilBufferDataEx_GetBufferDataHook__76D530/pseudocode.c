// Recreates renderer data for the device's implicit depth/stencil buffer: releases the prior surface, calls GetDepthStencilSurface, reads its D3DSURFACE_DESC, refreshes NiSurfaceData, and propagates width/height to the parent Ni2DBuffer.
bool __thiscall NiDX9ImplicitDepthStencilBufferData::Recreate(void *this, IDirect3DDevice9 *device)
{
  IDirect3DSurface9 **v3; // esi
  NiSurfaceData *SurfaceData; // eax
  _DWORD *v6; // ecx
  D3DFORMAT v7; // [esp+0h] [ebp-30h]
  D3DFORMAT v8; // [esp+4h] [ebp-2Ch]
  D3DFORMAT a1[8]; // [esp+10h] [ebp-20h] BYREF

  v3 = (IDirect3DSurface9 **)((char *)this + 0xC); /*0x76d53b*/
  if ( *((_DWORD *)this + 3) ) /*0x76d537*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x2C))(this); /*0x76d545*/
  if ( (int)device->lpVtbl->GetDepthStencilSurface(device, v3) < 0 ) /*0x76d559*/
    return 0; /*0x76d559*/
  if ( (int)(*v3)->lpVtbl->GetDesc(*v3, (D3DSURFACE_DESC *)a1) < 0 ) /*0x76d56c*/
  {
    (*v3)->lpVtbl->Release(*v3); /*0x76d576*/
    *v3 = 0; /*0x76d578*/
    return 0; /*0x76d585*/
  }
  SurfaceData = CreateSurfaceData(a1[0]); /*0x76d58d*/
  v8 = a1[7]; /*0x76d59d*/
  v6 = *((_DWORD **)this + 2); /*0x76d59e*/
  v7 = a1[6]; /*0x76d5a1*/
  *((_DWORD *)this + 4) = SurfaceData; /*0x76d5a2*/
  sub_731E40(v6, v7, v8); /*0x76d5a5*/
  return 1; /*0x76d57e*/
}
