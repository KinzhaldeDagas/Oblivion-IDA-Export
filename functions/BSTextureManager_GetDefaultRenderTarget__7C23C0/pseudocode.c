BSRenderedTexture *__thiscall BSTextureManager_GetDefaultRenderTarget(
        BSTextureManager *this,
        NiDX9Renderer *a2,
        int a3)
{
  NiDX9Renderer *v3; // edi
  unsigned int a8; // [esp+8h] [ebp-Ch] BYREF
  int a5; // [esp+Ch] [ebp-8h] BYREF
  int a4; // [esp+10h] [ebp-4h] BYREF

  v3 = a2;
  GetRenderedSurfacEParameters(this, a2, a3, &a4, &a5, &a2, &a3, &a8);
  return (BSRenderedTexture *)NiRenderer_GetRenderedSurface(
                                this,
                                (NiTPointerList_Node_void *)v3,
                                a4,
                                a5,
                                a8,
                                (int)a2,
                                a3);
}
