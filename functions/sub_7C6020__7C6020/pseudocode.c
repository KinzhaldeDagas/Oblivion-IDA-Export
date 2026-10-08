// Refresh a moved backing NiPointLight: require +0xFC, +0x104, and normal +0xF4 state; compare cached +0x108..+0x110 against light world position, then rebuild/relink if moved.
void __thiscall ShadowSceneNode_RefreshMovedPointLightSource(
        ShadowSceneNode_DecodedLayout *self,
        ShadowSceneLight_DecodedLayout *light)
{
  ShadowSceneLight_DecodedLayout *v2; // esi
  float *v4; // ebx
  ShadowSceneLight_DecodedLayout *v5; // edi
  float cachedSourceY_10C; // edx
  float cachedSourceZ_110; // eax
  float v8[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = light; /*0x7c6026*/
  if ( light->backingIsNiPointLight_FC ) /*0x7c602a*/
  {                                             // Only lights registered with trackBackingPosition=true participate in native moving-source position refresh.
    if ( light->trackBackingPosition_104 ) /*0x7c603a*/
    {
      if ( !light->perSourceProjectorMode_F4 ) /*0x7c6047*/
      {
        v4 = (float *)*ShadowSceneLight_GetLightRef(light, &light); /*0x7c6060*/
        if ( light ) /*0x7c6068*/
        {
          v5 = light; /*0x7c606a*/
          if ( !InterlockedDecrement((volatile LONG *)&light->base_000[4]) ) /*0x7c6070*/
            (**(void (__thiscall ***)(ShadowSceneLight_DecodedLayout *, int))v5->base_000)(v5, 1); /*0x7c6086*/
        }
        cachedSourceY_10C = v2->cachedSourceY_10C; /*0x7c608e*/
        cachedSourceZ_110 = v2->cachedSourceZ_110; /*0x7c6094*/
        v8[0] = v2->cachedSourceX_108; /*0x7c609a*/
        v8[1] = cachedSourceY_10C; /*0x7c60a9*/
        v8[2] = cachedSourceZ_110; /*0x7c60ad*/
        if ( NiPoint3__NotEqual(v8, v4 + 0x22) )// Compare cached source position +0x108..+0x110 against the backing NiPointLight world position. /*0x7c60b1*/
        {
          if ( v2->cullStatus_118 != 0xFF ) /*0x7c60c3*/
          {
            ShadowSceneLight_SetCachedSourcePosition(v2, v4[0x22], v4[0x23], v4[0x24]);// When a tracked source moved and cull status permits, refresh the cached position before receiver reconciliation. /*0x7c60dc*/
            ShadowSceneNode_ReconcileSourceLightReceivers(self, v2); /*0x7c60e4*/
          }
        }
      }
    }
  }
}
