// PlayerCharacter GenerateNiNode override. Builds the first-person root at +0x5D0 from Characters\\_1stPerson\\Skeleton.NIF, constructs 0x154-byte ActorSkinInfo at +0x5C8 and 0xDC-byte ActorAnimData at +0x5CC, builds/picks its KF list, generates/configures the player NiNode through the base MobileObject path, and returns NiNode*. It does not call ActorAnimData_LoadKFFZSpecialAnims. Native ABI has no stack/x87 inputs.
NiNode *__thiscall PlayerCharacter_GenerateNiNode(PlayerCharacter *this)
{
  double v1; // st4
  double v2; // st5
  double v3; // st6
  double v4; // st7
  BSExtraDataVtbl *v6; // eax
  float *ModelData; // esi
  NiNode *v8; // eax
  NiNode *v9; // ebx
  NiNode *firstPersonNiNode; // edi
  NiAVObject *v11; // eax
  bool v12; // zf
  double v13; // st7
  int v14; // eax
  ActorSkinInfo *v15; // eax
  ActorSkinInfo *v16; // eax
  ActorAnimData *v17; // eax
  ActorAnimData *v18; // eax
  UInt8 isThirdPerson; // al
  NiNode *NiNode; // eax
  NiNode *v21; // esi
  char *v22; // eax
  LowProcess *process; // ebx
  LowProcess_vtbl *v24; // edi
  int v25; // eax
  LowProcess *v26; // edi
  ActorAnimData *AnimData; // eax
  NiAVObject *(__thiscall *GetObjectByName)(NiAVObject *, const char *); // edx
  int v29; // eax
  TESForm *v30; // eax
  CHAR *FormModelPAth; // eax
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v33; // ebx
  _DWORD *v34; // ecx
  int HavokObject; // eax
  int v36; // eax
  int v37; // edi
  _DWORD *CollisionFilterInfo; // eax
  UInt8 v40; // [esp+3Fh] [ebp-6Dh]
  float *v41; // [esp+40h] [ebp-6Ch]
  float v42; // [esp+44h] [ebp-68h]
  float v43; // [esp+44h] [ebp-68h]
  _DWORD v44[4]; // [esp+48h] [ebp-64h] BYREF
  float v45[9]; // [esp+58h] [ebp-54h] BYREF
  float v46[9]; // [esp+7Ch] [ebp-30h] BYREF
  int v47; // [esp+A8h] [ebp-4h]

  v6 = (BSExtraDataVtbl *)this->vtbl->super.super.super.GetBaseForm(this); /*0x667c12*/
  if ( (g_TESSaveLoadGame->flags & 2) == 0 ) /*0x667c22*/
  {
    sub_5227A0(v6, v2, v3, v4, (TESObjectREFR *)this, 1, 1, 0, 0); /*0x667c2f*/
    Player_RecalculateAllRequiredSkillExperience(this); /*0x667c36*/
  }
  ModelData = (float *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], *(const char **)stru_B36BB8, 1, (void *)3, 1); /*0x667c52*/
  v41 = ModelData; /*0x667c59*/
  v8 = (NiNode *)FormHeapAlloc(0xDCu); /*0x667c5d*/
  v9 = 0; /*0x667c69*/
  v47 = 0; /*0x667c6d*/
  if ( v8 ) /*0x667c74*/
    v9 = NiNode::NiNode(v8, 0); /*0x667c7e*/
  v9->members.super.m_flags |= 0x40u; /*0x667c80*/
  firstPersonNiNode = this->firstPersonNiNode; /*0x667c85*/
  v47 = 0xFFFFFFFF; /*0x667c8d*/
  if ( firstPersonNiNode != v9 ) /*0x667c98*/
  {
    if ( firstPersonNiNode ) /*0x667c9c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&firstPersonNiNode->members) ) /*0x667ca2*/
        firstPersonNiNode->vtbl->super.super.super.Destructor((NiRefObject *)firstPersonNiNode, 1); /*0x667cb8*/
    }
    this->firstPersonNiNode = v9; /*0x667cbe*/
    InterlockedIncrement((volatile LONG *)&v9->members); /*0x667cc4*/
  }
  NiObjectNET_SetName((NiObjectNET *)this->firstPersonNiNode, "Player1stPerson"); /*0x667cd5*/
  ((void (__thiscall *)(NiNode *, float *, int))v9->vtbl->AddObject)(v9, ModelData, 1); /*0x667ce7*/
  MEMORY[0xB3BB0C] = (int)this->firstPersonNiNode->vtbl->super.GetObjectByName(this->firstPersonNiNode, "Camera01"); /*0x667cfb*/
  v11 = this->firstPersonNiNode->vtbl->super.GetObjectByName(this->firstPersonNiNode, off_A738A4); /*0x667d10*/
  v12 = MEMORY[0xB3BB0C] == 0; /*0x667d12*/
  MEMORY[0xB3BB14] = (int)v11; /*0x667d19*/
  if ( v12 ) /*0x667d1e*/
    sub_404EC0("Missing 'Camera01' on '%s'.", *(const char **)stru_B36BB8); /*0x667d2c*/
  if ( !MEMORY[0xB3BB14] ) /*0x667d34*/
    sub_404EC0("Missing 'Bip' on '%s'.", *(const char **)stru_B36BB8); /*0x667d49*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)v9, 0.0, 1); /*0x667d5b*/
  v42 = *(float *)(MEMORY[0xB3BB0C] + 0x90); /*0x667d6f*/
  this->firstPersonNiNodeTranslateZ = v42; /*0x667d79*/
  v43 = -v42; /*0x667d81*/
  *(float *)&v44[1] = 0.0; /*0x667d87*/
  *(float *)&v44[2] = 0.0; /*0x667d8f*/
  v13 = v43; /*0x667d93*/
  ModelData[0x15] = 0.0; /*0x667d9b*/
  *(float *)&v44[3] = v43; /*0x667d9e*/
  ModelData[0x16] = 0.0; /*0x667da6*/
  ModelData[0x17] = v43; /*0x667da9*/
  qmemcpy(v45, &stru_B26AF0[0xA].unk2C, sizeof(v45)); /*0x667db6*/
  qmemcpy(ModelData + 0xC, sub_4D7C50(this, v46, v45, 0), 0x24u); /*0x667dd7*/
  v14 = (int)v9->vtbl->super.GetObjectByName((NiAVObject *)v9, off_B06568[0]); /*0x667de7*/
  if ( v14 ) /*0x667deb*/
    *(_WORD *)(v14 + 0x18) |= 1u; /*0x667ded*/
  v15 = (ActorSkinInfo *)FormHeapAlloc(0x154u); /*0x667df7*/
  v47 = 1; /*0x667e05*/
  if ( v15 ) /*0x667e10*/
    v16 = ActorSkinInfo_ctor(v15, (Actor *)this, v9);// Construct PlayerCharacter first-person ActorSkinInfo (+0x5C8) with owner=player and the loaded first-person model root. Confirms ActorSkinInfo and ActorAnimData are distinct adjacent allocations. /*0x667e16*/
  else
    v16 = 0; /*0x667e1d*/
  v47 = 0xFFFFFFFF; /*0x667e27*/
  this->firstPersonSkinInfo = v16; /*0x667e2e*/
  v17 = (ActorAnimData *)FormHeapAlloc(0xDCu); /*0x667e34*/
  v47 = 2; /*0x667e42*/
  if ( v17 ) /*0x667e4d*/
    v18 = NewActorAnimData(v17);                // Construct separate PlayerCharacter first-person ActorAnimData (+0x5CC), size 0xDC, immediately after the first-person ActorSkinInfo allocation at +0x5C8. /*0x667e51*/
  else
    v18 = 0; /*0x667e58*/
  this->firstPersonAnimData = v18; /*0x667e5a*/
  isThirdPerson = this->isThirdPerson; /*0x667e60*/
  v47 = 0xFFFFFFFF; /*0x667e68*/
  v40 = isThirdPerson; /*0x667e6f*/
  this->isThirdPerson = 1; /*0x667e73*/
  NiNode = MobileObject_GenerateNiNode((MobileObject *)this); /*0x667e7a*/
  this->isThirdPerson = v40; /*0x667e83*/
  v21 = NiNode; /*0x667e98*/
  v22 = BuildKFListForModelDirectory(*(char **)stru_B36BB8, 0); /*0x667e9a*/
  Menu_PickIdles((AnimSequenceSingle *)this->firstPersonAnimData, v2, v3, v13, (BSSimpleList_VoidPtr *)v22, v9, this); /*0x667ea8*/
  process = this->super.super.super.process; /*0x667ead*/
  v24 = process->__vftable; /*0x667eb0*/
  v25 = ((int (__thiscall *)(LowProcess *, int, _DWORD))process->GetEquippedWeaponData)(process, 1, 0); /*0x667ebe*/
  v24->SetEquippedWeaponData(process, (EntryData *)v25); /*0x667ec9*/
  v26 = this->super.super.super.process; /*0x667ecb*/
  AnimData = TESObjectREFR_GetAnimData((TESObjectREFR *)this); /*0x667ed0*/
  v26->Unk_44(v26, (UInt32)AnimData); /*0x667ee0*/
  this->super.super.super.process->Unk_44(this->super.super.super.process, (UInt32)this->firstPersonAnimData); /*0x667ef4*/
  NiObjectNET_SetName((NiObjectNET *)v21, "Player"); /*0x667efd*/
  GetObjectByName = v21->vtbl->super.GetObjectByName; /*0x667f04*/
  v21->members.super.m_flags |= 1u; /*0x667f07*/
  v29 = (int)GetObjectByName((NiAVObject *)v21, "Camera01"); /*0x667f13*/
  MEMORY[0xB3BB10] = v29; /*0x667f17*/
  if ( !v29 ) /*0x667f1c*/
  {
    v30 = this->vtbl->super.super.super.GetBaseForm(this); /*0x667f29*/
    FormModelPAth = GetFormModelPAth(v30); /*0x667f2c*/
    sub_404EC0("Missing 'Camera01' on '%s'.", FormModelPAth); /*0x667f37*/
  }
  sub_578CF0((char)this, v2, v3, v13, v1, 1); /*0x667f41*/
  sub_5E4DD0((Actor *)this); /*0x667f4b*/
  if ( this->vtbl->super.GetActorValue((Actor *)this, kActorVal_Vampirism) ) /*0x667f5d*/
  {
    ((void (__thiscall *)(LowProcess *, int))this->super.super.super.process->SetUnk16C)( /*0x667f70*/
      this->super.super.super.process,
      1);
    this->super.super.super.process->Unk_17(this->super.super.super.process); /*0x667f7a*/
    MEMORY[0xB33D80] = 1; /*0x667f7c*/
    ((void (__thiscall *)(LowProcess *, PlayerCharacter *))this->super.super.super.process->Unk_C5)( /*0x667f8f*/
      this->super.super.super.process,
      this);
    MEMORY[0xB33D80] = 0; /*0x667f91*/
  }
  ((void (__thiscall *)(LowProcess *, _DWORD))this->super.super.super.process->SetUnk16C)( /*0x667fa5*/
    this->super.super.super.process,
    0);
  sub_5EA1A0((int)this, (int)this, v41); /*0x667fae*/
  this->vtbl->super.super.super.Unk_52((TESObjectREFR *)this); /*0x667fbe*/
  CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x667fc2*/
  v33 = CharProxy; /*0x667fc7*/
  if ( CharProxy ) /*0x667fcb*/
  {
    v34 = *((_DWORD **)CharProxy + 2); /*0x667fcd*/
    if ( v34 ) /*0x667fd2*/
      HavokObject = bhkCollisionWrapper_GetHavokObject(v34); /*0x667fd4*/
    else
      HavokObject = 0; /*0x667fdb*/
    v36 = *(_DWORD *)(HavokObject + 8); /*0x667fdd*/
    if ( v36 ) /*0x667fe2*/
      v37 = *(_DWORD *)(v36 + 0x2B0); /*0x667fe4*/
    else
      v37 = 0; /*0x667fec*/
    if ( v37 ) /*0x667ff0*/
    {
      CollisionFilterInfo = bhkCharacterProxy_GetCollisionFilterInfo(v33, v44); /*0x667ff9*/
      (*(void (__thiscall **)(int, NiNode *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v37 + 0x90))( /*0x668014*/
        v37,
        v21,
        1,
        0,
        *((unsigned __int16 *)CollisionFilterInfo + 1),
        0);
    }
  }
  return v21; /*0x668018*/
}
