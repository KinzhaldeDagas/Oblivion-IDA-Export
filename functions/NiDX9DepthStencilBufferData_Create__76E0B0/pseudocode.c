// Creates NiDX9ImplicitDepthStencilBufferData around IDirect3DDevice9::GetDepthStencilSurface. Reads the surface description, creates or attaches the parent Ni2DBuffer, and records the surface in the renderer's depth/stencil binding cache.
void *__cdecl NiDX9ImplicitDepthStencilBufferData::Create(IDirect3DDevice9 *device, Ni2DBuffer **parentBuffer)
{
  NiDX9TextureBufferData *v2; // eax
  NiDX9TextureBufferData *v3; // esi
  IDirect3DSurface9 **p_Surface; // ebx
  IDirect3DSurface9 *v6; // edx
  D3DFORMAT a1[8]; // [esp+10h] [ebp-20h] BYREF

  v2 = (NiDX9TextureBufferData *)FormHeapAlloc(0x14u); /*0x76e0b8*/
  v3 = v2; /*0x76e0bd*/
  if ( v2 ) /*0x76e0c6*/
  {
    v2->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable'; /*0x76e0cd*/
    v2->member.super.super.m_uiRefCount = 0; /*0x76e0d3*/
    InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x76e0d6*/
    v3->member.super.ParentData = 0; /*0x76e0dc*/
    v3->member.super.Surface = 0; /*0x76e0df*/
    v3->member.super.SurfaceData = 0; /*0x76e0e2*/
    v3->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9ImplicitDepthStencilBufferData::`vftable'; /*0x76e0e5*/
  }
  else
  {
    v3 = 0; /*0x76e0ed*/
  }
  p_Surface = &v3->member.super.Surface; /*0x76e0fb*/
  if ( (int)device->lpVtbl->GetDepthStencilSurface(device, &v3->member.super.Surface) >= 0 ) /*0x76e104*/
  {
    if ( (int)(*p_Surface)->lpVtbl->GetDesc(*p_Surface, (D3DSURFACE_DESC *)a1) >= 0 ) /*0x76e12e*/
    {
      v3->member.super.SurfaceData = CreateSurfaceData(a1[0]); /*0x76e152*/
      if ( *parentBuffer ) /*0x76e155*/
        sub_70BD60(*parentBuffer, v3); /*0x76e175*/
      else
        *parentBuffer = (Ni2DBuffer *)sub_70BE70((NiObjectVtbl *)a1[6], a1[7], (int)v3); /*0x76e171*/
      v6 = *p_Surface; /*0x76e17c*/
      v3->member.super.ParentData = *parentBuffer; /*0x76e17f*/
      g_D3D9BoundDepthStencilSurface = v6; /*0x76e186*/
      return v3; /*0x76e182*/
    }
    else
    {
      v3->__vftable->super.Destructor((NiRefObject *)v3, 1); /*0x76e138*/
      return 0; /*0x76e13c*/
    }
  }
  else
  {
    if ( v3 ) /*0x76e108*/
      v3->__vftable->super.Destructor((NiRefObject *)v3, 1); /*0x76e112*/
    return 0; /*0x76e116*/
  }
}
