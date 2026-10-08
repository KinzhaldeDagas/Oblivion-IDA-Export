// Replace ShadowSceneNode+0x118 with a newly constructed ShadowSceneLight wrapper and assign its backing reference light.
void __thiscall ShadowSceneNode_RecreateLightLevelReference(ShadowSceneNode_DecodedLayout *self, void *backingLight)
{
  void (__thiscall ***lightLevelReference_118)(void *, int); // ecx
  ShadowSceneLight *v4; // eax
  ShadowSceneLight_DecodedLayout *v5; // eax

  lightLevelReference_118 = (void (__thiscall ***)(void *, int))self->lightLevelReference_118;// Release the previous strong-owned ShadowSceneNode+0x118 light-level reference wrapper, if present. /*0x7c5874*/
  if ( lightLevelReference_118 ) /*0x7c587c*/
  {
    (**lightLevelReference_118)(lightLevelReference_118, 1); /*0x7c5884*/
    self->lightLevelReference_118 = 0; /*0x7c5886*/
  }
  v4 = (ShadowSceneLight *)FormHeapAlloc(0x220u);// Allocate the exact retail ShadowSceneLight object size, 0x220 bytes, for the reference-light wrapper. /*0x7c5895*/
  if ( v4 ) /*0x7c58ab*/
    v5 = (ShadowSceneLight_DecodedLayout *)ShadowSceneLight::ShadowSceneLight(v4);// Construct the replacement ShadowSceneLight; the complete direct constructor-xref census contains five native callsites. /*0x7c58af*/
  else
    v5 = 0; /*0x7c58b6*/
  self->lightLevelReference_118 = v5;           // Store the replacement wrapper at ShadowSceneNode+0x118 (lightLevelReference_118). /*0x7c58c7*/
  ShadowSceneLight_SetBackingLight(v5, backingLight); /*0x7c58cd*/
}
