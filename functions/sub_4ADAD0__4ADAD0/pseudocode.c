// Verified (Oblivion): inverse traversal visits the same property ID 4 subtype 5..10 classes (PPLighting/SpeedTree PP, Hair, SpeedTree Branch, SpeedTree Leaf, Lighting30). It clears the TextureEffectData pointer only when it equals the supplied object. No current shader-property vtable returns subtype 8 (Unknown). Fallout StopTextureShader uses property ID 3 and subtype 8..12, so do not transfer these IDs across versions.
void __stdcall TESEffectShader_RemoveTextureEffectFromScenegraph(
        NiAVObject *sceneRoot,
        OblivionTextureEffectData *data)
{
  NiProperty *NiPropertyByID; // esi
  BOOL v3; // eax
  NiProperty *v4; // eax
  NiObject *v5; // eax
  NiObject *v6; // edi
  int m_uiRefCount_high; // eax
  int v8; // esi
  NiAVObject *i; // eax

  if ( sceneRoot )
  {
    if ( sceneRoot->vtbl->super.Unk_03((NiObject *)sceneRoot) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)sceneRoot, 4); /*0x4adaf6*/
      v3 = NiPropertyByID /*0x4adb18*/
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
      v4 = v3 ? NiPropertyByID : 0;
      if ( v4 ) /*0x4adb27*/
      {
        if ( (OblivionTextureEffectData *)v4[9].members.m_pcName == data ) /*0x4adb33*/
          TextureEffectProperty_SetData(v4, 0); /*0x4adb39*/
      }
    }
    else
    {
      v5 = sceneRoot->vtbl->super.Unk_02(sceneRoot); /*0x4adb49*/
      v6 = v5; /*0x4adb4b*/
      if ( v5 ) /*0x4adb4f*/
      {
        m_uiRefCount_high = HIWORD(v5[0x16].members.m_uiRefCount); /*0x4adb51*/
        v8 = 0; /*0x4adb58*/
        if ( HIWORD(v6[0x16].members.m_uiRefCount) ) /*0x4adb51*/
        {
          if ( m_uiRefCount_high ) /*0x4adb65*/
            goto LABEL_15; /*0x4adb65*/
          for ( i = 0; ; i = *((NiAVObject **)&v6[0x16].__vftable->super.Destructor + v8) ) /*0x4adb67*/
          {
            TESEffectShader_RemoveTextureEffectFromScenegraph(i, data); /*0x4adb78*/
            if ( HIWORD(v6[0x16].members.m_uiRefCount) <= (unsigned int)++v8 ) /*0x4adb89*/
              break; /*0x4adb89*/
LABEL_15:
            ; /*0x4adb6b*/
          }
        }
      }
    }
  }
}
