// Oblivion equipped-WEAP 3D path on perspective-specific ActorSkinInfo. Accepts form type 0x21; WEAP type byte 5 (Bow) uniquely selects equipment/add-on slot 0x0E, others use slot 9. Loads/clones through Prn, stores WeaponForm/WeaponModel/WeaponObject at +0xDC/+0xE0/+0xE4, then reconciles drawn/sheathed state. External Crossbow contrast: native equipped-model identity is this ActorSkinInfo WeaponForm/WeaponObject pair; a whole ActorAnimData-root search for the first object named Weapon is not identity- or generation-safe. Current discovery is action-triggered and one-shot, with no retry for deferred 3D load, perspective creation/switch, graph rebuild, or successful PostLoadGame.
void __thiscall ActorSkinInfo_SetEquippedWeapon3D(ActorSkinInfo *this, TESForm *weapon)
{
  UInt32 v2; // edi
  TESObjectWEAP **p_WeaponForm; // ebp
  bool v5; // zf
  Actor *owner; // ebp
  PlayerCharacter *v7; // ecx
  bool v8; // al
  const char *v9; // eax
  const char *v10; // esi
  const char *v11; // eax
  char *ModelData; // esi
  Ni2DBuffer *v13; // eax
  int v14; // ebp
  char *m_data; // ecx
  int *v16; // esi
  int v17; // eax
  int v18; // eax
  ActorSkinInfo *v19; // eax
  int v20; // eax
  TESObjectWEAP *WeaponForm; // ecx
  int (__thiscall *v22)(TESObjectWEAP *, int); // eax
  const char *v23; // eax
  TESObjectREFR *v24; // esi
  TESObjectREFRVtbl *vtbl; // ebp
  void (__thiscall **v26)(TESObjectREFRVtbl *, int, ActorSkinInfo *, ActorAnimData *, TESObjectREFR *); // edi
  int v27; // eax
  TESObjectREFRVtbl *v28; // ebp
  void (__thiscall **v29)(TESObjectREFRVtbl *, int, ActorSkinInfo *, ActorAnimData *, TESObjectREFR *); // edi
  int v30; // eax
  TESObjectREFR *v31; // [esp-8h] [ebp-E0h]
  ActorAnimData *AnimDataByPerspective; // [esp-8h] [ebp-E0h]
  ActorAnimData *AnimData; // [esp-8h] [ebp-E0h]
  NiNode *NodeByPerspective; // [esp-4h] [ebp-DCh]
  int v35; // [esp-4h] [ebp-DCh]
  int v36; // [esp-4h] [ebp-DCh]
  BSStringT Src; // [esp+14h] [ebp-C4h] BYREF
  int slot; // [esp+1Ch] [ebp-BCh]
  UInt32 v39; // [esp+20h] [ebp-B8h] BYREF
  _DWORD *a1; // [esp+24h] [ebp-B4h]
  TESObjectREFR *v41; // [esp+28h] [ebp-B0h]
  void (__stdcall ***v42)(signed int); // [esp+2Ch] [ebp-ACh] BYREF
  void (__thiscall ***v43)(_DWORD, int); // [esp+30h] [ebp-A8h]
  float v44; // [esp+3Ch] [ebp-9Ch]
  float v45; // [esp+40h] [ebp-98h]
  float v46; // [esp+44h] [ebp-94h]
  unsigned __int8 v47[128]; // [esp+48h] [ebp-90h] BYREF
  int v48; // [esp+D4h] [ebp-4h]

  v2 = 0; /*0x4797c2*/
  if ( weapon && weapon->member.type == kFormType_Weapon ) /*0x4797d2*/
  {
    p_WeaponForm = &this->WeaponForm; /*0x4797db*/
    ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, (ActorSkinInfoEquipmentSlot *)&this->WeaponForm, 1, 0); /*0x4797e2*/
    *p_WeaponForm = (TESObjectWEAP *)weapon; /*0x4797ea*/
    this->WeaponModel = (TESModel *)&weapon[2]; /*0x4797ed*/
    v5 = LOBYTE(weapon[6].vtbl) == 5;           // Authoritative type gate: TESObjectWEAP weapon-type byte == 5 (Bow) changes the model attachment/add-on slot from 9 to 0x0E. No separate native Crossbow type is tested. /*0x4797f3*/
    slot = 9; /*0x4797fa*/
    if ( v5 ) /*0x479802*/
      slot = 0xE; /*0x479804*/
    owner = this->owner; /*0x47980c*/
    v7 = reference; /*0x479812*/
    v5 = owner == (Actor *)reference; /*0x479818*/
    v41 = (TESObjectREFR *)owner; /*0x47981a*/
    if ( v5 ) /*0x47981e*/
    {
      v8 = sub_65D770(v7, (int)this); /*0x479827*/
      NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, v8); /*0x47983f*/
      v31 = (TESObjectREFR *)this->owner; /*0x479846*/
      v9 = (const char *)((int (__thiscall *)(TESForm *))weapon[2].vtbl->Unk_05)(&weapon[2]); /*0x47984d*/
      this->WeaponObject = (NiNode *)Actor_LoadCloneAndAttachModel3D(v9, slot, v31, NodeByPerspective); /*0x479858*/
      if ( this == Actor_GetSkinInfoByPerspective((Actor *)reference, 0) ) /*0x47986c*/
      {
        Src.m_data = 0; /*0x479872*/
        *(_DWORD *)&Src.m_dataLen = 0; /*0x479876*/
        v10 = *(const char **)&weapon[3].member.type; /*0x479880*/
        v48 = 0; /*0x479885*/
        if ( !v10 ) /*0x47988c*/
          v10 = EmptyString; /*0x47988e*/
        _sprintf((char *)v47, "%s\\%s", "Icons", v10); /*0x4798a3*/
        sub_57B190(v47); /*0x4798ad*/
        FormHeapFree(0); /*0x4798b3*/
      }
      goto LABEL_50; /*0x4798bb*/
    }
    v11 = (const char *)((int (__thiscall *)(TESForm *))weapon[2].vtbl->Unk_05)(&weapon[2]); /*0x4798c7*/
    if ( !v11 || !owner || (a1 = owner->members.super.super.niNode) == 0 ) /*0x4798e2*/
    {
      v14 = 0; /*0x479b1a*/
LABEL_49:
      this->WeaponObject = (NiNode *)v14; /*0x479b1c*/
LABEL_50:
      Src.m_data = 0; /*0x479b22*/
      *(_DWORD *)&Src.m_dataLen = 0; /*0x479b26*/
      WeaponForm = this->WeaponForm; /*0x479b30*/
      v35 = *((_DWORD *)WeaponForm + 3); /*0x479b3b*/
      v22 = *(int (__thiscall **)(TESObjectWEAP *, int))(*(_DWORD *)WeaponForm + 0xD4); /*0x479b3c*/
      v48 = 3; /*0x479b42*/
      v23 = (const char *)v22(WeaponForm, v35); /*0x479b4d*/
      BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)off_B065AC, v23, v36); /*0x479b61*/
      NiObjectNET_SetName((NiObjectNET *)this->WeaponObject, Src.m_data); /*0x479b74*/
      if ( this->owner->vtbl->super.super.IsActor((TESObjectREFR *)this->owner) ) /*0x479b87*/
      {
        v24 = (TESObjectREFR *)this->owner; /*0x479b8d*/
        if ( v24[1].vtbl ) /*0x479b93*/
        {
          if ( v24 == (TESObjectREFR *)reference && this == Actor_GetSkinInfoByPerspective((Actor *)reference, 1) ) /*0x479bab*/
          {
            vtbl = v24[1].vtbl; /*0x479bad*/
            v26 = (void (__thiscall **)(TESObjectREFRVtbl *, int, ActorSkinInfo *, ActorAnimData *, TESObjectREFR *))((char *)vtbl->super.super.InitializeComponent + 0x150); /*0x479bbc*/
            AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x479bc7*/
            LOBYTE(v27) = Actor_IsWeaponOut(v24); /*0x479bcb*/
            (*v26)(vtbl, v27, this, AnimDataByPerspective, v24); /*0x479bd5*/
          }
          else
          {
            v28 = v24[1].vtbl; /*0x479bd9*/
            v29 = (void (__thiscall **)(TESObjectREFRVtbl *, int, ActorSkinInfo *, ActorAnimData *, TESObjectREFR *))((char *)v28->super.super.InitializeComponent + 0x150); /*0x479be2*/
            AnimData = TESObjectREFR_GetAnimData(v24); /*0x479bed*/
            LOBYTE(v30) = Actor_IsWeaponOut(v24); /*0x479bf1*/
            (*v29)(v28, v30, this, AnimData, v24); /*0x479bfb*/
          }
        }
      }
      FormHeapFree((unsigned int)Src.m_data); /*0x479c02*/
      return; /*0x479c02*/
    }
    ModelData = (char *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v11, 1, (void *)3, 1); /*0x4798fa*/
    Src.m_data = ModelData; /*0x479900*/
    OB_NiCloningProcess_ctor(&v42); /*0x479904*/
    v46 = 1.0; /*0x47990b*/
    v45 = 1.0; /*0x47990f*/
    v44 = 1.0; /*0x479913*/
    v48 = 2; /*0x479917*/
    v39 = 0; /*0x479922*/
    if ( sub_480820(ModelData) ) /*0x47992f*/
    {
      v13 = (Ni2DBuffer *)sub_4430C0(ModelData, (int)&v42); /*0x479947*/
      NiSmartPointer_Set__((Ni2DBuffer **)&v39, v13); /*0x479951*/
      v14 = v39; /*0x479956*/
      v2 = v39; /*0x47995a*/
    }
    else
    {
      v14 = sub_700610(ModelData, (int)&v42); /*0x47996a*/
    }
    sub_478220((NiObjectNET *)ModelData, v14, slot, v41); /*0x479978*/
    sub_6FFC60((_DWORD *)v14); /*0x479982*/
    if ( !v14 ) /*0x479989*/
    {
LABEL_40:
      LOBYTE(v48) = 1; /*0x479ac7*/
      if ( v2 ) /*0x479ad1*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x479ad7*/
          (**(void (__thiscall ***)(UInt32, int))v2)(v2, 1); /*0x479ae9*/
      }
      v48 = 0xFFFFFFFF; /*0x479af1*/
      if ( v42 ) /*0x479afc*/
        ((void (__thiscall *)(void (__stdcall ***)(signed int), int))**v42)(v42, 1); /*0x479b04*/
      if ( v43 ) /*0x479b0c*/
        (**v43)(v43, 1); /*0x479b14*/
      goto LABEL_49; /*0x479b14*/
    }
    if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)&MEMORY[0xB33E90][0x13F8], (NiObject *)v14) ) /*0x479995*/
      sub_4A01B0((_BYTE *)v14, 7); /*0x4799a5*/
    *(float *)(v14 + 0x54) = g_zeroNiPoint3.x; /*0x4799b0*/
    *(float *)(v14 + 0x58) = g_zeroNiPoint3.y; /*0x4799b8*/
    *(float *)(v14 + 0x5C) = g_zeroNiPoint3.z; /*0x4799c1*/
    qmemcpy((void *)(v14 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x4799d2*/
    if ( sub_471B80(v14) ) /*0x4799d4*/
    {
      PrintError("Tyring to add skinned object '%s' as an add on to skeleton.", *(const char **)(v14 + 8)); /*0x4799e9*/
    }
    else
    {
      AttachModelUsingPrnExtraData((NiNode *)a1, (NiAVObject *)v14, (NiObjectNET *)Src.m_data, 0, 0xFFFFFFFF, 0); /*0x479a07*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14) ) /*0x479a17*/
      {
        v16 = 0; /*0x479a28*/
        Src.m_data = *(char **)(v14 + 0x1C); /*0x479a2c*/
        m_data = Src.m_data; /*0x479a21*/
        if ( (!Src.m_data || slot == 7 || slot == 6) && slot != 0xFFFFFFFF ) /*0x479a3f*/
        {
          v17 = *(_DWORD *)(4 * slot + 0xB065C8); /*0x479a41*/
          if ( v17 != 0xFFFFFFFF ) /*0x479a4b*/
          {
            v18 = NiObjectNET_LookupObjectByName(a1, *(char **)(4 * v17 + 0xB06550)); /*0x479a5a*/
            m_data = Src.m_data; /*0x479a5f*/
            v16 = (int *)v18; /*0x479a66*/
          }
        }
        if ( m_data ) /*0x479a6a*/
        {
          if ( slot != 7 && slot != 6 ) /*0x479a74*/
            goto LABEL_39; /*0x479a74*/
          v19 = v41->vtbl->GetActiveSkinInfo(v41); /*0x479a82*/
          if ( v19 ) /*0x479a86*/
          {
            if ( *(NiNode **)(v14 + 0x1C) == v19->WeaponNode ) /*0x479a8e*/
              goto LABEL_39; /*0x479a8e*/
          }
          if ( !v16 ) /*0x479a92*/
            goto LABEL_39; /*0x479a92*/
          v20 = *v16; /*0x479a94*/
        }
        else if ( v16 ) /*0x479a9c*/
        {
          v20 = *v16; /*0x479a9e*/
        }
        else
        {
          v20 = *a1; /*0x479aa8*/
        }
        (*(void (__stdcall **)(int, int))(v20 + 0x84))(v14, 1); /*0x479ab3*/
      }
    }
LABEL_39:
    NiNode_UpdateDynamicEffectState((NiNode *)v14); /*0x479ab5*/
    NiAVObject_InitializePropertyState((NiAVObject *)v14); /*0x479abe*/
    v2 = v39; /*0x479ac3*/
    goto LABEL_40; /*0x479ac3*/
  }
}
