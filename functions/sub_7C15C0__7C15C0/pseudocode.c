BSRenderedTexture *__thiscall sub_7C15C0(
        BSTextureManager *this,
        NiDX9Renderer *renderer,
        int width,
        int d3dFormat,
        int aux,
        unsigned __int16 targetFlags)
{
  return BSTextureManager_CreateRenderedTexture(this, renderer, width, width, d3dFormat, aux, targetFlags); /*0x7c15df*/
}
