// DX10OBSE resource decode: wraps a D3D texture/cube face level as NiDX9TextureBufferData, retaining the level surface used later as render target or 2D buffer surface.
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

  v5 = (NiDX9TextureBufferData *)FormHeapAlloc(0x18u); /*0x76d9b8*/
  v6 = v5; /*0x76d9bd*/
  if ( v5 ) /*0x76d9c6*/
  {
    v5->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable'; /*0x76d9cd*/
    v5->member.super.super.m_uiRefCount = 0; /*0x76d9d3*/
    InterlockedIncrement((volatile LONG *)&MEMORY[0xB3F9B0][0xED]); /*0x76d9d6*/
    v6->member.super.ParentData = 0; /*0x76d9dc*/
    v6->member.super.Surface = 0; /*0x76d9df*/
    v6->member.super.SurfaceData = 0; /*0x76d9e2*/
    v6->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9TextureBufferData::`vftable'; /*0x76d9e5*/
    v6->member.unkD3D = 0; /*0x76d9eb*/
  }
  else
  {
    v6 = 0; /*0x76d9f0*/
  }
  v6->member.unkD3D = toUnkD3D; /*0x76d9f6*/
  (*(void (__stdcall **)(void *))(*(_DWORD *)toUnkD3D + 4))(toUnkD3D); /*0x76d9ff*/
  p_Surface = &v6->member.super.Surface; /*0x76da0a*/
  v8 = (*(int (__stdcall **)(void *, int, _DWORD, IDirect3DSurface9 **))(*(_DWORD *)v6->member.unkD3D + 0x48))( /*0x76da14*/
         v6->member.unkD3D,
         a2,
         0,
         &v6->member.super.Surface);
  if ( v8 < 0 ) /*0x76da18*/
  {
    D3D9_HResultToString(v8); /*0x76da1b*/
    Shared_NoOpVirtual_60D0A0(v9); /*0x76da26*/
    *p_Surface = 0; /*0x76da2e*/
LABEL_6:
    v6->__vftable->super.Destructor((NiRefObject *)v6, 1); /*0x76da30*/
    return 0; /*0x76da42*/
  }
  if ( (int)(*p_Surface)->lpVtbl->GetDesc(*p_Surface, &v12) < 0 ) /*0x76da54*/
    goto LABEL_6; /*0x76da54*/
  v6->member.super.SurfaceData = CreateSurfaceData(v12.Format); /*0x76da64*/
  if ( *a5 ) /*0x76da67*/
  {
    sub_70BD60(*a5, v6); /*0x76da93*/
    v6->member.super.ParentData = *a5; /*0x76da9b*/
  }
  else
  {
    Ni2DBuffer = CreateNi2DBuffer(v12.Width, v12.Height, v6); /*0x76da7b*/
    *a5 = Ni2DBuffer; /*0x76da83*/
    v6->member.super.ParentData = Ni2DBuffer; /*0x76da88*/
  }
  return v6; /*0x76da3a*/
}
