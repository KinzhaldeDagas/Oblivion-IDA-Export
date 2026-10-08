// ArrowProjectile save serializer retains projectile/lifecycle, shooter, AMMO enchantment, poison, and collision data, but no originating weapon form. Save/load therefore cannot recover proxy-to-WEAP identity natively.
void __thiscall ArrowProjectile_SaveGame(ArrowProjectile *this, UInt32 changeFlags)
{
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESSaveLoadGame_SerializationView *v6; // ecx
  Actor *shooter; // eax
  EnchantmentItem *arrowEnch; // eax
  AlchemyItem *poison; // eax
  ArrowProjectile_CollisionData *unk05C; // eax
  NiNode *ninode; // eax
  ArrowProjectile_CollisionData *v12; // eax
  NiNode *v13; // ecx
  float v14; // edx
  char v15; // di
  unsigned __int16 v16; // ax
  ArrowProjectile_CollisionData *v17; // edx
  int v18; // eax
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v20; // esi
  TESForm *v21; // eax
  const char *v22; // eax
  unsigned __int8 *v23; // edi
  unsigned __int8 *v24; // esi
  int v25; // [esp-Ch] [ebp-50h]
  int v26; // [esp-8h] [ebp-4Ch]
  const char *v27; // [esp-4h] [ebp-48h]
  TESForm Src; // [esp+10h] [ebp-34h] BYREF
  unsigned __int8 *v29; // [esp+28h] [ebp-1Ch]
  int source; // [esp+2Ch] [ebp-18h] BYREF
  int v31; // [esp+30h] [ebp-14h]
  float v32[4]; // [esp+34h] [ebp-10h] BYREF

  MobileObject_SaveModifiedForm(&this->super, changeFlags); /*0x6099de*/
  v3 = g_TESSaveLoadGame; /*0x6099e3*/
  source = 0; /*0x6099eb*/
  bufferCursor = v3->bufferCursor; /*0x6099ef*/
  v29 = 0; /*0x6099f2*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6099f6*/
  {
    v5 = g_TESSaveLoadGame; /*0x609a06*/
    Src.member.modlist.next = (TESForm::ModReferenceList *)0x4B4F4C42; /*0x609a0c*/
    SaveLoad_SaveData(v5, &Src.member.modlist.next, 4u); /*0x609a14*/
    v6 = g_TESSaveLoadGame; /*0x609a19*/
    v29 = g_TESSaveLoadGame->bufferCursor; /*0x609a29*/
    SaveLoad_SaveData(v6, &source, 2u); /*0x609a2d*/
  }
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->unk060, 4u); /*0x609a3e*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this->unk064, 4u); /*0x609a4b*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this->elapsedTime, 4u); /*0x609a58*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this->speed, 4u); /*0x609a65*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this->unk070, 4u); /*0x609a72*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this->unk074, 4u); /*0x609a7f*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this->unk088, 0xCu); /*0x609a8f*/
  shooter = this->shooter; /*0x609a94*/
  Src.member.flags = 0; /*0x609a99*/
  if ( shooter ) /*0x609a9d*/
    Src.member.flags = shooter->members.super.super.super.refID; /*0x609aa2*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, (const unsigned int *)&Src.member.flags, 4u); /*0x609aaf*/
  arrowEnch = this->arrowEnch; /*0x609ab4*/
  Src.member.refID = 0; /*0x609ab9*/
  if ( arrowEnch ) /*0x609abd*/
    Src.member.refID = *((_DWORD *)arrowEnch + 3); /*0x609ac2*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &Src.member.refID, 4u); /*0x609acf*/
  poison = this->poison; /*0x609ad4*/
  Src.member.modlist.data = 0; /*0x609adc*/
  if ( poison ) /*0x609ae0*/
    Src.member.modlist.data = *((Data **)poison + 3); /*0x609ae5*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, (const unsigned int *)&Src.member.modlist, 4u); /*0x609af2*/
  LOBYTE(changeFlags) = this->unk05C != 0; /*0x609b00*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &changeFlags, 1u); /*0x609b0e*/
  if ( (_BYTE)changeFlags ) /*0x609b17*/
  {
    SaveLoad_SaveData(g_TESSaveLoadGame, this->unk05C, 4u); /*0x609b29*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this->unk05C->unk00[1], 0xCu); /*0x609b39*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this->unk05C->unk00[4], 0xCu); /*0x609b49*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this->unk05C->unk00[7], 0xCu); /*0x609b59*/
    if ( g_TESSaveLoadGame->currentVersion >= 0x50u ) /*0x609b68*/
    {
      sub_7150F0(v32, &this->unk05C->unk2C[1]); /*0x609b75*/
      SaveLoad_SaveData(g_TESSaveLoadGame, v32, 0x10u); /*0x609b87*/
    }
    unk05C = this->unk05C; /*0x609b8c*/
    if ( LODWORD(unk05C->unk00[0]) <= 1 ) /*0x609b94*/
    {
      Src.member.modlist.next = 0; /*0x609b9e*/
      ninode = unk05C->ninode; /*0x609ba2*/
      if ( ninode ) /*0x609ba7*/
        Src.member.modlist.next = (TESForm::ModReferenceList *)ninode->members.super.super.m_controller; /*0x609bac*/
      TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, (const unsigned int *)&Src.member.modlist.next, 4u); /*0x609bb9*/
      v12 = this->unk05C; /*0x609bbe*/
      Src.vtbl = 0; /*0x609bc1*/
      *(_DWORD *)&Src.member.type = 0xFFFFFFFF; /*0x609bc5*/
      v13 = v12->ninode; /*0x609bcd*/
      if ( v13 ) /*0x609bd2*/
      {
        v14 = v12->unk2C[0]; /*0x609bd4*/
        if ( v14 != 0.0 ) /*0x609bd9*/
        {                                       // When +0x94 is pending, collisionData +0x2C already holds packed saved collision-object identifiers; save those directly instead of deriving indices from live 3D.
          if ( LOBYTE(this->unk094) ) /*0x609bdb*/
          {
            Src.vtbl = (TESFormVtbl *)HIWORD(LODWORD(v12->unk2C[0])); /*0x609c38*/
            *(_DWORD *)&Src.member.type = LOWORD(v14);// When projectile+0x94 is set, save logic instead unpacks the already stored collision data at projectile+0x2C into the serialized indices. /*0x609c3c*/
          }
          else
          {
            LOBYTE(v31) = LODWORD(v12->unk00[0]) == 0;// When the saved embedded-collision flag at projectile+0x94 is clear, save logic derives collision-object indices from the currently attached target 3D. /*0x609bea*/
            v15 = v31; /*0x609bee*/
            v16 = sub_480C50((_WORD *)LODWORD(v13->members.super.m_localTransform.rot.data[1][0]), v31, v31, 1); /*0x609bf8*/
            v17 = this->unk05C; /*0x609bfd*/
            Src.vtbl = (TESFormVtbl *)v16; /*0x609c03*/
            v18 = sub_4A05E0(LODWORD(v17->unk2C[0])); /*0x609c0b*/
            *(_DWORD *)&Src.member.type = (unsigned __int16)sub_480D60( /*0x609c2a*/
                                                              (_WORD *)LODWORD(this->unk05C->ninode->members.super.m_localTransform.rot.data[1][0]),
                                                              v18,
                                                              v15,
                                                              v15,
                                                              1);// End of live-target collision-index derivation for an embedded projectile save record.
          }
        }
      }
      TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &Src, 2u); /*0x609c49*/
      TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &Src.member, 2u); /*0x609c57*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x54u ) /*0x609c66*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)&this->unk094 + 1, 1u); /*0x609c73*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x55u ) /*0x609c82*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)&this->unk094 + 2, 1u); /*0x609c8f*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x609ca1*/
    v20 = g_TESSaveLoadGame->bufferCursor; /*0x609ca9*/
    if ( currentlySavingFormHeader )
    {
      v21 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x609cb1*/
      v22 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v21->vtbl->GetEditorName)( /*0x609cd1*/
                            v21,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x8E6,
                            ".\\AI\\ArrowProjectile.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v20 - bufferCursor,
        *currentlySavingFormHeader,
        v22,
        v25,
        v26,
        v27);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v20 - bufferCursor,
        0x8E6,
        ".\\AI\\ArrowProjectile.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x609d09*/
  {
    v23 = v29; /*0x609d18*/
    v24 = g_TESSaveLoadGame->bufferCursor; /*0x609d1c*/
    if ( v24 > v29 + 0xFFFF ) /*0x609d27*/
      PrintError( /*0x609d38*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\ArrowProjectile.cpp",
        0x8E6);
    *(_WORD *)v23 = (_WORD)v24 - (_WORD)v23; /*0x609d42*/
  }
}
