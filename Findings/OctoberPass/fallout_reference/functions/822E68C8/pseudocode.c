void __fastcall BGSDecalManager::UpdateSimpleDecals(BGSDecalManager *this)
{
  int v1; // r21
  _DWORD *v2; // r27
  BSTempEffectSimpleDecal *v3; // r31
  char v4; // r11
  NiColorA *v5; // r4
  char v6; // r11
  char v11; // cr34
  void *v12; // [sp+50h] [-E0h] BYREF
  NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<ShadowSceneLight> > v13; // [sp+54h] [-DCh] BYREF
  NiColorA v14; // [sp+60h] [-D0h] BYREF
  float v15[4]; // [sp+70h] [-C0h] BYREF
  NiColorA v16; // [sp+80h] [-B0h] BYREF
  float v17[6]; // [sp+90h] [-A0h] BYREF

  v1 = ((int (__fastcall *)(BGSDecalManager *))_savegprlr_19)(this); /*0x822e68e4*/
  if ( *(_DWORD *)(v1 + 16) )
  {
    RtlEnterCriticalSection(&NiRenderer::ms_pkRenderer->m_kRendererLock); /*0x822e68fc*/
    v2 = *(_DWORD **)(v1 + 8); /*0x822e6904*/
    if ( v2 )
    {
      while ( 1 ) /*0x822e695c*/
      {
        v12 = v2; /*0x822e695c*/
        v3 = (BSTempEffectSimpleDecal *)v2[2]; /*0x822e6964*/
        v2 = (_DWORD *)*v2; /*0x822e6960*/
        if ( v3 ) /*0x822e696c*/
          break; /*0x822e696c*/
LABEL_37:
        if ( !v2 ) /*0x822e6b8c*/
          goto LABEL_38; /*0x822e6b8c*/
      }
      if ( v3->bOcclusionQuery ) /*0x822e6970*/
      {
        BGSDecalManager::IssueDecalOcclusionQuery((BGSDecalManager *)v1, v3); /*0x822e6984*/
        v3->bOcclusionQuery = 0; /*0x822e6988*/
      }
      if ( !v3->pOcclusionQuery ) /*0x822e6994*/
        goto LABEL_11; /*0x822e6994*/
      if ( BSTempEffectSimpleDecal::CheckOcclusionQueryResults(v3) )
      {
        if ( v3->iCurrentOcclusionResult )
        {
          if ( BGSDecalManager::bDebugDecals.uValue.b )
            BaseProcess::GetCreatureLipSynchStartTime((XGRAPHICS::IfHeader *)"DECAL: Decal Succeeded Occlusion Query : %s");
LABEL_11:
          ((void (__fastcall *)(BSTempEffectSimpleDecal *))v3->Initialize)(v3); /*0x822e69d4*/
          goto LABEL_12; /*0x822e69e4*/
        }
        if ( BGSDecalManager::bDebugDecals.uValue.b )
          BaseProcess::GetCreatureLipSynchStartTime((XGRAPHICS::IfHeader *)"DECAL: Decal Failed Occlusion Query : %s");
        v3->bFinished = 1; /*0x822e6ab8*/
      }
LABEL_12:
      if ( v3->bFinalize && !v3->bFinished ) /*0x822e69f4*/
        BSTempEffectSimpleDecal::FinalizeGeometry(v3); /*0x822e6a04*/
      if ( !v3->bFinished ) /*0x822e6a10*/
        goto LABEL_37; /*0x822e6a10*/
      if ( v3->bValidDecal )
      {
        ++BGSDecalManager::iDecalCount; /*0x822e6a30*/
        if ( BGSDecalManager::bDebugDecals.uValue.b )
          BaseProcess::GetCreatureLipSynchStartTime((XGRAPHICS::IfHeader *)"DECAL: Placing Simple Decal #%d : %s");
        v4 = BGSDecalManager::iDecalDebugFlags; /*0x822e6a48*/
        if ( (BGSDecalManager::iDecalDebugFlags & 1) != 0 ) /*0x822e6a54*/
        {
          v14.r = 0.0; /*0x822e6a58*/
          v14.g = 1.0; /*0x822e6a60*/
          v14.b = 0.0; /*0x822e6a68*/
          v14.a = 1.0; /*0x822e6a70*/
          BSTempEffectSimpleDecal::CreateDebugBox(v3, &v14, 1); /*0x822e6a74*/
          v4 = BGSDecalManager::iDecalDebugFlags; /*0x822e6a78*/
        }
        if ( (v4 & 2) == 0 ) /*0x822e6a84*/
          goto LABEL_32; /*0x822e6a84*/
        v15[0] = 0.0; /*0x822e6a88*/
        v5 = (NiColorA *)v15; /*0x822e6a8c*/
        v15[1] = 1.0; /*0x822e6a90*/
        v15[2] = 0.0; /*0x822e6a94*/
        v15[3] = 0.25; /*0x822e6a98*/
      }
      else
      {
        v6 = BGSDecalManager::iDecalDebugFlags; /*0x822e6ac0*/
        if ( (BGSDecalManager::iDecalDebugFlags & 0x10) == 0 ) /*0x822e6acc*/
          goto LABEL_32; /*0x822e6acc*/
        if ( (BGSDecalManager::iDecalDebugFlags & 1) != 0 ) /*0x822e6ad8*/
        {
          v16.r = 1.0; /*0x822e6adc*/
          v16.g = 0.0; /*0x822e6ae4*/
          v16.b = 0.0; /*0x822e6aec*/
          v16.a = 1.0; /*0x822e6af4*/
          BSTempEffectSimpleDecal::CreateDebugBox(v3, &v16, 1); /*0x822e6af8*/
          v6 = BGSDecalManager::iDecalDebugFlags; /*0x822e6afc*/
        }
        if ( (v6 & 2) == 0 ) /*0x822e6b08*/
          goto LABEL_32; /*0x822e6b08*/
        v17[0] = 1.0; /*0x822e6b0c*/
        v5 = (NiColorA *)v17; /*0x822e6b10*/
        v17[1] = 0.0; /*0x822e6b14*/
        v17[2] = 0.0; /*0x822e6b18*/
        v17[3] = 0.25; /*0x822e6b1c*/
      }
      BSTempEffectSimpleDecal::CreateDebugBox(v3, v5, 0); /*0x822e6b28*/
LABEL_32:
      NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiAVObject>>::RemovePos( /*0x822e6b2c*/
        &v13,
        (NiPointer<ShadowSceneLight> *)(v1 + 8),
        &v12);
      if ( v13.m_pkHead ) /*0x822e6b44*/
      {
        _R11 = &v13.m_pkHead->m_pkPrev; /*0x822e6b48*/
        do /*0x822e6b64*/
        {
          __asm /*0x822e6b4c*/
          {
            mfmsr     r9
            mtmsree   r13
            lwarx     r10, 0, r11
          }
          _R10 = _R10 - 1; /*0x822e6b58*/
          __asm /*0x822e6b5c*/
          {
            stwcx.    r10, 0, r11
            mtmsree   r9
          }
        }
        while ( !v11 ); /*0x822e6b64*/
        __lwsync(); /*0x822e6b6c*/
        if ( !_R10 ) /*0x822e6b74*/
          ((void (*)(void))v13.m_pkHead->m_pkNext->m_pkPrev)(); /*0x822e6b84*/
      }
      goto LABEL_37; /*0x822e6b84*/
    }
LABEL_38:
    RtlLeaveCriticalSection(&NiRenderer::ms_pkRenderer->m_kRendererLock); /*0x822e6b90*/
  }
  JUMPOUT(0x82C364C4); /*0x82c364c4*/
}
