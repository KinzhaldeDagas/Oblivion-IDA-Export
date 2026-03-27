NiDX9TextureBufferData *__cdecl sub_76DE00(int arg0, Ni2DBuffer **a2, NiDX9TextureBufferData *a3)
{
  NiDX9TextureBufferData *result; // eax
  signed int v4; // ebx
  NiDX9Renderer *v5; // esi
  NiRenderTargetGroup *v6; // eax
  int v7; // edi
  int v8; // eax
  signed int v9; // eax
  void *v10; // ecx
  NiDX9AdditionalDepthStencilBufferData *v11; // eax
  NiDX9TextureBufferData *v12; // esi
  signed int v13; // eax
  void *v14; // ecx
  D3DSURFACE_DESC a1; // [esp+4Ch] [ebp-20h] BYREF

  result = a3;
  if ( a3 )
  {
    result = (NiDX9TextureBufferData *)sub_76BEF0((int)a3);
    v4 = (signed int)result;
    if ( result )
    {
      v5 = g_Renderer;
      v6 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
      v7 = dword_B42154;
      v8 = (int)v6->vtbl->GetPixelFormat(v6, 0);
      v9 = (*(int (__stdcall **)(int, UInt32, UInt32, _DWORD, int, int, signed int))(*(_DWORD *)v7 + 0x28))(
             v7,
             v5->member.adapterIdx,
             v5->member.d3dDevType,
             *(_DWORD *)(v8 + 0xC),
             2,
             1,
             v4);
      if ( v9 < 0 )
      {
        sub_7736F0(v9);
        TESTexture::ClearComponentReferences(v10);
        return 0;
      }
      v11 = (NiDX9AdditionalDepthStencilBufferData *)FormHeapAlloc(0x1Cu);
      if ( v11 )
        v12 = (NiDX9TextureBufferData *)NiDX9AdditionalDepthStencilBufferData::NiDX9AdditionalDepthStencilBufferData(v11);
      else
        v12 = 0;
      v12[1].__vftable = (NiDX92DBufferDataVtbl *)dword_B294EC;
      v13 = (*(int (__stdcall **)(int, UInt32, UInt32, signed int, _DWORD, _DWORD, NiDX92DBufferDataVtbl *, IDirect3DSurface9 **, _DWORD))(*(_DWORD *)arg0 + 0x74))(
              arg0,
              (*a2)->members.width,
              (*a2)->members.height,
              v4,
              0,
              0,
              v12[1].__vftable,
              &v12->member.super.Surface,
              0);
      if ( v13 < 0 )
      {
        sub_7736F0(v13);
        TESTexture::ClearComponentReferences(v14);
LABEL_10:
        v12->__vftable->super.Destructor((NiRefObject *)v12, 1);
        return 0;
      }
      if ( (int)v12->member.super.Surface->lpVtbl->GetDesc(v12->member.super.Surface, &a1) < 0 )
        goto LABEL_10;
      v12->member.super.SurfaceData = CreateSurfaceData(a1.Format);
      v12->member.unkD3D = (void *)v4;
      sub_70BD60(*a2, v12);
      v12->member.super.ParentData = *a2;
      return v12;
    }
  }
  return result;
}
