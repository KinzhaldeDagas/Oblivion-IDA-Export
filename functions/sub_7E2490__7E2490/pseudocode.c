// [Verified] Shared BSShaderProperty clone-field copier: delegates to the common property copier, copies source +0x1C and +0x20 into the clone, and clears clone +0x24. Directly used by BSShaderProperty_CreateClone and the inherited path used by GeometryDecalShaderProperty. It does not touch BSShaderLightingProperty's +0x80 DECAL_DATA* list.
void __thiscall BSShaderProperty_CopyCloneMembers(BSShaderProperty *this, BSShaderProperty *clone, void *cloneProcess)
{
  sub_73DA70((char **)this, (int)clone, (int)cloneProcess); /*0x7e249e*/
  clone->member.passInfo = this->member.passInfo; /*0x7e24a6*/
  clone->member.alpha = this->member.alpha; /*0x7e24ac*/
  clone->member.lastRenderPassState = 0; /*0x7e24af*/
}
