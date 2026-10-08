// Cancels attack/block animation slots, clears current action, releases transient ArrowBone children for applicable perspectives, and refreshes quiver arrow visibility.
void __thiscall Actor_ResetAttackStateAndBowVisuals(Actor *this)
{
  _DWORD *AnimData; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  ActorAnimData *v5; // eax
  ActorAnimData *v6; // eax
  int AnimDataByPerspective; // eax
  Actor *v8; // ecx
  ActorAnimData *v9; // edi
  int v10; // ebx
  UInt32 v11; // eax
  float v12; // [esp+0h] [ebp-8h]
  float v13; // [esp+0h] [ebp-8h]

  if ( this->members.super.process ) /*0x5f8463*/
  {
    if ( (unsigned int)(((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process) /*0x5f8480*/
                      - 2) <= 3 )
    {
      v12 = 0.0; /*0x5f8491*/
      if ( this == (Actor *)reference ) /*0x5f8496*/
      {
        AnimData = PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1); /*0x5f849a*/
        ActorAnimData_ClearSlot(AnimData, 3, v12); /*0x5f84a1*/
        v3 = PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 0); /*0x5f84b6*/
        ActorAnimData_ClearSlot(v3, 3, 0.0); /*0x5f84bd*/
        v4 = PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1); /*0x5f84d2*/
        ActorAnimData_ClearSlot(v4, 1, 0.0); /*0x5f84d9*/
        v13 = 0.0; /*0x5f84e1*/
        v5 = (ActorAnimData *)PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 0); /*0x5f84ee*/
      }
      else
      {
        v6 = this->vtbl->super.super.GetAnimData(this); /*0x5f84ff*/
        ActorAnimData_ClearSlot(v6, 3, v12); /*0x5f8503*/
        v13 = 0.0; /*0x5f8513*/
        v5 = this->vtbl->super.super.GetAnimData(this); /*0x5f851a*/
      }
      ActorAnimData_ClearSlot(v5, 1, v13); /*0x5f851e*/
      this->members.super.process->SetCurrentAction(this->members.super.process, 0xFFFFFFFF, 0); /*0x5f8532*/
      if ( this->members.super.process->Unk_4D(this->members.super.process) ) /*0x5f853f*/
      {
        if ( this == (Actor *)reference ) /*0x5f8553*/
          AnimDataByPerspective = Actor_GetSkinInfoByPerspective(reference, 0); /*0x5f8557*/
        else
          AnimDataByPerspective = ((int (__thiscall *)(Actor *))this->vtbl->super.super.GetActiveSkinInfo)(this); /*0x5f8568*/
        v8 = (Actor *)reference; /*0x5f856a*/
        v9 = (ActorAnimData *)AnimDataByPerspective; /*0x5f8572*/
        v10 = 1; /*0x5f8574*/
        if ( this != (Actor *)reference ) /*0x5f8579*/
          goto LABEL_15; /*0x5f8579*/
        v10 = 2; /*0x5f857b*/
        do /*0x5f85d0*/
        {
          if ( this == v8 && v10 == 1 ) /*0x5f8587*/
            v9 = (ActorAnimData *)Actor_GetSkinInfoByPerspective(v8, 1); /*0x5f858f*/
LABEL_15:
          v11 = this->members.super.process->GetArrowAttachTargetNode(this->members.super.process, (UInt32)v9); /*0x5f8591*/
          if ( v11 ) /*0x5f85a1*/
            NiTObjectArray_ClearAndRelease((void *)(v11 + 0xAC));// Attack/bow reset clears transient ArrowBone children for each applicable perspective before refreshing quiver visibility. /*0x5f85a9*/
          v8 = (Actor *)reference; /*0x5f85ae*/
          if ( this != (Actor *)reference || v10 == 2 ) /*0x5f85bb*/
          {
            Actor_RefreshQuiverArrowVisibility(this, v9, 0);// Refresh quiver visibility after attack-state reset. For PlayerCharacter this call is deliberately made only on the non-first-person loop pass because the quiver source cache is shared/appropriate there. /*0x5f85c2*/
            v8 = (Actor *)reference; /*0x5f85c7*/
          }
          --v10; /*0x5f85cd*/
        }
        while ( v10 ); /*0x5f85d0*/
      }
    }
  }
}
