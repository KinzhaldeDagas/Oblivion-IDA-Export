// Verified MagicShaderHitEffect UpdateVisualPlacement updates the attached node transform for target/player perspective and detaches/rebinds nodes when perspective or attachment state changes.
void __thiscall MagicShaderHitEffect_UpdateVisualPlacement(MagicShaderHitEffect *this)
{
  PlayerCharacter *v2; // ecx
  bool v3; // bl
  NiNode *NodeByPerspective; // ebx
  NiNode *attachedNode_40; // eax
  UInt32 *p_m_worldTransform; // esi
  NiNode *m_parent; // esi
  InterfaceManager *Singleton; // eax
  NiNode *v9; // esi
  NiTransform *v10; // eax
  NiNode *v11; // edi
  NiMatrix33 *v12; // esi
  NiNode *v13; // eax
  NiObject *v14; // eax
  NiNode *v15; // ecx
  NiNode *v16; // edi
  NiMatrix33 *v17; // eax
  NiNode *v18; // esi
  NiNode *v19; // edi
  NiTransform *v20; // eax
  NiTransform *v21; // eax
  NiPoint3 *p_pos; // eax
  NiPoint3 *v23; // [esp+Ch] [ebp-CCh]
  char v24; // [esp+21h] [ebp-B7h]
  char v25; // [esp+22h] [ebp-B6h]
  char v26; // [esp+23h] [ebp-B5h] BYREF
  NiNode *v27; // [esp+24h] [ebp-B4h] BYREF
  float v28; // [esp+28h] [ebp-B0h] BYREF
  float *v29; // [esp+2Ch] [ebp-ACh] BYREF
  NiTransform a2; // [esp+30h] [ebp-A8h] BYREF
  NiMatrix33 out; // [esp+6Ch] [ebp-6Ch] BYREF
  float v32[9]; // [esp+90h] [ebp-48h] BYREF
  float v33[9]; // [esp+B4h] [ebp-24h] BYREF

  v2 = reference; /*0x6a12da*/
  v3 = this->super.targetReference == (TESObjectREFR *)reference; /*0x6a12e3*/
  if ( (PlayerCharacter *)this->super.targetReference != reference /*0x6a12f9*/
    || !v2
    || (v24 = 1, (MagicShaderHitEffect *)v2->unk5E0 != this) )
  {
    v24 = 0; /*0x6a12fb*/
  }
  if ( (PlayerCharacter *)this->super.targetReference == reference && v2 ) /*0x6a1306*/
  {
    if ( PlayerCharacter_GetNodeByPerspective(v2, 0) /*0x6a1324*/
      && (PlayerCharacter_GetNodeByPerspective(reference, 0)->members.super.m_flags & 1) != 0 )
    {
      v2 = reference; /*0x6a1326*/
      v25 = 1; /*0x6a132c*/
      goto LABEL_12; /*0x6a1331*/
    }
    v2 = reference; /*0x6a1333*/
  }
  v25 = 0; /*0x6a1339*/
LABEL_12:
  if ( this->bWeaponEnchantment_28 ) /*0x6a133e*/
  {
    MagicShaderHitEffect_ResolveVisualAttachmentTargets((int)this, &v26, &v26, &v28, &v29, (float **)&v27); /*0x6a137d*/
    NodeByPerspective = v27; /*0x6a1382*/
  }
  else if ( v3 ) /*0x6a1346*/
  {
    NodeByPerspective = PlayerCharacter_GetNodeByPerspective(v2, 0); /*0x6a134f*/
  }
  else
  {
    NodeByPerspective = this->super.targetReference->vtbl->GetNiNode(this->super.targetReference); /*0x6a1360*/
  }
  attachedNode_40 = this->attachedNode_40; /*0x6a1386*/
  if ( attachedNode_40 && NodeByPerspective ) /*0x6a1393*/
  {
    p_m_worldTransform = (UInt32 *)&NodeByPerspective->members.super.m_worldTransform; /*0x6a139e*/
    if ( !this->bWeaponEnchantment_28 ) /*0x6a1399*/
      p_m_worldTransform = &stru_B26AF0[0xA].unk2C; /*0x6a13a3*/
    qmemcpy(a2.rot.data[1], p_m_worldTransform, 0x24u); /*0x6a13b7*/
    if ( v24 ) /*0x6a13b9*/
    {
      m_parent = attachedNode_40->members.super.m_parent; /*0x6a13bf*/
      if ( m_parent != InterfaceManager_GetSingleton(0, 1)->unk054[3] ) /*0x6a13d1*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x6a13d7*/
        ((void (__thiscall *)(NiNode *, NiNode *, int))Singleton->unk054[3]->members.super.m_parent->vtbl->AddObject)( /*0x6a13f3*/
          Singleton->unk054[3]->members.super.m_parent,
          this->attachedNode_40,
          1);
      }
      v9 = this->attachedNode_40; /*0x6a13f5*/
      v10 = sub_7101F0( /*0x6a140a*/
              &v9->members.super.m_parent->members.super.m_worldTransform,
              &a2,
              &NodeByPerspective->members.super.m_worldTransform.pos);
      v9->members.super.m_localTransform.pos.x = v10->rot.data[0][0]; /*0x6a1411*/
      v9->members.super.m_localTransform.pos.y = v10->rot.data[0][1]; /*0x6a1417*/
      v9->members.super.m_localTransform.pos.z = v10->rot.data[0][2]; /*0x6a141d*/
      v11 = this->attachedNode_40; /*0x6a1420*/
      v12 = NiMAtrix33_Multiply( /*0x6a1438*/
              &v11->members.super.m_parent->members.super.m_worldTransform.rot,
              &out,
              (NiMatrix33 *)a2.rot.data[1]);
      goto LABEL_32; /*0x6a143a*/
    }
    if ( !v25 || !PlayerCharacter_GetNodeByPerspective(reference, 1) ) /*0x6a1452*/
    {
      p_pos = &this->attachedNode_40->members.super.m_localTransform.pos; /*0x6a1534*/
      p_pos->x = NodeByPerspective->members.super.m_worldTransform.pos.x; /*0x6a1537*/
      p_pos->y = NodeByPerspective->members.super.m_worldTransform.pos.y; /*0x6a153c*/
      p_pos->z = NodeByPerspective->members.super.m_worldTransform.pos.z; /*0x6a1542*/
      v11 = this->attachedNode_40; /*0x6a1545*/
      v12 = (NiMatrix33 *)a2.rot.data[1]; /*0x6a1548*/
LABEL_32:
      qmemcpy(&v11->members.super.m_localTransform, v12, 0x24u); /*0x6a154c*/
      goto LABEL_33; /*0x6a1554*/
    }
    v13 = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x6a1467*/
    v14 = NiRTTI_Cast((BSStringT *)&parent, (NiObject *)v13); /*0x6a1472*/
    if ( v14 ) /*0x6a147c*/
    {
      v15 = this->attachedNode_40; /*0x6a147e*/
      if ( v14 != (NiObject *)v15->members.super.m_parent ) /*0x6a1484*/
        ((void (__thiscall *)(NiObject *, NiNode *, int))v14->__vftable[1].Unk_0E)(v14, v15, 1); /*0x6a1493*/
    }
    v16 = this->attachedNode_40; /*0x6a1495*/
    v17 = (NiMatrix33 *)sub_7103C0((float *)&v16->members.super.m_parent->members.super.m_worldTransform, v32); /*0x6a14b0*/
    qmemcpy(&v16->members.super.m_localTransform, NiMAtrix33_Multiply(v17, &out, (NiMatrix33 *)a2.rot.data[1]), 0x24u); /*0x6a14c6*/
    v18 = this->attachedNode_40; /*0x6a14c8*/
    v19 = v18->members.super.m_parent; /*0x6a14cb*/
    v23 = (NiPoint3 *)sub_4121A0( /*0x6a14e5*/
                        &NodeByPerspective->members.super.m_worldTransform.pos.x,
                        (float *)&a2,
                        &v19->members.super.m_worldTransform.pos.x);
    v20 = (NiTransform *)sub_7103C0((float *)&v19->members.super.m_worldTransform, v33); /*0x6a14f6*/
    v21 = sub_7101F0(v20, (NiTransform *)&a2.scale, v23); /*0x6a14fd*/
    v18->members.super.m_localTransform.pos.x = v21->rot.data[0][0]; /*0x6a1506*/
    v18->members.super.m_localTransform.pos.y = v21->rot.data[0][1]; /*0x6a150c*/
    v18->members.super.m_localTransform.pos.z = v21->rot.data[0][2]; /*0x6a1515*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)this->attachedNode_40, 0.0, 0); /*0x6a151e*/
  }
LABEL_33:
  if ( v25 || v24 ) /*0x6a1564*/
    sub_69DC90((TESObjectREFR **)this, 0); /*0x6a157e*/
  else
    sub_69DC90((TESObjectREFR **)this, (int)this->attachedNode_40); /*0x6a156c*/
}
