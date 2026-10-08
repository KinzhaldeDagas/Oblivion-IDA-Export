// Oblivion equipped-AMMO 3D path on ActorSkinInfo. Clears/rebuilds AmmoForm/AmmoModel/AmmoObject at +0x10C/+0x110/+0x114, attaches through native Prn handling, and caches the loaded 3D.
void __thiscall ActorSkinInfo_SetEquippedAmmo3D(ActorSkinInfo *this, TESForm *ammo)
{
  char *m_data; // edi
  TESForm *v3; // esi
  int v4; // eax
  PlayerCharacter *v5; // esi
  int v6; // esi
  bool v7; // al
  const char *v8; // eax
  NiAVObject *CloneAndAttachModel3D; // eax
  const char *v10; // eax
  NiObjectNET *ModelData; // ebx
  TESForm *v12; // esi
  Ni2DBuffer *v13; // eax
  TESForm *v14; // ebp
  NiExtraData *ExtraData; // eax
  NiNode *v16; // eax
  NiNodeVtbl *vtbl; // edx
  NiNode *v18; // ecx
  _DWORD *v19; // ecx
  int (__thiscall *v20)(_DWORD *, int); // eax
  const char *v21; // eax
  char *v22; // esi
  TESObjectREFR *v23; // [esp-8h] [ebp-50h]
  NiNode *NodeByPerspective; // [esp-4h] [ebp-4Ch]
  int v25; // [esp-4h] [ebp-4Ch]
  int v26; // [esp-4h] [ebp-4Ch]
  NiNode *a1; // [esp+14h] [ebp-34h]
  BSStringT Src; // [esp+18h] [ebp-30h] BYREF
  void (__stdcall ***v29)(signed int); // [esp+20h] [ebp-28h] BYREF
  void (__thiscall ***v30)(_DWORD, int); // [esp+24h] [ebp-24h]
  float v31; // [esp+30h] [ebp-18h]
  float v32; // [esp+34h] [ebp-14h]
  float v33; // [esp+38h] [ebp-10h]
  int v34; // [esp+44h] [ebp-4h]

  m_data = (char *)this; /*0x479c67*/
  Src.m_data = (char *)this; /*0x479c69*/
  v3 = ammo; /*0x479c6d*/
  if ( ammo ) /*0x479c75*/
  {
    if ( ammo->member.type == kFormType_Ammo ) /*0x479c7f*/
    {
      ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, (ActorSkinInfoEquipmentSlot *)&this->AmmoForm, 1, 0); /*0x479c8f*/
      if ( v3->member.type == kFormType_Ammo ) /*0x479c98*/
      {
        ActorSkinInfo_ClearOrReplaceEquipmentSlot( /*0x479ca0*/
          (ActorSkinInfo *)m_data,
          (ActorSkinInfoEquipmentSlot *)(m_data + 0x10C),
          1,
          0);
        *((_DWORD *)m_data + 0x43) = v3; /*0x479ca5*/
        *((_DWORD *)m_data + 0x44) = v3 + 2; /*0x479caa*/
      }
      v4 = *((_DWORD *)m_data + 0x44); /*0x479cb0*/
      if ( v4 ) /*0x479cb8*/
      {
        v5 = *((PlayerCharacter **)m_data + 0x54); /*0x479cbe*/
        if ( v5 == reference ) /*0x479ccc*/
        {
          v6 = *((_DWORD *)m_data + 0x44); /*0x479ccf*/
          v7 = sub_65D770(reference, (int)m_data); /*0x479cd1*/
          NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, v7); /*0x479ce4*/
          v23 = *((TESObjectREFR **)m_data + 0x54); /*0x479ceb*/
          v8 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x14))(v6); /*0x479cf3*/
          CloneAndAttachModel3D = Actor_LoadCloneAndAttachModel3D(v8, 0xC, v23, NodeByPerspective);// Player-perspective equipped AMMO/quiver model uses stock attachment/add-on slot 0x0C. /*0x479cf6*/
        }
        else
        {
          v10 = (const char *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 0x14))(*((_DWORD *)m_data + 0x44)); /*0x479d0a*/
          if ( v10 && v5 && (a1 = (NiNode *)v5->super.super.super.super.niNode) != 0 ) /*0x479d25*/
          {
            ModelData = (NiObjectNET *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v10, 1, (void *)3, 1); /*0x479d41*/
            OB_NiCloningProcess_ctor(&v29); /*0x479d43*/
            v33 = 1.0; /*0x479d4a*/
            v32 = 1.0; /*0x479d4e*/
            v31 = 1.0; /*0x479d52*/
            v12 = 0; /*0x479d56*/
            v34 = 1; /*0x479d58*/
            ammo = 0; /*0x479d5c*/
            if ( sub_480820(ModelData) ) /*0x479d66*/
            {
              v13 = (Ni2DBuffer *)sub_4430C0(ModelData, (int)&v29); /*0x479d7e*/
              NiSmartPointer_Set__((Ni2DBuffer **)&ammo, v13); /*0x479d88*/
              v14 = ammo; /*0x479d8d*/
              v12 = ammo; /*0x479d91*/
            }
            else
            {
              v14 = (TESForm *)sub_700610(ModelData, (int)&v29); /*0x479da1*/
            }
            ExtraData = NiObjectNET_GetExtraData(ModelData, dword_A7D0EC); /*0x479daa*/
            if ( ExtraData ) /*0x479db1*/
            {
              if ( ((int)ExtraData[1].__vftable & 0x10) != 0 ) /*0x479dbb*/
                sub_4E26F0((int)v12, (int)v14); /*0x479dbe*/
            }
            sub_6FFC60(v14); /*0x479dc8*/
            if ( v14 ) /*0x479dcf*/
            {
              if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB33E90][0x13F8], (NiObject *)v14) ) /*0x479ddb*/
                sub_4A01B0(v14, 7); /*0x479deb*/
              v14[3].member.refID = LODWORD(g_zeroNiPoint3.x); /*0x479df6*/
              v14[3].member.modlist.data = (Data *)LODWORD(g_zeroNiPoint3.y); /*0x479dff*/
              v14[3].member.modlist.next = (TESForm::ModReferenceList *)LODWORD(g_zeroNiPoint3.z); /*0x479e07*/
              qmemcpy(&v14[2], &stru_B26AF0[0xA].unk2C, 0x24u); /*0x479e18*/
              if ( sub_471B80((int)v14) ) /*0x479e1a*/
              {
                PrintError( /*0x479e2f*/
                  "Tyring to add skinned object '%s' as an add on to skeleton.",
                  (const char *)v14->member.flags);
              }
              else
              {
                AttachModelUsingPrnExtraData(a1, (NiAVObject *)v14, ModelData, 0, 0xFFFFFFFF, 0);// Non-player equipped AMMO/quiver model attaches through the same Prn scene-graph contract as weapon models. /*0x479e46*/
                if ( ((int (__thiscall *)(TESForm *))v14->vtbl->super.CopyFromBase)(v14) ) /*0x479e56*/
                {
                  if ( !*(_DWORD *)&v14[1].member.type ) /*0x479e5c*/
                  {
                    if ( dword_B065F8 == 0xFFFFFFFF /*0x479e7f*/
                      || (v16 = (NiNode *)NiObjectNET_LookupObjectByName(a1, *(char **)(4 * dword_B065F8 + 0xB06550))) == 0 )
                    {
                      vtbl = a1->vtbl; /*0x479e87*/
                      v18 = a1; /*0x479e89*/
                    }
                    else
                    {
                      vtbl = v16->vtbl; /*0x479e81*/
                      v18 = v16; /*0x479e83*/
                    }
                    ((void (__thiscall *)(NiNode *, TESForm *, int))vtbl->AddObject)(v18, v14, 1); /*0x479e94*/
                  }
                }
              }
              NiNode_UpdateDynamicEffectState((NiNode *)v14); /*0x479e98*/
              NiAVObject_InitializePropertyState((NiAVObject *)v14); /*0x479e9f*/
              v12 = ammo; /*0x479ea4*/
              m_data = Src.m_data; /*0x479ea8*/
            }
            LOBYTE(v34) = 0; /*0x479eae*/
            if ( v12 ) /*0x479eb3*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v12->member) ) /*0x479eb9*/
                ((void (__thiscall *)(TESForm *, int))v12->vtbl->super.InitializeComponent)(v12, 1); /*0x479ecb*/
            }
            v34 = 0xFFFFFFFF; /*0x479ed3*/
            if ( v29 ) /*0x479edb*/
              ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v29)(v29, 1); /*0x479ee3*/
            if ( v30 ) /*0x479eeb*/
              (**v30)(v30, 1); /*0x479ef3*/
            CloneAndAttachModel3D = (NiAVObject *)v14; /*0x479ef5*/
          }
          else
          {
            CloneAndAttachModel3D = 0; /*0x479efb*/
          }
        }
        *((_DWORD *)m_data + 0x45) = CloneAndAttachModel3D; /*0x479efd*/
        Src.m_data = 0; /*0x479f03*/
        Src.m_dataLen = 0; /*0x479f07*/
        Src.m_bufLen = 0; /*0x479f0c*/
        v19 = *((_DWORD **)m_data + 0x43); /*0x479f11*/
        v25 = v19[3]; /*0x479f1c*/
        v20 = *(int (__thiscall **)(_DWORD *, int))(*v19 + 0xD4); /*0x479f1d*/
        v34 = 2; /*0x479f23*/
        v21 = (const char *)v20(v19, v25); /*0x479f2b*/
        BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B065B8, v21, v26); /*0x479f3f*/
        v22 = Src.m_data; /*0x479f44*/
        NiObjectNET_SetName(*((NiObjectNET **)m_data + 0x45), Src.m_data); /*0x479f52*/
        FormHeapFree((unsigned int)v22); /*0x479f58*/
      }
    }
  }
}
