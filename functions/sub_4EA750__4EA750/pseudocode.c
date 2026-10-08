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

  if ( SettingGrassEndDistance < dbl_A47A30 ) /*0x4ea785*/
    SettingGrassEndDistance = 0.0; /*0x4ea789*/
  v7 = SettingGrassEndDistance; /*0x4ea79d*/
  v0 = (double)(uGridsToLoad << 0xC); /*0x4ea7a7*/
  if ( (uGridsToLoad & 0x80000) != 0 ) /*0x4ea7ab*/
    v0 = v0 + flt_A2FC78; /*0x4ea7ad*/
  v8 = v0; /*0x4ea7b3*/
  if ( v8 < (double)v7 ) /*0x4ea7c8*/
    v7 = v0; /*0x4ea7ca*/
  unk_B36090 = v7; /*0x4ea7d8*/
  ShadowSceneNode = GetShadowSceneNode(0); /*0x4ea7e8*/
  v2 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4ea7ea*/
  if ( v2 ) /*0x4ea800*/
    v3 = (NiObjectNET *)NiNode::NiNode(v2, 0); /*0x4ea806*/
  else
    v3 = 0; /*0x4ea80d*/
  unk_B36094 = (int)v3; /*0x4ea81e*/
  NiObjectNET_SetName(v3, "Grass"); /*0x4ea823*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)ShadowSceneNode + 0x84))(ShadowSceneNode, unk_B36094, 0); /*0x4ea83a*/
  if ( MEMORY[0xB333A0] ) /*0x4ea83c*/
  {
    sky = MEMORY[0xB333A0]->sky; /*0x4ea845*/
    if ( sky ) /*0x4ea84a*/
    {
      atmosphere = sky->atmosphere; /*0x4ea84c*/
      if ( atmosphere ) /*0x4ea851*/
      {
        if ( TESEnchantableForm_GetCastingType(atmosphere) ) /*0x4ea855*/
        {
          CastingType = (BSShaderProperty *)TESEnchantableForm_GetCastingType(&MEMORY[0xB333A0]->sky->atmosphere->__vftbl); /*0x4ea869*/
          sub_405680((NiNode *)unk_B36094, CastingType); /*0x4ea875*/
        }
      }
    }
  }
  NiAVObject_InitializePropertyState((NiAVObject *)unk_B36094); /*0x4ea880*/
  unk_B3608D = 1; /*0x4ea885*/
}
