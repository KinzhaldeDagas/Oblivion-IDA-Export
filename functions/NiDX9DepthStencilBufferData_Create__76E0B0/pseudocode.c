NiDX9TextureBufferData *__cdecl NiDX9DepthStencilBufferData_Create(int arg0, Ni2DBuffer **a2)
{
  NiDX9TextureBufferData *v2; // eax
  NiDX9TextureBufferData *v3; // esi
  int *p_Surface; // ebx
  int v6; // edx
  D3DFORMAT a1[8]; // [esp+10h] [ebp-20h] BYREF

  v2 = (NiDX9TextureBufferData *)FormHeapAlloc(0x14u);
  v3 = v2;
  if ( v2 )
  {
    v2->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable';
    v2->member.super.super.m_uiRefCount = 0;
    InterlockedIncrement(&NiRefObject_objcount);
    v3->member.super.ParentData = 0;
    v3->member.super.Surface = 0;
    v3->member.super.SurfaceData = 0;
    v3->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9ImplicitDepthStencilBufferData::`vftable';
  }
  else
  {
    v3 = 0;
  }
  p_Surface = (int *)&v3->member.super.Surface;
  if ( (*(int (__stdcall **)(int, IDirect3DSurface9 **))(*(_DWORD *)arg0 + 0xA0))(arg0, &v3->member.super.Surface) >= 0 )
  {
    if ( (*(int (__stdcall **)(int, D3DFORMAT *))(*(_DWORD *)*p_Surface + 0x30))(*p_Surface, a1) >= 0 )
    {
      v3->member.super.SurfaceData = CreateSurfaceData(a1[0]);
      if ( *a2 )
        sub_70BD60(*a2, v3);
      else
        *a2 = (Ni2DBuffer *)sub_70BE70(a1[6], a1[7], (int)v3);
      v6 = *p_Surface;
      v3->member.super.ParentData = *a2;
      dword_B42610 = v6;
      return v3;
    }
    else
    {
      v3->__vftable->super.Destructor((NiRefObject *)v3, 1);
      return 0;
    }
  }
  else
  {
    if ( v3 )
      v3->__vftable->super.Destructor((NiRefObject *)v3, 1);
    return 0;
  }
}
