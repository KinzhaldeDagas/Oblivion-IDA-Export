NiDX9ImplicitBufferData *__cdecl NiDX9ImplicitBufferData::NiDX9ImplicitBufferData(
        UINT a1,
        NiPixelFormat *Src,
        Ni2DBuffer **a3)
{
  NiDX9ImplicitBufferData *v3; // eax
  NiDX9ImplicitBufferData *v4; // esi
  void *v6; // ecx
  NiDX9Renderer *v7; // edi
  Ni2DBuffer *Ni2DBuffer; // eax
  size_t v9; // [esp+4h] [ebp-34h]
  D3DFORMAT a1a[6]; // [esp+18h] [ebp-20h] BYREF
  int width; // [esp+30h] [ebp-8h]
  int a2; // [esp+34h] [ebp-4h]

  v3 = (NiDX9ImplicitBufferData *)FormHeapAlloc(0x50u);
  v4 = v3;
  if ( v3 )
  {
    v3->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable';
    v3->super.super.m_uiRefCount = 0;
    InterlockedIncrement(&NiRefObject_objcount);
    v4->super.ParentData = 0;
    v4->super.Surface = 0;
    v4->super.SurfaceData = 0;
    v4->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9ImplicitBufferData::`vftable';
    v4->PresentParams.PresentationInterval = 0;
  }
  else
  {
    v4 = 0;
  }
  LODWORD(v9) = 0x38;
  memcpy(&v4->format, Src, v9);
  v4->PresentParams.PresentationInterval = a1;
  (*(void (__stdcall **)(UINT))(*(_DWORD *)a1 + 4))(a1);
  if ( (*(int (__stdcall **)(UINT, _DWORD, IDirect3DSurface9 **))(*(_DWORD *)a1 + 0x98))(a1, 0, &v4->super.Surface) < 0
    || (int)v4->super.Surface->lpVtbl->GetDesc(v4->super.Surface, a1a) < 0 )
  {
    v4->__vftable->super.Destructor((NiRefObject *)v4, 1);
    return 0;
  }
  else
  {
    v4->super.SurfaceData = CreateSurfaceData(a1a[0]);
    sub_774BD0(a1a[0]);
    TESTexture::ClearComponentReferences(v6);
    if ( !dword_B42614 )
    {
      v7 = g_Renderer;
      dword_B42614 = g_Renderer->__vftable->super.Unk_27((NiRenderer *)g_Renderer);
      byte_B42618 = v7->__vftable->super.Unk_28((NiRenderer *)v7);
    }
    if ( *a3 )
    {
      sub_70BD60(*a3, (NiDX9TextureBufferData *)v4);
      v4->super.ParentData = *a3;
    }
    else
    {
      Ni2DBuffer = CreateNi2DBuffer(width, a2, (NiDX9TextureBufferData *)v4);
      *a3 = Ni2DBuffer;
      v4->super.ParentData = Ni2DBuffer;
    }
    return v4;
  }
}
