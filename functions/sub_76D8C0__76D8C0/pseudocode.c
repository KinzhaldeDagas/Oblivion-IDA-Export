// DX10OBSE resource decode: wraps an existing D3D texture resource as NiDX9TextureBufferData by AddRef, GetSurfaceLevel(0), GetDesc, and attaching/creating Ni2DBuffer parent data.
NiDX9TextureBufferData *__cdecl sub_76D8C0(void *arg0, Ni2DBuffer **a2)
{
  NiDX9TextureBufferData *v2; // eax
  NiDX9TextureBufferData *v3; // esi
  signed int v4; // eax
  void *v5; // ecx
  Ni2DBuffer *Ni2DBuffer; // eax
  D3DFORMAT a1[8]; // [esp+18h] [ebp-20h] BYREF

  v2 = (NiDX9TextureBufferData *)FormHeapAlloc(0x18u); /*0x76d8c9*/
  v3 = v2; /*0x76d8ce*/
  if ( v2 ) /*0x76d8d7*/
  {
    v2->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable'; /*0x76d8de*/
    v2->member.super.super.m_uiRefCount = 0; /*0x76d8e4*/
    InterlockedIncrement((volatile LONG *)&MEMORY[0xB3F9B0][0xED]); /*0x76d8e7*/
    v3->member.super.ParentData = 0; /*0x76d8ed*/
    v3->member.super.Surface = 0; /*0x76d8f0*/
    v3->member.super.SurfaceData = 0; /*0x76d8f3*/
    v3->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9TextureBufferData::`vftable'; /*0x76d8f6*/
    v3->member.unkD3D = 0; /*0x76d8fc*/
  }
  else
  {
    v3 = 0; /*0x76d901*/
  }
  v3->member.unkD3D = arg0; /*0x76d907*/
  (*(void (__stdcall **)(void *))(*(_DWORD *)arg0 + 4))(arg0); /*0x76d910*/
  v4 = (*(int (__stdcall **)(void *, _DWORD, IDirect3DSurface9 **))(*(_DWORD *)arg0 + 0x48))( /*0x76d91d*/
         arg0,
         0,
         &v3->member.super.Surface);
  if ( v4 < 0 ) /*0x76d921*/
  {
    D3D9_HResultToString(v4); /*0x76d924*/
    Shared_NoOpVirtual_60D0A0(v5); /*0x76d92f*/
LABEL_6:
    v3->__vftable->super.Destructor((NiRefObject *)v3, 1); /*0x76d937*/
    return 0; /*0x76d94a*/
  }
  if ( (int)v3->member.super.Surface->lpVtbl->GetDesc(v3->member.super.Surface, (D3DSURFACE_DESC *)a1) < 0 ) /*0x76d95c*/
    goto LABEL_6; /*0x76d95c*/
  v3->member.super.SurfaceData = CreateSurfaceData(a1[0]); /*0x76d96c*/
  if ( *a2 ) /*0x76d96f*/
  {
    sub_70BD60(*a2, v3); /*0x76d99c*/
    v3->member.super.ParentData = *a2; /*0x76d9a4*/
  }
  else
  {
    Ni2DBuffer = CreateNi2DBuffer(a1[6], a1[7], v3); /*0x76d983*/
    *a2 = Ni2DBuffer; /*0x76d98b*/
    v3->member.super.ParentData = Ni2DBuffer; /*0x76d990*/
  }
  return v3; /*0x76d941*/
}
