NiDX9TextureBufferData *__cdecl sub_76D8C0(void *arg0, Ni2DBuffer **a2)
{
  NiDX9TextureBufferData *v2; // eax
  NiDX9TextureBufferData *v3; // esi
  signed int v4; // eax
  void *v5; // ecx
  Ni2DBuffer *Ni2DBuffer; // eax
  D3DFORMAT a1[8]; // [esp+18h] [ebp-20h] BYREF

  v2 = (NiDX9TextureBufferData *)FormHeapAlloc(0x18u);
  v3 = v2;
  if ( v2 )
  {
    v2->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable';
    v2->member.super.super.m_uiRefCount = 0;
    InterlockedIncrement(&NiRefObject_objcount);
    v3->member.super.ParentData = 0;
    v3->member.super.Surface = 0;
    v3->member.super.SurfaceData = 0;
    v3->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9TextureBufferData::`vftable';
    v3->member.unkD3D = 0;
  }
  else
  {
    v3 = 0;
  }
  v3->member.unkD3D = arg0;
  (*(void (__stdcall **)(void *))(*(_DWORD *)arg0 + 4))(arg0);
  v4 = (*(int (__stdcall **)(void *, _DWORD, IDirect3DSurface9 **))(*(_DWORD *)arg0 + 0x48))(
         arg0,
         0,
         &v3->member.super.Surface);
  if ( v4 < 0 )
  {
    sub_7736F0(v4);
    TESTexture::ClearComponentReferences(v5);
LABEL_6:
    v3->__vftable->super.Destructor((NiRefObject *)v3, 1);
    return 0;
  }
  if ( (int)v3->member.super.Surface->lpVtbl->GetDesc(v3->member.super.Surface, (D3DSURFACE_DESC *)a1) < 0 )
    goto LABEL_6;
  v3->member.super.SurfaceData = CreateSurfaceData(a1[0]);
  if ( *a2 )
  {
    sub_70BD60(*a2, v3);
    v3->member.super.ParentData = *a2;
  }
  else
  {
    Ni2DBuffer = CreateNi2DBuffer(a1[6], a1[7], v3);
    *a2 = Ni2DBuffer;
    v3->member.super.ParentData = Ni2DBuffer;
  }
  return v3;
}
