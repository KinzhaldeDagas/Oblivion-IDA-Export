void __userpurge sub_47A2C0(ActorAnimData *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, UInt32 a5)
{
  UInt32 v6; // esi
  UInt32 *v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // esi
  bool v11; // al
  const char *v12; // eax
  BSExtraDataVtbl *Light; // eax
  PlayerCharacter *v14; // ecx
  void (__thiscall *Destructor)(BSExtraData *); // esi
  char v16; // al
  char v17; // al
  const char *v18; // eax
  UInt32 v19; // ebp
  NiObjectNET *ModelData; // esi
  Ni2DBuffer *v21; // eax
  char *v22; // eax
  int v23; // edx
  char *m_data; // ecx
  void (__thiscall ***v25)(_DWORD, int); // esi
  _DWORD *v26; // ecx
  int (__thiscall *v27)(_DWORD *, int); // eax
  const char *v28; // eax
  NiObjectNET *v29; // ebx
  char *v30; // esi
  TESObjectREFR *v31; // [esp-8h] [ebp-50h]
  NiNode *NodeByPerspective; // [esp-4h] [ebp-4Ch]
  int v33; // [esp-4h] [ebp-4Ch]
  int v34; // [esp-4h] [ebp-4Ch]
  BSStringT Src; // [esp+18h] [ebp-30h] BYREF
  void (__stdcall ***v36)(signed int); // [esp+20h] [ebp-28h] BYREF
  void (__thiscall ***v37)(_DWORD, int); // [esp+24h] [ebp-24h]
  float v38; // [esp+30h] [ebp-18h]
  float v39; // [esp+34h] [ebp-14h]
  float v40; // [esp+38h] [ebp-10h]
  int v41; // [esp+44h] [ebp-4h]

  v6 = a5; /*0x47a2e9*/
  if ( a5 ) /*0x47a2ef*/
  {
    if ( *(_BYTE *)(a5 + 4) == 0x1A ) /*0x47a2f9*/
    {
      v7 = (UInt32 *)((char *)this + 0x12C); /*0x47a303*/
      ActorSkinInfo_ClearOrReplaceEquipmentSlot((ActorSkinInfo *)this, (ActorSkinInfoEquipmentSlot *)this + 0x19, 1, 0); /*0x47a30a*/
      if ( *(_BYTE *)(v6 + 4) == 0x1A ) /*0x47a313*/
      {
        ActorSkinInfo_ClearOrReplaceEquipmentSlot( /*0x47a31c*/
          (ActorSkinInfo *)this,
          (ActorSkinInfoEquipmentSlot *)this + 0x19,
          1,
          0);
        *v7 = v6; /*0x47a321*/
        *((_DWORD *)this + 0x4C) = v6 + 0x30; /*0x47a327*/
      }
      v8 = *((_DWORD *)this + 0x4C); /*0x47a32d*/
      if ( v8 ) /*0x47a335*/
      {
        v9 = *((_DWORD *)this + 0x54); /*0x47a33b*/
        if ( (PlayerCharacter *)v9 == reference ) /*0x47a349*/
        {
          v10 = *((_DWORD *)this + 0x4C); /*0x47a350*/
          v11 = sub_65D770(reference, (int)this); /*0x47a352*/
          NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, v11); /*0x47a365*/
          v31 = *((TESObjectREFR **)this + 0x54); /*0x47a36c*/
          v12 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v10 + 0x14))( /*0x47a374*/
                                v10,
                                a4,
                                a3,
                                st5_0);
          *((_DWORD *)this + 0x4D) = Actor_LoadCloneAndAttachModel3D(v12, 0xE, v31, NodeByPerspective); /*0x47a37c*/
          Light = ExtraDataList_GetLight(&reference->super.super.super.super.baseExtraList); /*0x47a38e*/
          v14 = reference; /*0x47a395*/
          if ( Light ) /*0x47a39b*/
          {
            Destructor = ExtraDataList_GetLight(&v14->super.super.super.super.baseExtraList)->Destructor; /*0x47a3ab*/
            v16 = sub_65D770(reference, (int)this); /*0x47a3ae*/
            sub_663870((Ni2DBuffer **)reference, (Ni2DBuffer *)Destructor, v16); /*0x47a3bb*/
          }
          else
          {
            v17 = sub_65D770(v14, (int)this); /*0x47a3c6*/
            sub_663870((Ni2DBuffer **)reference, 0, v17); /*0x47a3d4*/
          }
        }
        else
        {
          v18 = (const char *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v8 + 0x14))( /*0x47a3e5*/
                                *((_DWORD *)this + 0x4C),
                                a4,
                                a3,
                                st5_0);
          v19 = 0; /*0x47a3e7*/
          if ( v18 ) /*0x47a3eb*/
          {
            if ( v9 ) /*0x47a3f3*/
            {
              Src.m_data = *(char **)(v9 + 0x3C); /*0x47a3fe*/
              if ( Src.m_data ) /*0x47a402*/
              {
                ModelData = (NiObjectNET *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v18, 1, (void *)3, 1); /*0x47a41a*/
                OB_NiCloningProcess_ctor(&v36); /*0x47a424*/
                v40 = 1.0; /*0x47a42b*/
                v39 = 1.0; /*0x47a42f*/
                v38 = 1.0; /*0x47a433*/
                v41 = 1; /*0x47a437*/
                a5 = 0; /*0x47a43b*/
                if ( sub_480820(ModelData) ) /*0x47a445*/
                {
                  v21 = (Ni2DBuffer *)sub_4430C0(ModelData, (int)&v36); /*0x47a45d*/
                  NiSmartPointer_Set__((Ni2DBuffer **)&a5, v21); /*0x47a467*/
                  v19 = a5; /*0x47a46c*/
                }
                else
                {
                  v19 = sub_700610(ModelData, (int)&v36); /*0x47a47e*/
                }
                sub_478220(ModelData, v19, 0xE, (TESObjectREFR *)v9); /*0x47a485*/
                sub_6FFC60((_DWORD *)v19); /*0x47a48f*/
                if ( v19 ) /*0x47a496*/
                {
                  if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB33E90][0x13F8], (NiObject *)v19) ) /*0x47a4a2*/
                    sub_4A01B0((_BYTE *)v19, 7); /*0x47a4b2*/
                  *(float *)(v19 + 0x54) = g_zeroNiPoint3.x; /*0x47a4bc*/
                  *(float *)(v19 + 0x58) = g_zeroNiPoint3.y; /*0x47a4c5*/
                  *(float *)(v19 + 0x5C) = g_zeroNiPoint3.z; /*0x47a4ce*/
                  qmemcpy((void *)(v19 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x47a4df*/
                  if ( sub_471B80(v19) ) /*0x47a4e1*/
                  {
                    PrintError("Tyring to add skinned object '%s' as an add on to skeleton.", *(const char **)(v19 + 8)); /*0x47a4f6*/
                  }
                  else
                  {
                    AttachModelUsingPrnExtraData((NiNode *)Src.m_data, (NiAVObject *)v19, ModelData, 0, 0xFFFFFFFF, 0); /*0x47a511*/
                    if ( (*(int (__thiscall **)(UInt32))(*(_DWORD *)v19 + 8))(v19) ) /*0x47a521*/
                    {
                      if ( !*(_DWORD *)(v19 + 0x1C) ) /*0x47a527*/
                      {
                        if ( dword_B06600 == 0xFFFFFFFF /*0x47a54a*/
                          || (v22 = (char *)NiObjectNET_LookupObjectByName(
                                              Src.m_data,
                                              *(char **)(4 * dword_B06600 + 0xB06550))) == 0 )
                        {
                          v23 = *(_DWORD *)Src.m_data; /*0x47a552*/
                          m_data = Src.m_data; /*0x47a554*/
                        }
                        else
                        {
                          v23 = *(_DWORD *)v22; /*0x47a54c*/
                          m_data = v22; /*0x47a54e*/
                        }
                        (*(void (__thiscall **)(char *, UInt32, int))(v23 + 0x84))(m_data, v19, 1); /*0x47a55f*/
                      }
                    }
                  }
                  NiNode_UpdateDynamicEffectState((NiNode *)v19); /*0x47a563*/
                  NiAVObject_InitializePropertyState((NiAVObject *)v19); /*0x47a56a*/
                }
                v25 = (void (__thiscall ***)(_DWORD, int))a5; /*0x47a56f*/
                LOBYTE(v41) = 0; /*0x47a575*/
                if ( a5 ) /*0x47a57a*/
                {
                  if ( !InterlockedDecrement((volatile LONG *)(a5 + 4)) ) /*0x47a580*/
                    (**v25)(v25, 1); /*0x47a592*/
                }
                v41 = 0xFFFFFFFF; /*0x47a59a*/
                if ( v36 ) /*0x47a5a2*/
                  ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v36)(v36, 1); /*0x47a5aa*/
                if ( v37 ) /*0x47a5b2*/
                  (**v37)(v37, 1); /*0x47a5ba*/
              }
            }
          }
          *((_DWORD *)this + 0x4D) = v19; /*0x47a5bc*/
        }
        Src.m_data = 0; /*0x47a5c4*/
        Src.m_dataLen = 0; /*0x47a5c8*/
        Src.m_bufLen = 0; /*0x47a5cd*/
        v26 = *((_DWORD **)this + 0x4B); /*0x47a5d2*/
        v33 = v26[3]; /*0x47a5dd*/
        v27 = *(int (__thiscall **)(_DWORD *, int))(*v26 + 0xD4); /*0x47a5de*/
        v41 = 2; /*0x47a5e4*/
        v28 = (const char *)v27(v26, v33); /*0x47a5ec*/
        BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B065C0, v28, v34); /*0x47a600*/
        v29 = *((NiObjectNET **)this + 0x4D); /*0x47a605*/
        v30 = Src.m_data; /*0x47a610*/
        if ( v29 ) /*0x47a614*/
          NiObjectNET_SetName(v29, Src.m_data); /*0x47a619*/
        FormHeapFree((unsigned int)v30); /*0x47a61f*/
      }
    }
  }
}
