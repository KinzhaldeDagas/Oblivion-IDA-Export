// Oblivion active shadow-light producer loop. Saves render mode, enters mode 5, publishes each current ShadowSceneLight, dispatches its shadow render, clears the current-light pointer, and restores the prior mode.
void __thiscall sub_7C6770(Ni2DBuffer **this, int a2)
{
  Ni2DBuffer **v3; // edi
  BSCubeMapCamera *v4; // eax
  Ni2DBuffer *v5; // eax
  _DWORD *v6; // ebp
  int v7; // esi
  bool v8; // bl
  void (__thiscall ***v9)(_DWORD, int); // edi
  bool v10; // bl
  void (__thiscall ***v11)(_DWORD, int); // edi
  NiAVObject *v12; // ecx
  void (__thiscall ***v13)(_DWORD, int); // edi
  Ni2DBuffer *v14; // edi
  #9279 *vftable; // esi
  Ni2DBuffer *v16; // edi
  int v17; // [esp+24h] [ebp-24h]
  NiCamera **v18; // [esp+28h] [ebp-20h]
  int v19; // [esp+2Ch] [ebp-1Ch] BYREF
  int v20; // [esp+30h] [ebp-18h] BYREF
  int v21; // [esp+34h] [ebp-14h] BYREF
  BSCubeMapCamera *v22; // [esp+38h] [ebp-10h]
  int v23; // [esp+44h] [ebp-4h]

  v17 = 0; /*0x7c679b*/
  BSShaderAccumulator_GetOrCreateGlobal(); /*0x7c679f*/
  if ( !g_bRendererAccumulationFrozen )         // Presentation master gate: g_bRendererAccumulationFrozen != 0 skips the complete render-mode-5 active-shadow-light loop even if ShadowPass admission succeeded. /*0x7c67a4*/
  {
    v3 = this + 0x49; /*0x7c67b8*/
    v18 = (NiCamera **)(this + 0x49); /*0x7c67be*/
    if ( !*(this + 0x49) ) /*0x7c67b0*/
    {
      v4 = (BSCubeMapCamera *)FormHeapAlloc(0x150u); /*0x7c67c9*/
      v22 = v4; /*0x7c67d1*/
      v23 = 0; /*0x7c67d7*/
      if ( v4 ) /*0x7c67db*/
        v5 = (Ni2DBuffer *)BSCubeMapCamera::BSCubeMapCamera(v4, 0); /*0x7c67e0*/
      else
        v5 = 0; /*0x7c67e7*/
      v23 = 0xFFFFFFFF; /*0x7c67ec*/
      NiSmartPointer_Set__(this + 0x49, v5); /*0x7c67f4*/
    }
    (*v3)[0xE].members.height = 0; /*0x7c67fb*/
    v22 = (BSCubeMapCamera *)*(unsigned __int16 *)&OB_RendererGlobalState_010201A0[0x13]; /*0x7c680a*/
    BSShader_SetRenderMode(5u);                 // Enter global render mode 5 for native shadow-map production; the prior mode is saved. /*0x7c680e*/
    if ( *(this + 0x40) ) /*0x7c6816*/
    {
      v6 = *(this + 0x3E); /*0x7c6822*/
      if ( v6 ) /*0x7c682a*/
      {
        do /*0x7c6953*/
        {
          v7 = v6[2]; /*0x7c6830*/
          v6 = (_DWORD *)*v6; /*0x7c6838*/
          v8 = 0; /*0x7c6853*/
          if ( v7 ) /*0x7c683b*/
          {
            v17 |= 1u; /*0x7c6849*/
            if ( *ShadowSceneLight_GetLightRef((_DWORD *)v7, &v19) ) /*0x7c684e*/
              v8 = 1; /*0x7c683b*/
          }
          if ( (v17 & 1) != 0 ) /*0x7c685e*/
          {
            v9 = (void (__thiscall ***)(_DWORD, int))v19; /*0x7c6860*/
            v17 &= ~1u; /*0x7c6864*/
            if ( v19 ) /*0x7c686b*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x7c6871*/
              {
                if ( v9 ) /*0x7c687d*/
                  (**v9)(v9, 1); /*0x7c6887*/
              }
            }
          }
          if ( v8 ) /*0x7c688b*/
          {
            v10 = (*(_BYTE *)(*ShadowSceneLight_GetLightRef((_DWORD *)v7, &v20) + 0x18) & 1) == 0; /*0x7c68a8*/
            if ( v20 ) /*0x7c68ad*/
            {
              v11 = (void (__thiscall ***)(_DWORD, int))v20; /*0x7c68af*/
              if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x7c68b5*/
                (**v11)(v11, 1); /*0x7c68cb*/
            }
            if ( v10 ) /*0x7c68cf*/
            {
              v12 = (NiAVObject *)*ShadowSceneLight_GetLightRef((_DWORD *)v7, &v21); /*0x7c68e4*/
              v23 = 1; /*0x7c68e9*/
              NiAVObject_UpdateNiAVObject(v12, 0.0, 1);// Update the backing NiLight immediately before render dispatch; the loop has no second branch update after the renderer returns. /*0x7c68f1*/
              v23 = 0xFFFFFFFF; /*0x7c68fc*/
              if ( v21 ) /*0x7c6904*/
              {
                v13 = (void (__thiscall ***)(_DWORD, int))v21; /*0x7c6906*/
                if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x7c690c*/
                  (**v13)(v13, 1); /*0x7c6922*/
              }
              if ( *(_WORD *)(v7 + 0x118) != 0xFF ) /*0x7c692d*/
              {
                *(_DWORD *)&OB_RendererGlobalState_010201A0[0x17] = v7;// Publish this ShadowSceneLight as the current mode-5 light before rendering its map. /*0x7c6937*/
                ShadowSceneLight_DispatchRender((_BYTE *)v7, *v18, a2);// Dispatch the current light to the normal per-source or special cube/object-list shadow producer. /*0x7c6943*/
              }
            }
            else
            {
              ShadowSceneLight_ClearReceiverAssociations((_DWORD *)v7); /*0x7c694c*/
            }
          }
        }
        while ( v6 );                           // Post-render active-loop edge; advance without another projector-transform consumer. /*0x7c6953*/
        v3 = (Ni2DBuffer **)v18; /*0x7c6959*/
      }
      *(_DWORD *)&OB_RendererGlobalState_010201A0[0x17] = 0;// Clear the current ShadowSceneLight pointer after the active-light loop. /*0x7c695f*/
    }
    v14 = *v3; /*0x7c6965*/
    vftable = v14[0x10].__vftable; /*0x7c6967*/
    v16 = v14 + 0x10; /*0x7c696d*/
    if ( vftable ) /*0x7c6975*/
    {
      if ( !InterlockedDecrement((volatile LONG *)vftable + 1) ) /*0x7c697b*/
        (**(void (__thiscall ***)(#9279 *, int))vftable)(vftable, 1); /*0x7c6991*/
      v16->__vftable = 0; /*0x7c6993*/
    }
    BSShader_SetRenderMode((unsigned __int16)v22);// Restore the render mode saved before the mode-5 shadow-light loop. /*0x7c699a*/
  }
}
