// Oblivion-authoritative NiDX9RenderedTextureData::Create. Allocates renderer data, calls CreateSurf, attaches it to NiRenderedTexture, QueryInterfaces the level-0 resource as IDirect3DTexture9, and wraps its surface in NiDX9TextureBufferData; all failures release partial resources.
NiDX9TextureData *__usercall sub_761920@<eax>(int a1@<edi>, NiTexture *a2, NiDX9Renderer *a3)
{
  NiDX9TextureData *v3; // esi
  int (__stdcall ***v5)(_DWORD, void *, void **); // edi
  signed int v6; // eax
  void *v7; // ecx
  NiDX9TextureBufferData *v8; // edi
  void *v9; // ecx
  int v10; // [esp+4h] [ebp-10h]
  int v11; // [esp+8h] [ebp-Ch]
  void *v12; // [esp+10h] [ebp-4h] BYREF
  Ni2DBuffer *retaddr; // [esp+14h] [ebp+0h] BYREF

  v3 = (NiDX9TextureData *)FormHeapAlloc(0x64u); /*0x761930*/
  if ( v3 ) /*0x761937*/
  {
    NiDX9TextureData::NiDX9TextureData(v3, a2, a3); /*0x761941*/
    v3->_vtbl = &NiDX9RenderedTextureData::`vftable';// NiDX9RenderedTextureData owns the renderable D3D texture resource used for the R32F shadow map. /*0x761946*/
    v3[1]._vtbl = 0; /*0x76194c*/
  }
  else
  {
    v3 = 0; /*0x761955*/
  }
  if ( NiDX9RenderedTextureData_CreateSurf(v3, a1, (int)v3, a2, v10, v11) ) /*0x76195a*/
  {
    v3->parent->members.rendererData = v3; /*0x76197c*/
    v5 = (int (__stdcall ***)(_DWORD, void *, void **))(*((int (__thiscall **)(NiDX9TextureData *, int))v3->_vtbl + 5))( /*0x76198b*/
                                                         v3,
                                                         a1);
    retaddr = (Ni2DBuffer *)((int (__thiscall *)(NiTexture *))a2->__vftable[1].super.super.Destructor)(a2); /*0x761999*/
    v12 = 0; /*0x76199d*/
    v6 = (**v5)(v5, &unk_AB27E8, &v12); /*0x7619af*/
    if ( v6 >= 0 ) /*0x7619b3*/
    {
      v8 = sub_76D8C0(v12, &retaddr);           // Wrap the rendered texture's level-0 D3D surface in NiDX9TextureBufferData; this same texture-backed surface is bound for rendering and later sampled. /*0x7619eb*/
      (*(void (__cdecl **)(void *))(*(_DWORD *)v12 + 8))(v12); /*0x7619fa*/
      if ( v8 ) /*0x7619fe*/
      {
        return v3; /*0x761a26*/
      }
      else
      {
        Shared_NoOpVirtual_60D0A0(v9); /*0x761a0a*/
        (*(void (__thiscall **)(NiDX9TextureData *, int))v3->_vtbl)(v3, 1); /*0x761a1a*/
        return 0; /*0x761a1e*/
      }
    }
    else
    {
      D3D9_HResultToString(v6); /*0x7619b6*/
      Shared_NoOpVirtual_60D0A0(v7); /*0x7619c1*/
      (*(void (__thiscall **)(NiDX9TextureData *, int))v3->_vtbl)(v3, 1); /*0x7619d1*/
      return 0; /*0x7619d5*/
    }
  }
  else
  {
    if ( v3 ) /*0x761965*/
      (*(void (__thiscall **)(NiDX9TextureData *, int))v3->_vtbl)(v3, 1); /*0x76196f*/
    return 0; /*0x761972*/
  }
}
