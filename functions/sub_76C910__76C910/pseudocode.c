// Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
// DX11 ordinary texture construction 2026-09-30: full 47h-byte body verified. Writes stage+4 only when identity differs; decrements old NiTexture refcount+4/deletes at zero and increments new refcount+4. Read-only assignment reconstruction does not perform these native lifetime transfers.
// DX11 shared-pass audit 2026-10-01: parameter type corrected to NiTexture*, matching the stage Texture member and ordinary diffuse/normal/environment/glow inputs. This is not rendered-texture-only. Each actual stage object owns one reference even if multiple pass array indices alias it; apply all assignments in call order, accounting for the latest projected stage+4 value. Equal-pointer assignment does not touch refcounts.
void __thiscall NiD3DTextureStage_SetTexture(NiD3DTextureStage *this, NiTexture *texture)
{
  NiTexture *v3; // esi

  v3 = this->Texture; /*0x76c914*/
  if ( v3 != texture ) /*0x76c91e*/
  {
    if ( v3 ) /*0x76c922*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x76c928*/
        v3->__vftable->super.super.Destructor((NiRefObject *)v3, 1); /*0x76c93e*/
    }
    this->Texture = texture; /*0x76c942*/
    if ( texture ) /*0x76c945*/
      InterlockedIncrement((volatile LONG *)&texture->members); /*0x76c94b*/
  }
}
