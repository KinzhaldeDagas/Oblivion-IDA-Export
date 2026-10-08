// [Verified] DECAL_DATA_ReleaseOwnedReferences decrements/releases sourceTexture_00 and targetShaderProperty_48. Directly confirmed by its DECAL_DATA-list owner and by BSTempEffectDecal/BSTempEffectGeometryDecal destructors, which free a 0x4C payload immediately afterward.
void __thiscall DECAL_DATA_ReleaseOwnedReferences(DECAL_DATA *this)
{
  NiProperty *targetShaderProperty_48; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  NiSourceTexture *sourceTexture_00; // esi

  targetShaderProperty_48 = this->targetShaderProperty_48; /*0x56c11a*/
  v3 = InterlockedDecrement; /*0x56c11f*/
  if ( targetShaderProperty_48 ) /*0x56c12d*/
  {
    if ( !v3((volatile LONG *)&targetShaderProperty_48->members) ) /*0x56c133*/
      (*(void (__thiscall **)(NiProperty *, int))targetShaderProperty_48->vtbl)(targetShaderProperty_48, 1); /*0x56c145*/
  }
  sourceTexture_00 = this->sourceTexture_00; /*0x56c147*/
  if ( this->sourceTexture_00 ) /*0x56c147*/
  {
    if ( !v3((volatile LONG *)&sourceTexture_00->members) ) /*0x56c159*/
    {
      if ( sourceTexture_00 ) /*0x56c161*/
        sourceTexture_00->vtbl->super.super.super.Destructor((NiRefObject *)sourceTexture_00, 1); /*0x56c16b*/
    }
  }
}
