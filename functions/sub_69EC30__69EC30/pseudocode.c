// Verified MagicModelHitEffect UpdateVisualPlacement recalculates the attached NiNode transform from target perspective/node state and calls the target-specific detach/rebind helper as needed.
void __thiscall MagicModelHitEffect_UpdateVisualPlacement(MagicModelHitEffect *this)
{
  TESObjectREFR *targetReference; // ecx
  NiNode *NodeByPerspective; // eax
  NiNode *v4; // esi
  bool v5; // bl
  int v6; // eax
  int v7; // ecx
  NiNode *v8; // eax
  NiAVObject *ChildAtIndex; // eax
  const NiPoint3 *v10; // eax
  float x; // ecx
  float y; // edx
  float *unknown_30; // eax
  float z; // [esp+10h] [ebp-4h]

  targetReference = this->super.targetReference; /*0x69ec3c*/
  if ( targetReference == (TESObjectREFR *)reference ) /*0x69ec41*/
  {
    this->isThirdPerson_29 = reference->isThirdPerson;// Verified (Oblivion): model field +0x29 is assigned PlayerCharacter::isThirdPerson when target is the player; the same byte is also consumed in model initialization. Semantic label isThirdPerson is directly supported. /*0x69ec49*/
    NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x69ec54*/
  }
  else
  {
    NodeByPerspective = targetReference->vtbl->GetNiNode(targetReference); /*0x69ec63*/
  }
  v4 = NodeByPerspective; /*0x69ec6b*/
  sub_69DC90((TESObjectREFR **)this, (int)this->modelRoot_30); /*0x69ec6d*/
  if ( v4 ) /*0x69ec74*/
  {
    if ( this->super.targetReference->vtbl->IsActor(this->super.targetReference) /*0x69eca9*/
      && this->super.targetReference->vtbl->IsDead(this->super.targetReference, 0)
      || this->super.targetReference->vtbl->GetKnockedState(this->super.targetReference) )
    {
      v5 = 1; /*0x69ecbb*/
      v6 = (int)v4->vtbl->super.super.Unk_02((NiObject *)v4); /*0x69ecbd*/
      if ( v6 ) /*0x69ecc1*/
      {
        if ( *(_WORD *)(v6 + 0xB6) ) /*0x69ecc3*/
        {
          v7 = **(_DWORD **)(v6 + 0xB0); /*0x69ecd3*/
          if ( v7 ) /*0x69ecd7*/
          {
            v8 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x69ecde*/
            if ( v8 ) /*0x69ece2*/
            {
              if ( v8->members.children.end ) /*0x69ece4*/
              {
                ChildAtIndex = NiNode_GetChildAtIndex(v8, 0); /*0x69ecf2*/
                if ( ChildAtIndex ) /*0x69ecf9*/
                {
                  v10 = (const NiPoint3 *)ChildAtIndex->vtbl->super.Unk_02((NiObject *)ChildAtIndex); /*0x69ed02*/
                  if ( v10 ) /*0x69ed06*/
                    v5 = !NiPoint3__NotEqual(v10 + 7, &g_zeroNiPoint3); /*0x69ed19*/
                }
              }
            }
          }
        }
      }
      x = v4->members.super.m_worldTransform.pos.x; /*0x69ed21*/
      y = v4->members.super.m_worldTransform.pos.y; /*0x69ed27*/
      z = v4->members.super.m_worldTransform.pos.z; /*0x69ed2f*/
      if ( v5 ) /*0x69ed34*/
        z = z - dbl_A4D910; /*0x69ed40*/
    }
    else if ( this->super.targetReference->vtbl->GetBaseForm(this->super.targetReference) /*0x69ed68*/
           && this->super.targetReference->vtbl->GetBaseForm(this->super.targetReference)->member.type == kFormType_Door )
    {
      x = v4->members.super.m_kWorldBound.Center.x; /*0x69ed73*/
      y = v4->members.super.m_kWorldBound.Center.y; /*0x69ed76*/
      z = v4->members.super.m_worldTransform.pos.z; /*0x69ed7d*/
    }
    else
    {
      x = v4->members.super.m_worldTransform.pos.x; /*0x69ed89*/
      y = v4->members.super.m_worldTransform.pos.y; /*0x69ed8f*/
      z = v4->members.super.m_worldTransform.pos.z; /*0x69ed95*/
    }
    unknown_30 = (float *)this->modelRoot_30; /*0x69ed99*/
    if ( unknown_30 ) /*0x69ed9e*/
    {
      unknown_30[0x15] = x; /*0x69eda0*/
      unknown_30[0x16] = y; /*0x69eda7*/
      unknown_30[0x17] = z; /*0x69edaa*/
      qmemcpy((char *)this->modelRoot_30 + 0x30, &v4->members.super.m_localTransform, 0x24u); /*0x69edbb*/
    }
  }
}
