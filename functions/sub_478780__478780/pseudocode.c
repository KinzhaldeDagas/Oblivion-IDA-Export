// ActorSkinInfo equipment-slot teardown/replacement. Slot is exactly {TESForm*, TESModel*, NiAVObject*}; native code removes loaded 3D from shadow/parent ownership, releases loader/scene state, clears object3D, and optionally replaces form/model metadata. Known slots include rings, amulet, WEAP, AMMO, shield, and light. External Crossbow contrast after this native ownership behavior: retained raw controller/target pointers are invalidated when the owning WeaponObject graph is torn down; pointer equality alone is not a lifetime or generation check. Current removal/reset erases tracking without restoring original controller timing state, and target mismatch leaves null-controller tombstones instead of generation-validating/rescanning.
void __thiscall ActorSkinInfo_ClearOrReplaceEquipmentSlot(
        ActorSkinInfo *this,
        ActorSkinInfoEquipmentSlot *slot,
        bool replaceMetadata,
        TESModel *newModelData)
{
  ActorSkinInfoEquipmentSlot *v4; // esi
  void *ShadowSceneNode; // eax
  ActorSkinInfoEquipmentSlot *v7; // edi
  NiNode *BackWeaponNode; // edi
  NiNode *SideWeaponNode; // edi
  int v10; // eax
  TESModel *v11; // ecx
  NiAVObject *object3D; // [esp-8h] [ebp-10h]

  v4 = slot; /*0x478782*/
  if ( slot->object3D ) /*0x478786*/
  {
    if ( slot == (ActorSkinInfoEquipmentSlot *)&unk_B33D60 || slot == (ActorSkinInfoEquipmentSlot *)&this->LightForm ) /*0x4787a3*/
      sub_4DE1C0((int)slot, (int)slot->object3D); /*0x4787a6*/
    object3D = v4->object3D; /*0x4787b2*/
    ShadowSceneNode = (void *)GetShadowSceneNode(0); /*0x4787b5*/
    ShadowSceneNode_RemoveObjectReceivers(ShadowSceneNode, object3D); /*0x4787bf*/
    sub_481350((NiNode *)v4->object3D); /*0x4787c8*/
    if ( v4->object3D->members.m_parent ) /*0x4787d3*/
    {
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4787db*/
      v4->object3D->members.m_parent->vtbl->RemoveObject( /*0x4787f7*/
        v4->object3D->members.m_parent,
        (NiAVObject **)&slot,
        v4->object3D);
      if ( slot ) /*0x4787ff*/
      {
        v7 = slot; /*0x478801*/
        if ( !InterlockedDecrement((volatile LONG *)&slot->model) ) /*0x478807*/
          ((void (__thiscall *)(ActorSkinInfoEquipmentSlot *, int))v7->form->vtbl)(v7, 1); /*0x47881d*/
      }
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x478821*/
    }
    if ( v4 == (ActorSkinInfoEquipmentSlot *)&unk_B33D10 || v4 == (ActorSkinInfoEquipmentSlot *)&this->WeaponForm ) /*0x478839*/
    {
      BackWeaponNode = this->BackWeaponNode; /*0x47883b*/
      if ( BackWeaponNode ) /*0x478840*/
      {
        sub_897A90((int)BackWeaponNode, 0); /*0x478845*/
        NiTObjectArray_ClearAndRelease(&BackWeaponNode->members.children); /*0x478853*/
      }
      SideWeaponNode = this->SideWeaponNode; /*0x478858*/
      if ( SideWeaponNode ) /*0x47885d*/
      {
        sub_897A90((int)SideWeaponNode, 0); /*0x478862*/
        NiTObjectArray_ClearAndRelease(&SideWeaponNode->members.children); /*0x478870*/
      }
      if ( (PlayerCharacter *)this->owner == reference && this == Actor_GetSkinInfoByPerspective((Actor *)reference, 0) ) /*0x47888c*/
        sub_57B190((unsigned __int8 *)stru_B33D84.value); /*0x478895*/
    }
    v10 = (int)v4->model->vtbl->GetModelPath(v4->model); /*0x4788a5*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v10, 1, 1); /*0x4788b2*/
    v4->object3D = 0; /*0x4788b7*/
  }
  if ( replaceMetadata ) /*0x4788c4*/
  {
    v11 = newModelData; /*0x4788c6*/
    v4->form = 0; /*0x4788ca*/
    v4->model = v11; /*0x4788d0*/
  }
}
