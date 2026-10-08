// Verified canopy-shadow cleanup plus version difference: Oblivion releases manager.canopyShadowTexture and an adjacent cached resource, then calls sub_440420 to unload the DDS. Fallout releases the manager pointer and BSShaderManager::pProjectedShadowTexture, then calls TES::RemoveTextureImage.
void __cdecl BSTreeManager_ClearCanopyShadow()
{
  LONG (__stdcall *v0)(volatile LONG *); // ebx
  NiSourceTexture *canopyShadowTexture; // esi
  NiSourceTexture **p_canopyShadowTexture; // edi
  float v3; // esi

  if ( !g_BSTreeManager_Instance ) /*0x560110*/
    BSTreeManager_Create(0); /*0x56011b*/
  if ( g_BSTreeManager_Instance->canopyShadowTexture ) /*0x560128*/
  {
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x560134*/
    if ( !g_BSTreeManager_Instance ) /*0x56013c*/
      BSTreeManager_Create(0); /*0x560147*/
    v0 = InterlockedDecrement; /*0x560150*/
    canopyShadowTexture = g_BSTreeManager_Instance->canopyShadowTexture; /*0x56015e*/
    p_canopyShadowTexture = &g_BSTreeManager_Instance->canopyShadowTexture; /*0x560161*/
    if ( canopyShadowTexture ) /*0x560166*/
    {
      if ( !v0((volatile LONG *)&canopyShadowTexture->members) ) /*0x56016c*/
        canopyShadowTexture->vtbl->super.super.super.Destructor((NiRefObject *)canopyShadowTexture, 1); /*0x56017e*/
      *p_canopyShadowTexture = 0; /*0x560180*/
    }
    v3 = unk_B43108[0]; /*0x560186*/
    if ( LODWORD(unk_B43108[0]) ) /*0x560186*/
    {
      if ( !v0((volatile LONG *)(LODWORD(v3) + 4)) && v3 != 0.0 ) /*0x56019c*/
        (**(void (__thiscall ***)(float, int))LODWORD(v3))(COERCE_FLOAT(LODWORD(v3)), 1); /*0x5601a6*/
      unk_B43108[0] = 0.0; /*0x5601a8*/
    }
    sub_440420("Data\\Textures\\Trees\\CanopyShadow.dds", 0); /*0x5601bf*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x5601c6*/
  }
}
