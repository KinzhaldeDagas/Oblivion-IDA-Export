// ShadowSceneLight render dispatcher. +0xF5 zero selects the normal per-source projected shadow map; nonzero selects the special cube/object-list path.
void __thiscall sub_7D59C0(_BYTE *this, NiCamera *a2, int a3)
{
  if ( *(this + 0xF5) ) /*0x7d59c0*/
    ShadowSceneLight_RenderSpecialCubeObjectList(this, a2, a3); /*0x7d59c9*/
  else
    ShadowSceneLight_RenderPerSourceShadowMap((int)this, a3);// Normal dispatch branch calls the retail per-source shadow-map renderer. /*0x7d59d3*/
}
