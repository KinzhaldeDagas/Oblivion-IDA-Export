// Strong-own the supplied frame-local shadow map at ShadowSceneLight+0x114, releasing any previous map reference.
void __thiscall ShadowSceneLight_SetShadowMap(ShadowSceneLight_DecodedLayout *self, void *shadowMap)
{
  volatile LONG *shadowMap_114; // esi

  shadowMap_114 = (volatile LONG *)self->shadowMap_114; /*0x499314*/
  if ( shadowMap_114 != shadowMap ) /*0x499321*/
  {
    if ( shadowMap_114 ) /*0x499325*/
    {
      if ( !InterlockedDecrement(shadowMap_114 + 1) ) /*0x49932b*/
        (**(void (__thiscall ***)(void *, int))shadowMap_114)((void *)shadowMap_114, 1); /*0x499341*/
    }
    self->shadowMap_114 = shadowMap; /*0x499345*/
    if ( shadowMap ) /*0x49934b*/
      InterlockedIncrement((volatile LONG *)shadowMap + 1); /*0x499351*/
  }
}
