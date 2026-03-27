NiDX9TextureBufferData *__cdecl NiDX9TextureBufferData::NiDX9TextureBufferData(
        void *toUnkD3D,
        int a2,
        int a3,
        int a4,
        Ni2DBuffer **a5)
{
  NiDX9TextureBufferData *v5; // eax
  NiDX9TextureBufferData *v6; // esi
  IDirect3DSurface9 **p_Surface; // edi
  signed int v8; // eax
  void *v9; // ecx
  Ni2DBuffer *Ni2DBuffer; // eax
  D3DSURFACE_DESC v12; // [esp+1Ch] [ebp-20h] BYREF

  v5 = (NiDX9TextureBufferData *)FormHeapAlloc(0x18u);
  v6 = v5;
  if ( v5 )
  {
    v5->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable';
    v5->member.super.super.m_uiRefCount = 0;
    InterlockedIncrement(&NiRefObject_objcount);
    v6->member.super.ParentData = 0;
    v6->member.super.Surface = 0;
    v6->member.super.SurfaceData = 0;
    v6->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9TextureBufferData::`vftable';
    v6->member.unkD3D = 0;
  }
  else
  {
    v6 = 0;
  }
  v6->member.unkD3D = toUnkD3D;
  (*(void (__stdcall **)(void *))(*(_DWORD *)toUnkD3D + 4))(toUnkD3D);
  p_Surface = &v6->member.super.Surface;
  v8 = (*(int (__stdcall **)(void *, int, _DWORD, IDirect3DSurface9 **))(*(_DWORD *)v6->member.unkD3D + 0x48))(
         v6->member.unkD3D,
         a2,
         0,
         &v6->member.super.Surface);
  if ( v8 < 0 )
  {
    sub_7736F0(v8);
    TESTexture::ClearComponentReferences(v9);
    *p_Surface = 0;
LABEL_6:
    v6->__vftable->super.Destructor((NiRefObject *)v6, 1);
    return 0;
  }
  if ( (int)(*p_Surface)->lpVtbl->GetDesc(*p_Surface, &v12) < 0 )
    goto LABEL_6;
  v6->member.super.SurfaceData = CreateSurfaceData(v12.Format);
  if ( *a5 )
  {
    sub_70BD60(*a5, v6);
    v6->member.super.ParentData = *a5;
  }
  else
  {
    Ni2DBuffer = CreateNi2DBuffer(v12.Width, v12.Height, v6);
    *a5 = Ni2DBuffer;
    v6->member.super.ParentData = Ni2DBuffer;
  }
  return v6;
}
