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
  int v35; // eax
  PlayerCharacter *v36; // eax
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

  PrintToLog___("Initializing Sky...");
  dword_B333B0 = Sky_CreateOrGetGlobalObject();
  sub_5411D0(dword_B333B0, (Ni2DBuffer *)dword_B333D8, (int)dword_B333E4);
  v3 = 0;
  ((void (__thiscall *)(NiNode *, void *, _DWORD))dword_B333DC->vtbl->AddObject)(
    dword_B333DC,
    dword_B333B0->sun->membr.SunGlareBillboard,
    0);
  v4 = ObjectLODRoot;
  v43 = ObjectLODRoot;
  SunDirectionalLight = Sky::GetSunDirectionalLight(dword_B333B0);
  sub_708E40(SunDirectionalLight, (int)v43);
  v44 = Sky::GetSunDirectionalLight(dword_B333B0);
  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
  sub_7C5850(ShadowSceneNode, (int)v44);
  NiAVObject_InitializePropertyState((NiAVObject *)dword_B333D8);
  NiNode_UpdateDynamicEffectState(dword_B333D8);
  NiAVObject_UpdateNiAVObject((NiAVObject *)dword_B333D8, 0.0, 1);
  NiAVObject_InitializePropertyState((NiAVObject *)dword_B333DC);
  NiNode_UpdateDynamicEffectState(dword_B333DC);
  NiAVObject_UpdateNiAVObject((NiAVObject *)dword_B333DC, 0.0, 1);
  sub_7B8940((NiAVObject *)dword_B333D8, 0xA, 0, 1);
  sub_7B8940((NiAVObject *)dword_B333DC, 0xA, 0, 1);
  v7 = sub_452A60(dword_B333B0->atmosphere);
  if ( v7 )
  {
    NiPropertyByID = (NiObject *)NiNode_GetNiPropertyByID((NiNode *)v7, 4);
    v9 = NiRTTI_Cast((BSStringT *)dword_B4335C, NiPropertyByID);
    if ( v9 )
      v9[0x11].__vftable = (NiObjectVtbl *)2;
  }
  v10 = sub_95F870(dword_B333B0->atmosphere);
  if ( v10 )
  {
    v11 = (NiObject *)NiNode_GetNiPropertyByID(v10, 4);
    v12 = NiRTTI_Cast((BSStringT *)dword_B4335C, v11);
    if ( v12 )
      v12[0x11].__vftable = (NiObjectVtbl *)4;
  }
  SunGeometry = (NiNode *)dword_B333B0->sun->membr.SunGeometry;
  if ( SunGeometry )
  {
    v14 = (NiObject *)NiNode_GetNiPropertyByID(SunGeometry, 4);
    v15 = NiRTTI_Cast((BSStringT *)dword_B4335C, v14);
    if ( v15 )
      v15[0x11].__vftable = 0;
  }
  SunGlareGeometry = (NiNode *)dword_B333B0->sun->membr.SunGlareGeometry;
  if ( SunGlareGeometry )
  {
    v17 = (NiObject *)NiNode_GetNiPropertyByID(SunGlareGeometry, 4);
    v18 = NiRTTI_Cast((BSStringT *)dword_B4335C, v17);
    if ( v18 )
      v18[0x11].__vftable = (NiObjectVtbl *)1;
  }
  do
  {
    v19 = *(&dword_B333B0->clouds->unk08 + v3);
    if ( v19 )
    {
      v20 = NiNode_GetNiPropertyByID(v19, 4);
      v21 = v20;
      if ( v20 )
      {
        v22 = (*((int (__thiscall **)(NiProperty *))v20->vtbl + 1))(v20);
        if ( v22 )
        {
          while ( (char *)v22 != dword_B4335C )
          {
            v22 = *(_DWORD *)(v22 + 4);
            if ( !v22 )
              goto LABEL_18;
          }
          v23 = 1;
        }
        else
        {
LABEL_18:
          v23 = 0;
        }
        v24 = v23 != 0 ? v21 : 0;
        if ( v24 )
        {
          v24[5].members.m_extraDataList = (NiExtraData **)3;
          LOWORD(v24[5].members.m_controller) = v3;
        }
      }
    }
    v3 = (v3 + 1) % 3u;
  }
  while ( v3 < 2 );
  v25 = LODRoot;
  v26 = 0;
  if ( LODRoot )
  {
    v45 = LODRoot;
    v27 = Sky::GetSunDirectionalLight(dword_B333B0);
    sub_708E40(v27, (int)v45);
    if ( v25->members.children.end && (vtbl = v25->members.children.data->vtbl) != 0 )
      v25 = (NiNode *)(*((int (__thiscall **)(NiAVObjectVtbl *))vtbl->super.super.Destructor + 2))(vtbl);
    else
      v25 = 0;
  }
  PrintToLog___("Initializing TES...");
  v29 = (TES *)FormHeapAlloc(0xACu);
  v48 = 0;
  if ( v29 )
    v30 = TES_constr(v29, "Data\\", v4, v25, dword_B333B0);
  else
    v30 = 0;
  v48 = 0xFFFFFFFF;
  TES = v30;
  sub_43F560(v30);
  PrintToLog___("Initializing TreeManager...");
  sub_55F750(0);
  PrintToLog___("Initializing Menus...");
  NiAVObject_InitializePropertyState(a3);
  NiNode_UpdateDynamicEffectState((NiNode *)a3);
  NiAVObject_UpdateNiAVObject(a3, 0.0, 1);
  v31 = 0;
  v47[0] = &off_B02C90;
  v47[1] = &off_B02C98;
  v47[2] = &off_B02CA0;
  v47[3] = &off_B02CA8;
  v47[4] = &off_B02CB0;
  v47[5] = &off_B02CB8;
  v47[6] = &off_B02CC0;
  v47[7] = &off_B02CC8;
  v47[8] = &off_B02CD0;
  v47[9] = &off_B02CD8;
  do
  {
    v32 = (char **)v47[v26];
    if ( v32 )
    {
      if ( *v32 )
      {
        if ( strlen(*v32) )
        {
          v33 = (Data *)sub_447C50((int *)TESDataHandler, *v32);
          if ( v33 )
          {
            TESFile_SetIsLoaded(v33, 1);
            v31 = 1;
          }
        }
      }
    }
    ++v26;
  }
  while ( v26 < 0xA );
  if ( !sub_404B00((const char *)&AppDataPath, PluginsTXT) && !v31 )
  {
    v34 = (Data *)sub_447C50((int *)TESDataHandler, "Oblivion.esm");
    if ( v34 )
      TESFile_SetIsLoaded(v34, 1);
  }
  v35 = FormHeapAlloc(0x804u);
  v48 = 1;
  if ( v35 )
    v36 = (PlayerCharacter *)PlayerCharacter_constr(v35, st5_0, a2);
  else
    v36 = 0;
  v48 = 0xFFFFFFFF;
  TESDataHandler_g_PlayerRef = v36;
  TESForm_SetFormID((TESForm *)v36, 0x14, 1);
  PrintToLog___("Loading Files...");
  TESDataHandler_LoadFiles_(TESDataHandler, st5_0, a2, 0.0, 0, 0);
  sub_443550((int *)TES);
  PrintToLog___("Initializing Player...");
  v37 = TESForm_LookupByFormID(7u);
  v38 = (TESForm *)OblivionDynamicCast(
                     v37,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESNPC `RTTI Type Descriptor',
                     0);
  TESObjectREFR_SetBaseForm((TESObjectREFR *)TESDataHandler_g_PlayerRef, (int)v38);
  v46[0] = 2048.0;
  v46[1] = 2048.0;
  v46[2] = 0.0;
  ((void (__thiscall *)(PlayerCharacter *, float *))TESDataHandler_g_PlayerRef->vtbl->super.super.Unk_73)(
    TESDataHandler_g_PlayerRef,
    v46);
  sub_4D89A0(
    (int *)TESDataHandler_g_PlayerRef,
    SLODWORD(Vector3_InitValue_),
    *((int *)&Vector3_InitValue_ + 1),
    SLODWORD(dword_B3F9B0));
  TESDataHandler_g_PlayerRef->vtbl->super.super.super.super.DoPostFixup((TESForm *)TESDataHandler_g_PlayerRef);
  if ( !TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Fatigue) )
  {
    OverrideFile = TESForm_GetOverrideFile(v38, 0);
    sub_404EC0("ERROR: Fatigue value is 0 on the Player. Fix '%s' with the editor.", OverrideFile->name);
  }
  if ( !TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Health) )
  {
    v40 = TESForm_GetOverrideFile(v38, 0);
    sub_404EC0("ERROR: Health value is 0 on the Player. Fix '%s' with the editor.", v40->name);
  }
  PrintToLog___("Initializing Scripts...");
  sub_447D80(TESDataHandler, st5_0, a2);
  PrintToLog___("Initializing Sound System...");
  sub_6AF850(0);
  result = dword_B02D10;
  if ( (unsigned int)(dword_B02D10 - 1) <= 0xC6 )
  {
    if ( dword_B02D10 )
      v42 = 1000.0 / (double)(unsigned int)dword_B02D10;
    else
      v42 = 0.0;
    g_FPSGlobal = v42;
  }
  return result;
}
