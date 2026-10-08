//
// Verified Oblivion factory, not an empty constructor: allocates0x50, initializes base, copies0x38-byte D3DPRESENT_PARAMETERS to+0x14, stores/AddRefs IDirect3DDevice9 at+0x4C, obtains RT0 via device slot38 and attaches to Ni2DBuffer. Corrects previous erroneous0x54 type with phantom format pointer at+0x14. MSVC COL ACCD44 has offset0; vtableA8997C confirms class. Evidence aligns Recreate76D6F0 and ReleaseResources76DC50.
NiDX9ImplicitBufferData *__cdecl NiDX9ImplicitBufferData_Create(
        IDirect3DDevice9 *device,
        const D3DPRESENT_PARAMETERS *parameters,
        Ni2DBuffer **parentBuffer)
{
  NiDX9ImplicitBufferData *v3; // eax
  NiDX9ImplicitBufferData *v4; // esi
  void *v6; // ecx
  NiDX9Renderer *v7; // edi
  Ni2DBuffer *Ni2DBuffer; // eax
  D3DFORMAT a1a[6]; // [esp+18h] [ebp-20h] BYREF
  int width; // [esp+30h] [ebp-8h]
  int a2; // [esp+34h] [ebp-4h]

  v3 = (NiDX9ImplicitBufferData *)FormHeapAlloc(0x50u); /*0x76df79*/
  v4 = v3; /*0x76df7e*/
  if ( v3 ) /*0x76df87*/
  {
    v3->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable'; /*0x76df8e*/
    v3->super.super.m_uiRefCount = 0; /*0x76df94*/
    InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x76df97*/
    v4->super.ParentData = 0; /*0x76df9d*/
    v4->super.Surface = 0; /*0x76dfa0*/
    v4->super.SurfaceData = 0; /*0x76dfa3*/
    v4->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9ImplicitBufferData::`vftable'; /*0x76dfa6*/
    v4->device = 0; /*0x76dfac*/
  }
  else
  {
    v4 = 0; /*0x76dfb1*/
  }
  memcpy(&v4->PresentParams, parameters, sizeof(v4->PresentParams)); /*0x76dfbe*/
  v4->device = device; /*0x76dfc7*/
  device->lpVtbl->AddRef(device); /*0x76dfd3*/
  if ( (int)device->lpVtbl->GetRenderTarget(device, 0, &v4->super.Surface) < 0 /*0x76e00e*/
    || (int)v4->super.Surface->lpVtbl->GetDesc(v4->super.Surface, a1a) < 0 )
  {
    v4->__vftable->super.Destructor((NiRefObject *)v4, 1); /*0x76dff1*/
    return 0; /*0x76dff6*/
  }
  else
  {
    v4->super.SurfaceData = CreateSurfaceData(a1a[0]); /*0x76e01a*/
    OB_D3DFormat_ToString_010201A0(a1a[0]); /*0x76e022*/
    Shared_NoOpVirtual_60D0A0(v6); /*0x76e02d*/
    if ( !g_D3D9MaxRenderTargetIndex ) /*0x76e035*/
    {
      v7 = renderer; /*0x76e03d*/
      g_D3D9MaxRenderTargetIndex = renderer->__vftable->super.Unk_27((NiRenderer *)renderer); /*0x76e04f*/
      unk_B42618 = v7->__vftable->super.Unk_28((NiRenderer *)v7); /*0x76e060*/
    }
    if ( *parentBuffer ) /*0x76e069*/
    {
      sub_70BD60(*parentBuffer, (NiDX9TextureBufferData *)v4); /*0x76e091*/
      v4->super.ParentData = *parentBuffer; /*0x76e099*/
    }
    else
    {
      Ni2DBuffer = CreateNi2DBuffer(width, a2, (NiDX9TextureBufferData *)v4); /*0x76e07a*/
      *parentBuffer = Ni2DBuffer; /*0x76e082*/
      v4->super.ParentData = Ni2DBuffer; /*0x76e085*/
    }
    return v4; /*0x76e088*/
  }
}
