void __thiscall ShadowPass(NiDX9Renderer *renderer)
{
  double v1; // st5
  double v2; // st6
  BOOL v3; // eax
  _DWORD *ShadowSceneNode; // eax
  BSRenderedTexture *v5; // eax
  int v6; // edi
  int *v7; // ebp
  _DWORD *v8; // ebx
  BSRenderedTexture *v9; // esi
  PlayerCharacter *v10; // ecx
  NiNode *PlayerNode; // eax
  Actor *i; // esi
  volatile LONG *v13; // eax
  NiCullingProcess *cullingProcess; // ecx
  NiNode *nodeSkyRoot; // eax
  char m_flags; // cl
  float *v17; // esi
  int v18; // ebp
  void (__thiscall ***v19)(_DWORD, int); // edi
  double v20; // st7
  bool v21; // bl
  void (__thiscall ***v22)(_DWORD, int); // edi
  _DWORD *v23; // eax
  bool v24; // bl
  void (__thiscall ***v25)(_DWORD, int); // edi
  _DWORD *v26; // eax
  int v27; // ecx
  _DWORD *v28; // edx
  int v29; // edi
  _DWORD *v30; // eax
  int v31; // eax
  _DWORD *v32; // eax
  void (__thiscall ***v33)(_DWORD, int); // esi
  NiNode *v34; // eax
  double v35; // st7
  double v36; // st7
  Sky *GlobalObject; // eax
  int v38; // [esp+18h] [ebp-60h]
  float v39; // [esp+18h] [ebp-60h]
  char v40; // [esp+2Ch] [ebp-4Ch]
  bool v41; // [esp+2Dh] [ebp-4Bh]
  char v42; // [esp+2Eh] [ebp-4Ah]
  char v43; // [esp+2Fh] [ebp-49h]
  int v44; // [esp+30h] [ebp-48h]
  BSRenderedTexture *v45; // [esp+34h] [ebp-44h]
  int v46; // [esp+38h] [ebp-40h]
  _DWORD *v47; // [esp+3Ch] [ebp-3Ch]
  ShadowSceneLight *v48; // [esp+40h] [ebp-38h]
  NiNode *v49; // [esp+40h] [ebp-38h]
  int v50; // [esp+44h] [ebp-34h] BYREF
  int v51; // [esp+48h] [ebp-30h]
  NiCullingProcess *v52; // [esp+4Ch] [ebp-2Ch]
  int v53; // [esp+50h] [ebp-28h] BYREF
  int v54; // [esp+54h] [ebp-24h] BYREF
  int v55; // [esp+58h] [ebp-20h] BYREF
  int v56; // [esp+5Ch] [ebp-1Ch] BYREF
  int v57; // [esp+60h] [ebp-18h] BYREF
  float v58; // [esp+64h] [ebp-14h]
  int v59; // [esp+74h] [ebp-4h]

  v44 = 0;
  if ( ShaderPackage >= 3 && (v3 = (dword_B42F40 & 0x10) != 0, (dword_B42F40 & 0x10) != 0) && byte_B333B8 )
  {
    dword_B42F40 &= ~0x10u;
    byte_B333F6 = v3;
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    sub_7C5EF0(ShadowSceneNode);
    BSTextureManager_ReserveShadowMaps(g_textureManager, g_Renderer, 0);
  }
  else if ( byte_B333F6 )
  {
    if ( !byte_B333B8 )
    {
      dword_B42F40 |= 0x10u;
      v5 = (BSRenderedTexture *)dword_B06F04;
      byte_B333F6 = 0;
      if ( !TES->currentInteriorCell )
        v5 = (BSRenderedTexture *)dword_B06EFC;
      BSTextureManager_ReserveShadowMaps(g_textureManager, g_Renderer, v5);
    }
  }
  InitBSShaderAccumulator();
  if ( byte_B42CDB || ShaderPackage < 3 || (dword_B42F40 & 0x10) == 0 )
    goto LABEL_98;
  v6 = 0;
  v7 = sub_6747C0((int *)&ActorProcessManager_ptr);
  v8 = (_DWORD *)GetShadowSceneNode(0);
  v47 = v8;
  sub_7C5BE0(v8);
  v9 = (BSRenderedTexture *)dword_B06F04;
  if ( !TES->currentInteriorCell )
    v9 = (BSRenderedTexture *)dword_B06EFC;
  v45 = v9;
  BSTextureManager_ReserveShadowMaps(g_textureManager, g_Renderer, v9);
  if ( !v9 )
  {
    sub_7C7880(v8);
    goto LABEL_98;
  }
  v10 = TESDataHandler_g_PlayerRef;
  v48 = 0;
  if ( !TESDataHandler_g_PlayerRef->isThirdPerson )
  {
    if ( !sub_65D650() )
      goto LABEL_27;
    v10 = TESDataHandler_g_PlayerRef;
  }
  if ( (!v10->vtbl->super.GetMountedHorse((Actor *)v10)
     || TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetSleepState((TESObjectREFR *)TESDataHandler_g_PlayerRef) != kSitSleep_Sitting
     && TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetSleepState((TESObjectREFR *)TESDataHandler_g_PlayerRef) != kSitSleep_SittingIn
     && TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetSleepState((TESObjectREFR *)TESDataHandler_g_PlayerRef) != kSitSleep_SittingOut)
    && !Actor_GetRefractionAmount((Actor *)TESDataHandler_g_PlayerRef) )
  {
    v52 = (NiCullingProcess *)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                                (Actor *)TESDataHandler_g_PlayerRef,
                                kActorVal_Invisibility);
    if ( (double)(int)v52 == 0.0 )
    {
      PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
      v48 = ShadowSceneNodeAddShadowCaster(v8, (volatile LONG *)PlayerNode);
      v6 = 1;
    }
  }
LABEL_27:
  for ( i = (Actor *)*v7; *v7; i = (Actor *)*v7 )
  {
    if ( v6 >= (int)v45 )
      break;
    if ( i->vtbl->super.super.GetNiNode((TESObjectREFR *)i) )
    {
      if ( sub_5EA5E0(i) )
      {
        if ( (!i->vtbl->GetMountedHorse(i) || i->vtbl->super.super.GetSleepState((TESObjectREFR *)i) != kSitSleep_Sitting)
          && !Actor_GetRefractionAmount(i) )
        {
          v52 = (NiCullingProcess *)i->vtbl->GetActorValue(i, kActorVal_Invisibility);
          if ( (double)(int)v52 == 0.0 )
          {
            v13 = (volatile LONG *)i->vtbl->super.super.GetNiNode((TESObjectREFR *)i);
            ShadowSceneNodeAddShadowCaster(v8, v13);
            ++v6;
          }
        }
      }
    }
    v7 = (int *)v7[1];
    if ( !v7 )
      break;
  }
  sub_7C6DE0(v8, (int)v48);
  v49 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
  if ( v49 )
  {
    cullingProcess = g_worldScenegraph->cullingProcess;
    cullingProcess->Camera = g_worldScenegraph->camera;
    v52 = cullingProcess;
    v40 = dword_B35C00 & 1;
    sub_442A30(TES, 0, 0, 1);
    v41 = (dword_B35C00 & 8) != 0;
    sub_442A30(TES, 3u, 0, 1);
    nodeSkyRoot = TES->sky->nodeSkyRoot;
    m_flags = nodeSkyRoot->members.super.m_flags;
    nodeSkyRoot->members.super.m_flags |= 1u;
    v42 = m_flags & 1;
    LOBYTE(nodeSkyRoot) = v49->members.super.m_flags;
    v49->members.super.m_flags |= 1u;
    v43 = (unsigned __int8)nodeSkyRoot & 1;
    v58 = *(float *)&dword_B36094;
    byte_B0727C = 0;
    LOBYTE(v51) = 0;
    if ( dword_B36094 )
    {
      LOBYTE(v51) = *(_BYTE *)(dword_B36094 + 0x18) & 1;
      if ( !byte_B06F14 )
        *(_WORD *)(dword_B36094 + 0x18) |= 1u;
    }
    v17 = (float *)sub_7C5AB0(v8);
    v46 = 0;
    if ( v17 )
    {
      while ( 1 )
      {
        v18 = *sub_405AD0(v17, &v53);
        if ( v53 )
        {
          v19 = (void (__thiscall ***)(_DWORD, int))v53;
          if ( !InterlockedDecrement((volatile LONG *)(v53 + 4)) )
            (**v19)(v19, 1);
        }
        if ( !v18 )
          goto LABEL_85;
        v21 = 0;
        v20 = v17[0x38];
        v2 = flt_B2C680;
        if ( flt_B2C680 > v20 || (v20 = v17[0x37], v20 > 0.1000000014901161) )
        {
          v44 |= 1u;
          if ( (*(_BYTE *)(*sub_405AD0(v17, &v54) + 0x18) & 1) != 0 )
            v21 = 1;
        }
        if ( (v44 & 1) != 0 )
        {
          v22 = (void (__thiscall ***)(_DWORD, int))v54;
          v44 &= ~1u;
          if ( v54 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v54 + 4)) )
            {
              if ( v22 )
                (**v22)(v22, 1);
            }
          }
        }
        if ( v21 )
        {
          if ( (*(_BYTE *)(*((_DWORD *)v17 + 0x4C) + 0x18) & 1) != 0 )
          {
            v38 = 1;
          }
          else
          {
            if ( v46 < (int)v45 )
            {
              v23 = sub_405AD0(v17, &v55);
              *(_WORD *)(*v23 + 0x18) &= ~1u;
              sub_7016A0((NiD3DVertexShader *)&v55);
            }
            v38 = 0;
          }
          v20 = 0.0;
          sub_7D1ED0(v17, 0.0, *(float *)&v38);
        }
        v24 = 0;
        if ( v46 < (int)v45 )
        {
          v44 |= 2u;
          if ( (*(_BYTE *)(*sub_405AD0(v17, &v50) + 0x18) & 1) == 0
            && (*(_BYTE *)(*((_DWORD *)v17 + 0x4C) + 0x18) & 1) == 0 )
          {
            v24 = 1;
          }
        }
        v25 = (void (__thiscall ***)(_DWORD, int))v50;
        if ( (v44 & 2) != 0 )
        {
          v44 &= ~2u;
          if ( v50 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v50 + 4)) )
            {
              if ( v25 )
                (**v25)(v25, 1);
            }
          }
        }
        if ( !v24 )
          break;
        v26 = *((_DWORD **)v17 + 0x4C);
        v27 = v26[8];
        v28 = (_DWORD *)v26[9];
        v29 = v26[0xA];
        v59 = v26[0xB];
        ShadowLight_LightProjection_(0.0, (int)v17, v28, v27, (int)v28, v29);
        ShadowSceneLight_CullProcess(v17, v1, v2, v20, (int)v52);
        if ( *((_WORD *)v17 + 0x8C) == 0xFF || v17[0x36] < 0.05 )
        {
          v30 = sub_405AD0(v17, &v56);
          *(_WORD *)(*v30 + 0x18) |= 1u;
          v31 = v56;
          goto LABEL_82;
        }
        ++v46;
        sub_7D5ED0(v17);
        ShadowSceneLight_AddToScene____(v17, g_worldScenegraph);
        if ( byte_B06F0C )
          ShadowSceneLight_AddToScene____(v17, *((_BYTE **)v17 + 0x4C));
        sub_7D6A40(v17);
LABEL_85:
        v17 = (float *)sub_7C5B50(v47);
        if ( !v17 )
          goto LABEL_86;
      }
      v32 = sub_405AD0(v17, &v57);
      *(_WORD *)(*v32 + 0x18) |= 1u;
      v31 = v57;
LABEL_82:
      if ( v31 )
      {
        v33 = (void (__thiscall ***)(_DWORD, int))v31;
        if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) )
          (**v33)(v33, 1);
      }
      goto LABEL_85;
    }
LABEL_86:
    if ( !v40 )
      sub_442A30(TES, 0, 1, 1);
    if ( !v41 )
      sub_442A30(TES, 3u, 1, 1);
    v34 = TES->sky->nodeSkyRoot;
    if ( v42 )
      v34->members.super.m_flags |= 1u;
    else
      v34->members.super.m_flags &= ~1u;
    if ( v58 != 0.0 )
      sub_404CD0((_WORD *)LODWORD(v58), v51);
    byte_B0727C = 1;
    v35 = nullsub_returnTrue_0arg();
    sub_7C6770(v47, v1, v2, v35, (int)v52);
    nullsub_returnTrue_0arg();
    if ( v43 )
      v49->members.super.m_flags |= 1u;
    else
      v49->members.super.m_flags &= ~1u;
  }
LABEL_98:
  if ( bDynWinRelfections_ )
  {
    if ( !InterfaceManager_IsMenuMode()
      || InterfaceManager::IsOpenedMenuDialogue()
      || sub_572E30(2)
      || Sky_CreateOrGetGlobalObject()->unk100 )
    {
      v58 = flt_B06530 * flt_B33E9C;
      v36 = v58;
      v39 = v58;
      GlobalObject = Sky_CreateOrGetGlobalObject();
      sub_543A00(GlobalObject, v36, v39);
    }
  }
}
