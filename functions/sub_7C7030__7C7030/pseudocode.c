// Find an existing source light and forward the requested per-source projector mode to ShadowSceneLight+0xF4.
void __thiscall ShadowSceneNode_SetSourceProjectorMode(
        ShadowSceneNode_DecodedLayout *this,
        void *backingLight,
        char a3)
{
  ShadowSceneLight_DecodedLayout *FullLightBySource; // eax

  FullLightBySource = ShadowSceneNode_FindFullLightBySource(this, backingLight); /*0x7c7035*/
  if ( FullLightBySource ) /*0x7c703c*/
    ShadowSceneLight_SetPerSourceProjectorMode((int)FullLightBySource, a3); /*0x7c7045*/
}
