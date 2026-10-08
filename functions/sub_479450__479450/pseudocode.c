// Loads and clones a model for an actor equipment/add-on slot, binds actor-specific resources, applies the stock attachment transform, attaches through Prn metadata, and initializes render property/dynamic-effect state.
NiAVObject *__cdecl Actor_LoadCloneAndAttachModel3D(
        const char *modelPath,
        int slot,
        TESObjectREFR *actorRef,
        NiNode *skeletonRoot)
{
  UInt32 v5; // esi
  NiObjectNET *ModelData; // ebx
  Ni2DBuffer *v7; // eax
  int v8; // ebp
  int v9; // ebx
  NiNodeVtbl **v10; // esi
  int v11; // eax
  int v12; // eax
  NiNodeVtbl *vtbl; // eax
  UInt32 v15; // [esp+14h] [ebp-2Ch] BYREF
  void (__stdcall ***v16)(signed int); // [esp+18h] [ebp-28h] BYREF
  void (__thiscall ***v17)(_DWORD, int); // [esp+1Ch] [ebp-24h]
  float v18; // [esp+28h] [ebp-18h]
  float v19; // [esp+2Ch] [ebp-14h]
  float v20; // [esp+30h] [ebp-10h]
  int v21; // [esp+3Ch] [ebp-4h]
  NiNode *a1; // [esp+44h] [ebp+4h]

  v5 = 0; /*0x47947b*/
  if ( !modelPath ) /*0x47947f*/
    return 0; /*0x47947f*/
  if ( !actorRef ) /*0x47948b*/
    return 0; /*0x47948b*/
  a1 = skeletonRoot; /*0x479497*/
  if ( !skeletonRoot ) /*0x47949b*/
  {
    a1 = (NiNode *)actorRef->member.niNode; /*0x4794a2*/
    if ( !a1 ) /*0x4794a6*/
      return 0; /*0x4796cc*/
  }
  ModelData = (NiObjectNET *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], modelPath, 1, (void *)3, 1); /*0x4794c2*/
  OB_NiCloningProcess_ctor((NiTPointerMap<NiObject *,NiObject *> **)&v16); /*0x4794c4*/
  v20 = 1.0; /*0x4794cb*/
  v19 = 1.0; /*0x4794cf*/
  v18 = 1.0; /*0x4794d3*/
  v21 = 1; /*0x4794d7*/
  v15 = 0; /*0x4794db*/
  if ( sub_480820(ModelData) ) /*0x4794e5*/
  {
    v7 = (Ni2DBuffer *)sub_4430C0(ModelData, (int)&v16); /*0x4794fd*/
    NiSmartPointer_Set__((Ni2DBuffer **)&v15, v7); /*0x479507*/
    v8 = v15; /*0x47950c*/
    v5 = v15; /*0x479510*/
  }
  else
  {
    v8 = sub_700610(ModelData, (int)&v16); /*0x479520*/
  }
  sub_478220(ModelData, v8, slot, actorRef); /*0x47952a*/
  sub_6FFC60((_DWORD *)v8); /*0x479534*/
  if ( v8 ) /*0x47953b*/
  {
    if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB33E90][0x13F8], (NiObject *)v8) ) /*0x479547*/
      sub_4A01B0((_BYTE *)v8, 7); /*0x479557*/
    *(float *)(v8 + 0x54) = g_zeroNiPoint3.x; /*0x479561*/
    *(float *)(v8 + 0x58) = g_zeroNiPoint3.y; /*0x47956a*/
    *(float *)(v8 + 0x5C) = g_zeroNiPoint3.z; /*0x479573*/
    qmemcpy((void *)(v8 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x479584*/
    if ( sub_471B80(v8) ) /*0x479586*/
    {
      PrintError("Tyring to add skinned object '%s' as an add on to skeleton.", *(const char **)(v8 + 8)); /*0x47959b*/
    }
    else
    {
      AttachModelUsingPrnExtraData(a1, (NiAVObject *)v8, ModelData, 0, 0xFFFFFFFF); /*0x4795b5*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) ) /*0x4795c5*/
      {
        v9 = *(_DWORD *)(v8 + 0x1C); /*0x4795cf*/
        v10 = 0; /*0x4795d6*/
        if ( (!v9 || slot == 7 || slot == 6) && slot != 0xFFFFFFFF ) /*0x4795e9*/
        {
          v11 = *(_DWORD *)(4 * slot + 0xB065C8); /*0x4795eb*/
          if ( v11 != 0xFFFFFFFF ) /*0x4795f5*/
            v10 = (NiNodeVtbl **)NiObjectNET_LookupObjectByName(a1, *(char **)(4 * v11 + 0xB06550)); /*0x47960c*/
        }
        if ( v9 ) /*0x479610*/
        {
          if ( slot != 7 && slot != 6 ) /*0x47961a*/
            goto LABEL_31; /*0x47961a*/
          v12 = ((int (__thiscall *)(TESObjectREFR *))actorRef->vtbl->GetActiveSkinInfo)(actorRef); /*0x479628*/
          if ( v12 ) /*0x47962c*/
          {
            if ( *(_DWORD *)(v8 + 0x1C) == *(_DWORD *)(v12 + 0x20) ) /*0x479634*/
              goto LABEL_31; /*0x479634*/
          }
          if ( !v10 ) /*0x479638*/
            goto LABEL_31; /*0x479638*/
          vtbl = *v10; /*0x47963a*/
        }
        else if ( v10 ) /*0x479642*/
        {
          vtbl = *v10; /*0x479644*/
        }
        else
        {
          vtbl = a1->vtbl; /*0x47964e*/
        }
        ((void (__stdcall *)(int, int))vtbl->AddObject)(v8, 1); /*0x479659*/
      }
    }
LABEL_31:
    NiNode_UpdateDynamicEffectState((NiNode *)v8); /*0x47965b*/
    NiAVObject_InitializePropertyState((NiAVObject *)v8); /*0x479664*/
    v5 = v15; /*0x479669*/
  }
  LOBYTE(v21) = 0; /*0x47966d*/
  if ( v5 ) /*0x479674*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x47967a*/
      (**(void (__thiscall ***)(UInt32, int))v5)(v5, 1); /*0x47968c*/
  }
  v21 = 0xFFFFFFFF; /*0x479694*/
  if ( v16 ) /*0x47969c*/
    ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v16)(v16, 1); /*0x4796a4*/
  if ( v17 ) /*0x4796ac*/
    (**v17)(v17, 1); /*0x4796b4*/
  return (NiAVObject *)v8; /*0x4796b8*/
}
