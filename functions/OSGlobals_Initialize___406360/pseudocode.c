// Pass231/241: Scene/sky setup passes global B333E4 into Sky initialization path.
int __userpurge OSGlobals_Initialize___@<eax>(double st5_0@<st2>, double a2@<st1>, NiAVObject *a3)
{
  signed int v3; // edi
  NiNode *v4; // ebp
  NiDirectionalLight *SunDirectionalLight; // eax
  _DWORD *ShadowSceneNode; // eax
  NiAVObject *v7; // eax
  NiObject *NiPropertyByID; // eax
  NiObject *v9; // eax
  NiNode *v10; // eax
  NiObject *v11; // eax
  NiObject *v12; // eax
  NiNode *SunGeometry; // ecx
  NiObject *v14; // eax
  NiObject *v15; // eax
  NiNode *SunGlareGeometry; // ecx
  NiObject *v17; // eax
  NiObject *v18; // eax
  NiNode *v19; // ecx
  NiProperty *v20; // eax
  NiProperty *v21; // esi
  int v22; // eax
  char v23; // al
  NiProperty *v24; // eax
  NiNode *v25; // esi
  int v26; // edi
  NiDirectionalLight *v27; // eax
  NiAVObjectVtbl *vtbl; // ecx
  TES *v29; // eax
  TES *v30; // eax
  char v31; // bl
  char **v32; // edx
  Data *v33; // eax
  Data *v34; // eax
  int *v35; // eax
  int *v36; // eax
  TESForm *v37; // eax
  TESForm *v38; // esi
  Data *OverrideFile; // eax
  Data *v40; // eax
  int result; // eax
  double v42; // st7
  NiNode *v43; // [esp+Ch] [ebp-60h]
  NiDirectionalLight *v44; // [esp+Ch] [ebp-60h]
  NiNode *v45; // [esp+Ch] [ebp-60h]
  float v46[3]; // [esp+2Ch] [ebp-40h] BYREF
  _DWORD v47[10]; // [esp+38h] [ebp-34h]
  int v48; // [esp+68h] [ebp-4h]

  PrintToLog___("Initializing Sky..."); /*0x406390*/
  unk_B333B0 = Sky_CreateOrGetGlobalObject(); /*0x4063ad*/
  sub_5411D0(unk_B333B0, (Ni2DBuffer *)root, (int)unk_B333E4);// Fog decode: passes global B333E4 into Sky/Atmosphere setup: sub_5411D0(B333B0, B333D8, B333E4). /*0x4063b2*/
  v3 = 0; /*0x4063ca*/
  ((void (__thiscall *)(NiNode *, void *, _DWORD))unk_B333DC->vtbl->AddObject)( /*0x4063d4*/
    unk_B333DC,
    unk_B333B0->sun->membr.SunGlareBillboard,
    0);
  v4 = MEMORY[0xB333AC]; /*0x4063d6*/
  v43 = MEMORY[0xB333AC]; /*0x4063e2*/
  SunDirectionalLight = Sky::GetSunDirectionalLight(unk_B333B0); /*0x4063e3*/
  sub_708E40(SunDirectionalLight, v43); /*0x4063ea*/
  v44 = Sky::GetSunDirectionalLight(unk_B333B0);// Oblivion world initialization obtains the Sky sun directional light before creating the ShadowSceneNode light-level reference wrapper. /*0x4063fa*/
  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x4063fc*/
  ShadowSceneNode_RecreateLightLevelReference(ShadowSceneNode, (int)v44);// Create/replace the world ShadowSceneNode+0x118 reference wrapper using Oblivion's sun directional light. /*0x406406*/
  NiAVObject_InitializePropertyState((NiAVObject *)root); /*0x406411*/
  NiNode_UpdateDynamicEffectState(root); /*0x40641c*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)root, 0.0, 1); /*0x40642f*/
  NiAVObject_InitializePropertyState((NiAVObject *)unk_B333DC); /*0x40643a*/
  NiNode_UpdateDynamicEffectState(unk_B333DC); /*0x406445*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)unk_B333DC, 0.0, 1); /*0x406458*/
  BSShaderManager_AssignShadersRecursive((NiAVObject *)root, 0xAu, 0, 1); /*0x406469*/
  BSShaderManager_AssignShadersRecursive((NiAVObject *)unk_B333DC, 0xAu, 0, 1); /*0x40647a*/
  v7 = Shared_GetPointerAtOffset08(unk_B333B0->atmosphere); /*0x40648a*/
  if ( v7 ) /*0x406491*/
  {
    NiPropertyByID = (NiObject *)NiNode_GetNiPropertyByID((NiNode *)v7, 4); /*0x406497*/
    v9 = NiRTTI_Cast((BSStringT *)stru_B4335C, NiPropertyByID); /*0x4064a2*/
    if ( v9 ) /*0x4064ac*/
      v9[0x11].__vftable = (NiObjectVtbl *)2; /*0x4064ae*/
  }
  v10 = sub_95F870(unk_B333B0->atmosphere); /*0x4064c1*/
  if ( v10 ) /*0x4064c8*/
  {
    v11 = (NiObject *)NiNode_GetNiPropertyByID(v10, 4); /*0x4064ce*/
    v12 = NiRTTI_Cast((BSStringT *)stru_B4335C, v11); /*0x4064d9*/
    if ( v12 ) /*0x4064e3*/
      v12[0x11].__vftable = (NiObjectVtbl *)4; /*0x4064e5*/
  }
  SunGeometry = (NiNode *)unk_B333B0->sun->membr.SunGeometry; /*0x4064f8*/
  if ( SunGeometry ) /*0x4064fd*/
  {
    v14 = (NiObject *)NiNode_GetNiPropertyByID(SunGeometry, 4); /*0x406501*/
    v15 = NiRTTI_Cast((BSStringT *)stru_B4335C, v14); /*0x40650c*/
    if ( v15 ) /*0x406516*/
      v15[0x11].__vftable = 0; /*0x406518*/
  }
  SunGlareGeometry = (NiNode *)unk_B333B0->sun->membr.SunGlareGeometry; /*0x406526*/
  if ( SunGlareGeometry ) /*0x40652b*/
  {
    v17 = (NiObject *)NiNode_GetNiPropertyByID(SunGlareGeometry, 4); /*0x40652f*/
    v18 = NiRTTI_Cast((BSStringT *)stru_B4335C, v17); /*0x40653a*/
    if ( v18 ) /*0x406544*/
      v18[0x11].__vftable = (NiObjectVtbl *)1; /*0x406546*/
  }
  do
  {
    v19 = *(&unk_B333B0->clouds->unk08 + v3); /*0x40655e*/
    if ( v19 )
    {
      v20 = NiNode_GetNiPropertyByID(v19, 4); /*0x406568*/
      v21 = v20; /*0x40656d*/
      if ( v20 )
      {
        v22 = (*((int (__thiscall **)(NiProperty *))v20->vtbl + 1))(v20); /*0x40657a*/
        if ( v22 ) /*0x40657e*/
        {
          while ( (char *)v22 != stru_B4335C ) /*0x406585*/
          {
            v22 = *(_DWORD *)(v22 + 4); /*0x406587*/
            if ( !v22 ) /*0x40658c*/
              goto LABEL_18; /*0x40658c*/
          }
          v23 = 1; /*0x4065f4*/
        }
        else
        {
LABEL_18:
          v23 = 0; /*0x40658e*/
        }
        v24 = v23 != 0 ? v21 : 0;
        if ( v24 ) /*0x406596*/
        {
          v24[5].members.m_extraDataList = (NiExtraData **)3; /*0x406598*/
          LOWORD(v24[5].members.m_controller) = v3; /*0x40659e*/
        }
      }
    }
    v3 = (v3 + 1) % 3u; /*0x4065ae*/
  }
  while ( v3 < 2 );
  v25 = MEMORY[0xB333A8]; /*0x4065b5*/
  v26 = 0; /*0x4065bb*/
  if ( MEMORY[0xB333A8] ) /*0x4065bf*/
  {
    v45 = MEMORY[0xB333A8]; /*0x4065c7*/
    v27 = Sky::GetSunDirectionalLight(unk_B333B0); /*0x4065c8*/
    sub_708E40(v27, v45); /*0x4065cf*/
    if ( v25->members.children.end && (vtbl = v25->members.children.data->vtbl) != 0 ) /*0x4065e7*/
      v25 = (NiNode *)(*((int (__thiscall **)(NiAVObjectVtbl *))vtbl->super.super.Destructor + 2))(vtbl); /*0x4065f0*/
    else
      v25 = 0; /*0x4065f8*/
  }
  PrintToLog___("Initializing TES..."); /*0x4065ff*/
  v29 = (TES *)FormHeapAlloc(0xACu); /*0x406609*/
  v48 = 0; /*0x406617*/
  if ( v29 ) /*0x40661b*/
    v30 = TES_constr(v29, "Data\\", v4, v25, unk_B333B0); /*0x40662d*/
  else
    v30 = 0; /*0x406634*/
  v48 = 0xFFFFFFFF; /*0x40663b*/
  MEMORY[0xB333A0] = v30; /*0x40663f*/
  sub_43F560(v30); /*0x406644*/
  PrintToLog___("Initializing TreeManager..."); /*0x40664e*/
  BSTreeManager__Create(0); /*0x406654*/
  PrintToLog___("Initializing Menus..."); /*0x40665e*/
  NiAVObject_InitializePropertyState(a3); /*0x40666c*/
  NiNode_UpdateDynamicEffectState((NiNode *)a3); /*0x406673*/
  NiAVObject_UpdateNiAVObject(a3, 0.0, 1); /*0x406682*/
  v31 = 0; /*0x406687*/
  v47[0] = &off_B02C90; /*0x406689*/
  v47[1] = &off_B02C98; /*0x406691*/
  v47[2] = &off_B02CA0; /*0x406699*/
  v47[3] = &off_B02CA8; /*0x4066a1*/
  v47[4] = &off_B02CB0; /*0x4066a9*/
  v47[5] = &off_B02CB8; /*0x4066b1*/
  v47[6] = &off_B02CC0; /*0x4066b9*/
  v47[7] = &off_B02CC8; /*0x4066c1*/
  v47[8] = &off_B02CD0; /*0x4066c9*/
  v47[9] = &off_B02CD8; /*0x4066d1*/
  do /*0x406738*/
  {
    v32 = (char **)v47[v26]; /*0x4066e0*/
    if ( v32 ) /*0x4066e6*/
    {
      if ( *v32 ) /*0x4066e8*/
      {
        if ( strlen(*v32) ) /*0x4066f7*/
        {
          v33 = (Data *)sub_447C50((int *)MEMORY[0xB33A98], *v32); /*0x40671e*/
          if ( v33 ) /*0x406725*/
          {
            TESFile_SetIsLoaded(v33, 1); /*0x40672b*/
            v31 = 1; /*0x406730*/
          }
        }
      }
    }
    ++v26; /*0x406732*/
  }
  while ( v26 < 0xA ); /*0x406738*/
  if ( !TESDataHandler_LoadPluginsFromFile((const char *)&MEMORY[0xB3F178], PluginsTXT) && !v31 ) /*0x406755*/
  {
    v34 = (Data *)sub_447C50((int *)MEMORY[0xB33A98], "Oblivion.esm"); /*0x406762*/
    if ( v34 ) /*0x406769*/
      TESFile_SetIsLoaded(v34, 1); /*0x40676f*/
  }
  v35 = (int *)FormHeapAlloc(0x804u); /*0x406779*/
  v48 = 1; /*0x406787*/
  if ( v35 ) /*0x40678f*/
    v36 = PlayerCharacter_constr(v35, st5_0, a2); /*0x406793*/
  else
    v36 = 0; /*0x40679a*/
  v48 = 0xFFFFFFFF; /*0x4067a2*/
  reference = (PlayerCharacter *)v36; /*0x4067a6*/
  TESForm_SetFormID((TESForm *)v36, 0x14, 1); /*0x4067ab*/
  PrintToLog___("Loading Files..."); /*0x4067b5*/
  TESDataHandler_LoadFiles_(MEMORY[0xB33A98], st5_0, a2, 0.0, 0, 0); /*0x4067c7*/
  sub_443550((int *)MEMORY[0xB333A0]); /*0x4067d2*/
  PrintToLog___("Initializing Player..."); /*0x4067dc*/
  v37 = TESForm_LookupByFormID(7u); /*0x4067f4*/
  v38 = (TESForm *)OblivionDynamicCast( /*0x40680b*/
                     v37,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESNPC `RTTI Type Descriptor',
                     0);
  TESObjectREFR_SetBaseForm((TESObjectREFR *)reference, v38); /*0x40680e*/
  v46[0] = 2048.0; /*0x40681f*/
  v46[1] = 2048.0; /*0x406823*/
  v46[2] = 0.0; /*0x40682e*/
  ((void (__thiscall *)(PlayerCharacter *, float *))reference->vtbl->super.super.Unk_73)(reference, v46); /*0x40683a*/
  sub_4D89A0((int *)reference, SLODWORD(g_zeroNiPoint3), SLODWORD(MEMORY[0xB3F9AC]), SLODWORD(MEMORY[0xB3F9B0][0])); /*0x406861*/
  reference->vtbl->super.super.super.super.DoPostFixup((TESForm *)reference); /*0x406871*/
  if ( !reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Fatigue) )
  {
    OverrideFile = TESForm_GetOverrideFile(v38, 0); /*0x40688c*/
    sub_404EC0("ERROR: Fatigue value is 0 on the Player. Fix '%s' with the editor.", OverrideFile->name);
  }
  if ( !reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Health) )
  {
    v40 = TESForm_GetOverrideFile(v38, 0); /*0x4068bb*/
    sub_404EC0("ERROR: Health value is 0 on the Player. Fix '%s' with the editor.", v40->name);
  }
  PrintToLog___("Initializing Scripts..."); /*0x4068d6*/
  sub_447D80(MEMORY[0xB33A98], st5_0, a2); /*0x4068e4*/
  PrintToLog___("Initializing Sound System..."); /*0x4068ee*/
  sub_6AF850(0); /*0x4068f5*/
  result = dword_B02D10; /*0x4068fa*/
  if ( (unsigned int)(dword_B02D10 - 1) <= 0xC6 ) /*0x40690b*/
  {
    if ( dword_B02D10 ) /*0x40690f*/
      v42 = 1000.0 / (double)(unsigned int)dword_B02D10; /*0x406921*/
    else
      v42 = 0.0; /*0x406929*/
    *(float *)&MEMORY[0xB33E90][4] = v42; /*0x40692b*/
  }
  return result; /*0x406931*/
}
