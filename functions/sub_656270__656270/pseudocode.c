// MiddleHighProcess vtable +0x150 weapon attachment update. Reparents weapon 3D between drawn/sheathed attachment nodes, applies Oblivion staff/bow transforms, rebuilds or removes power-attack groups, and updates actor weapon state.
void __thiscall MiddleHighProcess_UpdateWeaponAttachment(
        MiddleHighProcess *this,
        char weaponDrawn,
        ActorAnimData *sourceAnimData,
        ActorAnimData *targetAnimData,
        Actor *actor)
{
  double v5; // st5
  double v6; // st6
  double v7; // st7
  ActorAnimData *v9; // edi
  UInt32 v10; // esi
  ActorAnimData *v11; // eax
  bool v12; // zf
  NiNode *v13; // ebx
  NiNode *v14; // ecx
  NiAVObject *ChildAtIndex; // ebx
  NiNode *v16; // ecx
  float x; // eax
  float z; // edx
  TESObjectREFR *v19; // esi
  ActorAnimData *v20; // edi
  float v21; // [esp+20h] [ebp-30h]
  float y; // [esp+24h] [ebp-2Ch]
  float v23; // [esp+28h] [ebp-28h]
  float v24[9]; // [esp+2Ch] [ebp-24h] BYREF

  sub_651DD0(this); /*0x656279*/
  if ( !this->equippedWeaponData ) /*0x65627e*/
    goto LABEL_25; /*0x65627e*/
  v9 = sourceAnimData; /*0x65628e*/
  v10 = this->Unk_45(this, (UInt32)sourceAnimData); /*0x65629d*/
  v11 = (ActorAnimData *)this->Unk_48(this, (UInt32)v9); /*0x6562ab*/
  v12 = this->unk0F4 == 0; /*0x6562ad*/
  v13 = (NiNode *)v11; /*0x6562b4*/
  sourceAnimData = v11; /*0x6562b6*/
  if ( !v12 ) /*0x6562ba*/
    v10 = this->Unk_46(this, (UInt32)v9); /*0x6562ca*/
  if ( !v10 ) /*0x6562ce*/
    goto LABEL_25; /*0x6562ce*/
  if ( v13 ) /*0x6562d6*/
  {
    v14 = v13; /*0x6562e3*/
    if ( !weaponDrawn ) /*0x6562e5*/
      v14 = (NiNode *)v10; /*0x6562e7*/
    ChildAtIndex = NiNode_GetChildAtIndex(v14, 0); /*0x6562f5*/
    if ( this->unk0F4 && v9 && ChildAtIndex == (NiAVObject *)sub_478180(v9) || !ChildAtIndex ) /*0x65630a*/
    {
      v16 = (NiNode *)sourceAnimData; /*0x656339*/
      if ( weaponDrawn ) /*0x65633f*/
        v16 = (NiNode *)v10; /*0x656341*/
      ChildAtIndex = NiNode_GetChildAtIndex(v16, 0); /*0x656348*/
      if ( !ChildAtIndex ) /*0x65634c*/
        goto LABEL_25; /*0x65634c*/
    }
    else if ( weaponDrawn ) /*0x656314*/
    {
      (*(void (__thiscall **)(UInt32, NiAVObject *, int))(*(_DWORD *)v10 + 0x84))(v10, ChildAtIndex, 1);// Draw transition: move generated model child 0 from BackWeapon/SideWeapon storage to the permanent Weapon anchor. A model-local ArrowBone moves with that subtree. /*0x656320*/
    }
    else
    {
      (*(void (__thiscall **)(ActorAnimData *, NiAVObject *, int))(sourceAnimData->unk00 + 0x84))( /*0x656330*/
        sourceAnimData,
        ChildAtIndex,
        1);                                     // Sheath transition: move generated model child 0 from Weapon back to its Prn-selected BackWeapon/SideWeapon storage anchor.
    }
    x = g_zeroNiPoint3.x; /*0x656352*/
    z = g_zeroNiPoint3.z; /*0x656357*/
    qmemcpy(v24, &stru_B26AF0[0xA].unk2C, sizeof(v24)); /*0x65636b*/
    v21 = x; /*0x656373*/
    y = g_zeroNiPoint3.y; /*0x65637d*/
    v23 = z; /*0x65638e*/
    if ( LOBYTE(this->equippedWeaponData->type[6].vtbl) == 4 ) /*0x656392*/
    {
      if ( !weaponDrawn ) /*0x6563c4*/
      {
        v7 = flt_A449C0; /*0x6563c6*/
        NiMatrix33_InitRotationXTransposed(v24, flt_A449C0); /*0x6563d4*/
      }
    }
    else if ( LOBYTE(this->equippedWeaponData->type[6].vtbl) == 5 && !weaponDrawn ) /*0x65639e*/
    {
      NiMatrix33_InitRotationXTransposed(v24, flt_A72D4C); /*0x6563ae*/
      v7 = flt_A72D48; /*0x6563b3*/
      y = flt_A72D48; /*0x6563b9*/
    }
    qmemcpy(&ChildAtIndex->members.m_localTransform, v24, 0x24u); /*0x6563ed*/
    ChildAtIndex->members.m_localTransform.pos.x = v21; /*0x6563f3*/
    ChildAtIndex->members.m_localTransform.pos.y = y; /*0x6563f6*/
    ChildAtIndex->members.m_localTransform.pos.z = v23; /*0x6563f9*/
LABEL_25:
    v19 = (TESObjectREFR *)actor; /*0x6563fc*/
    goto LABEL_26; /*0x6563fc*/
  }
  if ( weaponDrawn ) /*0x656442*/
    goto LABEL_25; /*0x656442*/
  if ( !this->equippedWeaponData ) /*0x656444*/
    goto LABEL_25; /*0x656444*/
  (*(void (__thiscall **)(UInt32, ActorAnimData **, _DWORD))(*(_DWORD *)v10 + 0x8C))(v10, &sourceAnimData, 0); /*0x65645e*/
  NiPointerSlot_Release((NiD3DVertexShader *)&sourceAnimData); /*0x656464*/
  if ( sub_45A500(g_TESSaveLoadGame) ) /*0x65646f*/
    goto LABEL_25; /*0x656476*/
  v19 = (TESObjectREFR *)actor; /*0x656481*/
  v7 = Actor_UnequipItem(actor, v7, v5, v6, (char)this->equippedWeaponData->type, 1, 0, 0, 0, 0); /*0x656492*/
LABEL_26:
  if ( Actor::HasNPCBaseForm(v19) ) /*0x656402*/
  {
    v20 = targetAnimData; /*0x65640f*/
    if ( targetAnimData ) /*0x656415*/
    {
      if ( !Menu_GetOpenMenuTile(0x40C) ) /*0x656420*/
      {
        if ( weaponDrawn ) /*0x656432*/
          ActorAnimData_RebuildPowerAttackKFList(v20, (int)v20, v5, v6, v7, v19, 0); /*0x656436*/
        else
          ActorAnimData_RemovePowerAttackGroups(v20); /*0x65649c*/
      }
    }
  }
  sub_5EF9B0((int)v19, weaponDrawn); /*0x6564a8*/
}
