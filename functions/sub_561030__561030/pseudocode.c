// Leaf geometry installs alpha-test property flags 0x12EC, function GREATER, ref=84. Therefore sampled alpha <=84 is discarded/invisible, not rendered RGB-black.
void *__cdecl BSTreeModel__CreateAlphaProperty()
{
  NiObjectNET *v0; // eax
  NiObjectNET *v1; // esi
  void *result; // eax

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x561054*/
  v1 = v0; /*0x561059*/
  if ( v0 ) /*0x56106c*/
  {
    NiObjectNET::NiObjectNET(v0); /*0x561070*/
    v1->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable'; /*0x561075*/
    LOWORD(v1[1].vtbl) = 0xEC; /*0x56107b*/
    BYTE2(v1[1].vtbl) = 0; /*0x561081*/
    result = v1; /*0x561085*/
  }
  else
  {
    result = 0; /*0x561089*/
  }
  *((_WORD *)result + 0xC) = *((_WORD *)result + 0xC) & 0xE1FE | 0x1200;// Final tree cutout NiAlphaProperty flags are 0x12EC: bit0 clear disables alpha blending; bit9 enables alpha test; selector bits 10..12 equal 4. NiD3DRenderState mapping at 0x78046F maps selector 4 to D3DCMP_GREATER. /*0x561099*/
  *((_BYTE *)result + 0x1A) = 0x54;             // Initial tree cutout alpha-test reference is 0x54 (84). Runtime leaf LOD sync later replaces only this reference byte through 0x563DE0. /*0x56109d*/
  return result; /*0x5610a1*/
}
