// Copy a backing NiPointLight world position into ShadowSceneLight cached source coordinates +0x108..+0x110.
void __thiscall ShadowSceneLight_SetCachedSourcePosition(
        ShadowSceneLight_DecodedLayout *self,
        float x,
        float y,
        float z)
{
  self->cachedSourceX_108 = x; /*0x7c5728*/
  self->cachedSourceY_10C = y; /*0x7c5732*/
  self->cachedSourceZ_110 = z; /*0x7c5738*/
}
