// Oblivion shadow depth-stencil allocator. Ensures a square depth-stencil at least ShadowSurfaceRes, deriving compatible renderer surface data from the shadow target format before creation.
void *__thiscall BSTextureManager__GetOrCreateShadowDepthStencil(BSTextureManager *this)
{
  void *result; // eax
  NiDX9Renderer *v2; // esi
  unsigned int v3; // edi
  void **p_unk44; // eax
  NiSurfaceData *SurfaceData; // ebx
  int v6; // ebp
  Ni2DBuffer *v7; // eax
  Ni2DBuffer **v8; // [esp+8h] [ebp-4h]

  result = this->unk40; /*0x7c1361*/
  v2 = renderer; /*0x7c136d*/
  v3 = (unsigned __int16)ShadowSurfaceRes; /*0x7c1374*/
  if ( !result || v3 > *((_DWORD *)result + 2) || v3 > *((_DWORD *)result + 3) ) /*0x7c1385*/
  {
    p_unk44 = &this->unk44; /*0x7c138b*/
    v8 = (Ni2DBuffer **)&this->unk44; /*0x7c138e*/
    if ( !this->unk44 ) /*0x7c1387*/
    {
      SurfaceData = CreateSurfaceData((D3DFORMAT)ShadowMapRenderTargetD3DFormat);// Create pixel/surface description data for the R32F shadow render-target format. /*0x7c139c*/
      v6 = (int)v2->__vftable->super.Unk_26((NiRenderer *)v2, SurfaceData);// Request a compatible shared depth/stencil surface description; the DX9 selector ranks supported formats toward 24 depth bits and 8 stencil bits. /*0x7c13ae*/
      v7 = (Ni2DBuffer *)sub_70BC70(v3, v3, (int)v2, v6);// Create the shared ShadowSurfaceRes-square depth/stencil buffer from the selected compatible format. /*0x7c13b4*/
      NiSmartPointer_Set__(v8, v7); /*0x7c13c1*/
      FormHeapFree(v6); /*0x7c13c7*/
      FormHeapFree((unsigned int)SurfaceData); /*0x7c13cd*/
      p_unk44 = (void **)v8; /*0x7c13d2*/
    }
    return *p_unk44; /*0x7c13db*/
  }
  return result; /*0x7c13dd*/
}
