// LightEffect update is a native self-heal: if its transient point light exists but no full-list ShadowSceneLight matches that backing-light identity, recreate the entry with trackBackingPosition=true.
void __thiscall LightEffect_UpdateEffect(LightEffect_DecodedLayout *self, int updateContext)
{
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // esi

  if ( self->transientPointLight_38 ) /*0x6943e3*/
  {
    ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x6943f1*/
    if ( ShadowSceneNode ) /*0x6943f8*/
    {                                           // LightEffect update first tests the native full-light list by backing NiLight identity.
      if ( !ShadowSceneNode_FindFullLightBySource(ShadowSceneNode, self->transientPointLight_38) ) /*0x694400*/
        ShadowSceneNode_FindOrCreateFullLightForSource(ShadowSceneNode, self->transientPointLight_38, 1);// Dynamically created LightEffect NiPointLights register with trackBackingPosition=true. /*0x694411*/
    }
  }
}
