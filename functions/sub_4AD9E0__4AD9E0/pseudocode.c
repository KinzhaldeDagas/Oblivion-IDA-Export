// Verified (Oblivion): recursively applies TextureEffectData to scene nodes whose property ID 4 returns shader-property subtype 5..10 from vtable slot +0x54. Direct vtable bodies identify accepted values: 5 BSShaderPPLightingProperty and SpeedTreeShaderPPLightingProperty; 6 HairShaderProperty; 7 SpeedTreeBranchShaderProperty; 9 SpeedTreeLeafShaderProperty; 10 Lighting30ShaderProperty. The current exhaustive 17-entry BSShaderProperty-family vtable census has no subtype 8 mapping (Unknown). Data.cFlags bit 0x20 additionally restricts candidates to property ID 2 name "skin". Fallout StartTextureShader instead queries property ID 3 and accepts subtype IDs 8..12; these numeric IDs are version-specific.
void __thiscall TESEffectShader_ApplyTextureEffectToScenegraph(
        TESEffectShader *this,
        NiAVObject *sceneRoot,
        OblivionTextureEffectData *data)
{
  NiProperty *NiPropertyByID; // esi
  BOOL v5; // eax
  NiProperty *v6; // ebx
  const char *m_pcName; // esi
  NiObject *v8; // eax
  NiObject *v9; // edi
  int m_uiRefCount_high; // eax
  int v11; // esi
  NiAVObject *i; // eax

  if ( sceneRoot )
  {
    if ( sceneRoot->vtbl->super.Unk_03((NiObject *)sceneRoot) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)sceneRoot, 4); /*0x4ada08*/
      v5 = NiPropertyByID /*0x4ada2a*/
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
      v6 = v5 ? NiPropertyByID : 0;
      if ( v6 ) /*0x4ada3b*/
      {                                         // Verified (Oblivion): Data.cFlags bit 0x20 changes recursive attachment filtering: when set, only property ID 2 names equal to the literal "skin" receive the texture-effect data; when clear, that name filter is bypassed. The flag's practical meaning is skin-only texture-effect attachment.
        if ( (this->Data.cFlags & 0x20) == 0 /*0x4ada5f*/
          || (m_pcName = NiNode_GetNiPropertyByID((NiNode *)sceneRoot, 2)->members.m_pcName) == 0
          || !strcmp(m_pcName, "skin") )
        {
          TextureEffectProperty_SetData(v6, data); /*0x4ada6a*/
        }
      }
    }
    else
    {
      v8 = sceneRoot->vtbl->super.Unk_02(sceneRoot); /*0x4ada7b*/
      v9 = v8; /*0x4ada7d*/
      if ( v8 ) /*0x4ada81*/
      {
        m_uiRefCount_high = HIWORD(v8[0x16].members.m_uiRefCount); /*0x4ada83*/
        v11 = 0; /*0x4ada8a*/
        if ( HIWORD(v9[0x16].members.m_uiRefCount) ) /*0x4ada83*/
        {
          if ( m_uiRefCount_high ) /*0x4ada96*/
            goto LABEL_17; /*0x4ada96*/
          for ( i = 0; ; i = *((NiAVObject **)&v9[0x16].__vftable->super.Destructor + v11) ) /*0x4ada98*/
          {
            TESEffectShader_ApplyTextureEffectToScenegraph(this, i, data); /*0x4adaa9*/
            if ( HIWORD(v9[0x16].members.m_uiRefCount) <= (unsigned int)++v11 ) /*0x4adaba*/
              break; /*0x4adaba*/
LABEL_17:
            ; /*0x4ada9c*/
          }
        }
      }
    }
  }
}
