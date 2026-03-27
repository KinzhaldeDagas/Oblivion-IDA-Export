void sub_4EA750()
{
  double v0; // st7
  int ShadowSceneNode; // esi
  NiNode *v2; // eax
  NiObjectNET *v3; // eax
  Sky *sky; // eax
  Atmosphere *atmosphere; // eax
  BSShaderProperty *CastingType; // eax
  float v7; // [esp+8h] [ebp-14h]
  float v8; // [esp+Ch] [ebp-10h]

  if ( SettingGrassEndDistance < dbl_A47A30 )
    SettingGrassEndDistance = 0.0;
  v7 = SettingGrassEndDistance;
  v0 = (double)(uGridsToLoad << 0xC);
  if ( (uGridsToLoad & 0x80000) != 0 )
    v0 = v0 + flt_A2FC78;
  v8 = v0;
  if ( v8 < (double)v7 )
    v7 = v0;
  flt_B36090 = v7;
  ShadowSceneNode = GetShadowSceneNode(0);
  v2 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v2 )
    v3 = (NiObjectNET *)NiNode::NiNode(v2, 0);
  else
    v3 = 0;
  dword_B36094 = (int)v3;
  NiObjectNET_SetName(v3, "Grass");
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)ShadowSceneNode + 0x84))(ShadowSceneNode, dword_B36094, 0);
  if ( TES )
  {
    sky = TES->sky;
    if ( sky )
    {
      atmosphere = sky->atmosphere;
      if ( atmosphere )
      {
        if ( TESEnchantableForm_GetCastingType(atmosphere) )
        {
          CastingType = (BSShaderProperty *)TESEnchantableForm_GetCastingType(&TES->sky->atmosphere->__vftbl);
          sub_405680((NiNode *)dword_B36094, CastingType);
        }
      }
    }
  }
  NiAVObject_InitializePropertyState((NiAVObject *)dword_B36094);
  byte_B3608D = 1;
}
