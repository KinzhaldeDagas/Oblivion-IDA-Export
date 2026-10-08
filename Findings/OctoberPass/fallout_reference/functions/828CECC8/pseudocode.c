void __fastcall GeometryDecalShaderProperty::GetRenderPasses(
        GeometryDecalShaderProperty *this,
        NiGeometry *apGeom,
        int aiEnabledPasses,
        unsigned __int16 *asCount,
        unsigned int auiRenderMode,
        BSShaderAccumulator *apAccumulator,
        bool abUpdateList)
{
  __int64 v7; // r4
  BSShaderProperty *v8; // r31
  NiGeometry *v9; // r29
  int v10; // r5
  int v11; // r27
  int v12; // r7
  int v13; // r26
  NiBound *v14; // r11
  double v15; // fp13
  char v16; // r28
  double v17; // fp0
  double v18; // fp11
  double v19; // fp0
  int v20; // r11
  double v21; // fp1
  BSShaderProperty::RenderPassArray *pRenderPassList; // r3
  ShadowSceneLight *v23; // [sp+38h] [-88h]
  float m_fRadius; // [sp+7Ch] [-44h]

  v7 = _savegprlr_26(this, apGeom); /*0x828ceccc*/
  v8 = (BSShaderProperty *)HIDWORD(v7); /*0x828cecd4*/
  v9 = (NiGeometry *)v7; /*0x828cecd8*/
  v11 = v10; /*0x828cecdc*/
  v13 = v12; /*0x828cece0*/
  if ( v12 != 7 ) /*0x828cece8*/
  {
    v14 = *(NiBound **)(v7 + 32); /*0x828cecfc*/
    v15 = *(float *)(HIDWORD(v7) + 52); /*0x828ced00*/
    v16 = 1; /*0x828ced04*/
    if ( !v14 ) /*0x828ced28*/
      v14 = &NiAVObject::NullBoundS; /*0x828ced30*/
    m_fRadius = v14->m_fRadius; /*0x828ced68*/
    v17 = __fsqrts((float)((float)((float)(v14->m_kCenter.x - BSShaderManager::pShadowSceneNode[0]->kEyePosition.x) /*0x828ced94*/
                                 * (float)(v14->m_kCenter.x - BSShaderManager::pShadowSceneNode[0]->kEyePosition.x))
                         + (float)((float)((float)(v14->m_kCenter.z
                                                 - BSShaderManager::pShadowSceneNode[0]->kEyePosition.z)
                                         * (float)(v14->m_kCenter.z
                                                 - BSShaderManager::pShadowSceneNode[0]->kEyePosition.z))
                                 + (float)((float)(v14->m_kCenter.y
                                                 - BSShaderManager::pShadowSceneNode[0]->kEyePosition.y)
                                         * (float)(v14->m_kCenter.y
                                                 - BSShaderManager::pShadowSceneNode[0]->kEyePosition.y)))));
    v18 = (float)((float)v17 - m_fRadius); /*0x828ced98*/
    *(float *)(HIDWORD(v7) + 52) = (float)v17 - m_fRadius; /*0x828ced9c*/
    v19 = BSShaderManager::fSkinnedDecalLODEnd; /*0x828ceda0*/
    if ( v18 != v15 && (v18 < v19 && v15 >= v19 || v18 >= v19 && v15 < v19) ) /*0x828cedc8*/
    {
      *(_DWORD *)(HIDWORD(v7) + 56) = 0; /*0x828cedcc*/
      v19 = BSShaderManager::fSkinnedDecalLODEnd; /*0x828cedd0*/
    }
    if ( (_DWORD)v7 != -192 ) /*0x828cedd8*/
    {
      v20 = *(_DWORD *)(v7 + 200); /*0x828cede0*/
      v21 = 1.0; /*0x828cede8*/
      if ( v20 ) /*0x828cedec*/
      {
        v21 = *(float *)(v20 + 60); /*0x828cedf4*/
        if ( BSShaderManager::fDecalLODEnd <= 0.0 || v18 < v19 ) /*0x828cee10*/
        {
          if ( BSShaderManager::fSkinnedDecalLODStartFade > 0.0 /*0x828cee40*/
            && v19 > 0.0
            && v18 >= BSShaderManager::fSkinnedDecalLODStartFade
            && v18 < v19 )
          {
            v21 = (float)((float)((float)v18 - (float)v19) /*0x828cee4c*/
                        / (float)(BSShaderManager::fSkinnedDecalLODStartFade - (float)v19));
          }
        }
        else
        {
          v16 = 0; /*0x828cee14*/
        }
      }
      BSShaderProperty::SetAlpha((BSShaderProperty *)HIDWORD(v7), v21); /*0x828cee54*/
    }
    if ( v8->iLastRenderPassState != v11 ) /*0x828cee60*/
    {
      BSShaderProperty::CheckCreateRenderPassArray(v8, 1); /*0x828cee6c*/
      v8->pRenderPassList->iSize = 0; /*0x828cee7c*/
      if ( v16 ) /*0x828cee80*/
      {
        pRenderPassList = v8->pRenderPassList; /*0x828cee8c*/
        if ( v9->m_spSkinInstance.m_pObject ) /*0x828cee84*/
          BSShaderProperty::RenderPassArray::Add(pRenderPassList, v9, 0x1FFu, 1, 0, nullptr, nullptr, nullptr, v23); /*0x828ceeb4*/
        else
          BSShaderProperty::RenderPassArray::Add(pRenderPassList, v9, 0x1FEu, 1, 0, nullptr, nullptr, nullptr, v23); /*0x828ceec4*/
        v8->iLastRenderPassState = (v13 << 8) | v11; /*0x828ceed0*/
      }
    }
  }
  JUMPOUT(0x82C364E0); /*0x82c364e0*/
}
