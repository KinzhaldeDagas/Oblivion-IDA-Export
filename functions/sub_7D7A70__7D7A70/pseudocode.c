// Verified (Oblivion): replaces the TextureEffectData pointer at +0xE0 on the supplied NiProperty-derived shader property, with Interlocked release/addref handling, then clears a 32-bit state at +0x24. BSShaderPPLightingProperty constructor/destructor and viewer export independently confirm +0xE0 is its spTexEffectData ownership slot. Direct callers select property ID 4 subtypes 5..10: PP-lighting/SpeedTree PP (5), Hair (6), SpeedTree Branch (7), SpeedTree Leaf (9), and Lighting30 (10); subtype 8 remains Unknown.
void __thiscall TextureEffectProperty_SetData(NiProperty *textureEffectProperty, OblivionTextureEffectData *data)
{
  OblivionTextureEffectData *v3; // esi

  v3 = *((OblivionTextureEffectData **)textureEffectProperty + 0x38); /*0x7d7a79*/
  if ( v3 != data ) /*0x7d7a81*/
  {
    if ( v3 ) /*0x7d7a85*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v3->refCount_04) ) /*0x7d7a8b*/
        (*(void (__thiscall **)(OblivionTextureEffectData *, int))v3->vftable_00)(v3, 1); /*0x7d7aa1*/
    }
    *((_DWORD *)textureEffectProperty + 0x38) = data; /*0x7d7aa5*/
    if ( data ) /*0x7d7aab*/
      InterlockedIncrement((volatile LONG *)&data->refCount_04); /*0x7d7ab1*/
  }
  *((_DWORD *)textureEffectProperty + 9) = 0; /*0x7d7ab7*/
}
