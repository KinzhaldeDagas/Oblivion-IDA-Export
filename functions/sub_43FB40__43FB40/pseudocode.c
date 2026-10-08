// Exterior-grid shadow source-light activation. For every uGridsToLoad cell at process level 6, enumerate its references and register each ordinary attached ExtraLight, then reconcile receivers for every ShadowSceneNode full-list source. This does not enumerate statics and never calls ShadowSceneNodeAddShadowCaster.
void __thiscall TES_RegisterExteriorGridAttachedLightsAndReconcile(TES *self)
{
  unsigned int v1; // eax
  unsigned int i; // edi
  unsigned int j; // esi
  TESObjectCELL *cell; // ecx
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax

  v1 = uGridsToLoad; /*0x43fb40*/
  for ( i = 0; i < v1; ++i ) /*0x43fb4b*/
  {
    for ( j = 0; j < v1; ++j ) /*0x43fb54*/
    {
      cell = GetGridEntry(self->gridCellArray, i, j)->cell; /*0x43fb64*/
      if ( cell ) /*0x43fb68*/
      {
        if ( cell->members.cellProcessLevel == 6 ) /*0x43fb6d*/
          TESObjectCELL_RegisterOrUnregisterAttachedLights(cell, 1);// Register ordinary attached light sources for every reference in this process-level-6 exterior cell; this is source-light registration, not static-caster admission. /*0x43fb71*/
      }
      v1 = uGridsToLoad; /*0x43fb76*/
    }
  }
  ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x43fb8b*/
  ShadowSceneNode_ReconcileAllSourceLightsAndOptionallyTeardown(ShadowSceneNode, 1, 1);// After all loaded exterior grid cells are processed, reconcile every full-list source light and retain both light lists (arguments true, true). /*0x43fb95*/
}
