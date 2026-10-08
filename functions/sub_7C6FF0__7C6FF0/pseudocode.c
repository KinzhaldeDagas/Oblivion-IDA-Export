// Find an existing source light; clear receiver associations when source flag +0x18 bit0 is set, otherwise refresh source-derived state.
void __thiscall ShadowSceneNode_UpdateOrClearSourceLight(ShadowSceneNode_DecodedLayout *this, _BYTE *backingLight)
{
  ShadowSceneLight_DecodedLayout *FullLightBySource; // eax

  FullLightBySource = ShadowSceneNode_FindFullLightBySource(this, backingLight); /*0x7c6ff9*/
  if ( (backingLight[0x18] & 1) != 0 ) /*0x7c7002*/
  {
    ShadowSceneLight_ClearReceiverAssociations(FullLightBySource); /*0x7c7006*/
  }
  else if ( FullLightBySource ) /*0x7c7012*/
  {
    ShadowSceneNode_ReconcileSourceLightReceivers(this, FullLightBySource); /*0x7c7017*/
  }
}
