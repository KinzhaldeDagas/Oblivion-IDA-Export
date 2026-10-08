TESForm *__userpurge TESSaveLoadGame_CreateReferenceFromInitialData@<eax>(
        TESSaveLoadGame_SerializationView *self@<ecx>,
        double arg2@<st2>,
        double arg3@<st1>,
        unsigned int referenceID,
        OblivionCreatedReferenceInitialData *data)
{
  TESForm *v6; // ebx
  TESForm *v7; // esi
  TESForm *v8; // eax
  void *v10; // eax
  OblivionCreatedReferenceKind kind; // eax
  ArrowProjectile *v12; // eax
  TESObjectREFR *v13; // eax
  unsigned int boundFormIDOrVariant; // edi
  TESForm *v15; // ecx
  unsigned int v16; // edi
  MagicFogProjectile *v17; // eax
  TESForm *v18; // eax
  MagicBoltProjectile *v19; // eax
  MagicBallProjectile *v20; // eax
  TESChildCELL *v21; // eax
  TESForm *v22; // eax
  TESObjectREFR *v23; // eax
  TESObjectREFR *v24; // eax
  TESObjectREFR *v25; // eax
  unsigned int v26; // [esp-8h] [ebp-28h]

  v6 = 0; /*0x460417*/
  v7 = TESForm_LookupByFormID(referenceID); /*0x46041c*/
  if ( data->kind != kOblivionReference_MagicProjectile ) /*0x46041e*/
  {
    v8 = TESForm_LookupByFormID(data->boundFormIDOrVariant); /*0x460430*/
    v6 = (TESForm *)OblivionDynamicCast( /*0x46043e*/
                      v8,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                      0);
    if ( !v6 ) /*0x460445*/
    {
      PrintError( /*0x460455*/
        "Bound object %08X no longer exists.  Reference %08X will not be created.",
        data->boundFormIDOrVariant,
        referenceID);
      return 0; /*0x46045f*/
    }
  }
  if ( v7 ) /*0x460466*/
  {
    v10 = OblivionDynamicCast( /*0x460477*/
            v7,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
            0);
    if ( v10 /*0x46049c*/
      && (data->kind == kOblivionReference_Normal || data->kind == kOblivionReference_RestoreExistingOrNormal)
      && (TESForm *)(*(int (__thiscall **)(void *))(*(_DWORD *)v10 + 0x170))(v10) == v6 )
    {
      goto LABEL_43; /*0x46049c*/
    }
    TESSaveLoadGame_DeleteForm(self, v7); /*0x4604a5*/
    v7 = 0; /*0x4604aa*/
  }
  kind = data->kind; /*0x4604ac*/
  if ( data->kind && kind != kOblivionReference_RestoreExistingOrNormal ) /*0x4604b9*/
  {
    if ( kind == kOblivionReference_ArrowProjectile ) /*0x4604c2*/
    {
      v12 = (ArrowProjectile *)FormHeapAlloc(0x9Cu); /*0x4604c9*/
      if ( v12 ) /*0x4604df*/
        v7 = (TESForm *)ArrowProjectile_Initialize(v12); /*0x4604e8*/
      else
        v7 = 0; /*0x4604ec*/
      v13 = (TESObjectREFR *)OblivionDynamicCast( /*0x460505*/
                               v7,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
      TESObjectREFR_SetBaseForm(v13, v6); /*0x460510*/
      v26 = referenceID; /*0x46051b*/
      goto LABEL_41; /*0x46051c*/
    }
    if ( kind != kOblivionReference_MagicProjectile ) /*0x460524*/
    {
      PrintError( /*0x4605db*/
        "Invalid created reference type %i for form %08X with bound object %08X in location %08X",
        kind,
        referenceID,
        data->boundFormIDOrVariant,
        data->locationFormID);
      goto LABEL_42; /*0x4605e3*/
    }
    boundFormIDOrVariant = data->boundFormIDOrVariant; /*0x46052a*/
    v15 = 0; /*0x46052d*/
    if ( boundFormIDOrVariant ) /*0x460531*/
    {
      v16 = boundFormIDOrVariant - 1; /*0x460533*/
      if ( v16 ) /*0x460536*/
      {
        if ( v16 != 2 ) /*0x46053a*/
        {
LABEL_29:
          v7 = v15; /*0x4605ba*/
          TESForm_SetFormID(v15, referenceID, 1); /*0x4605c3*/
          goto LABEL_42; /*0x4605c3*/
        }
        v17 = (MagicFogProjectile *)FormHeapAlloc(0x9Cu); /*0x460541*/
        if ( v17 ) /*0x460557*/
        {
          v18 = (TESForm *)MagicForProjectile::MagicFogProjectile(v17); /*0x46055b*/
LABEL_28:
          v15 = v18; /*0x4605b0*/
          goto LABEL_29; /*0x4605b8*/
        }
      }
      else
      {
        v19 = (MagicBoltProjectile *)FormHeapAlloc(0xA4u); /*0x460567*/
        if ( v19 ) /*0x46057d*/
        {
          v18 = (TESForm *)MagicBoltProjectile::MagicBoltProjectile(v19, arg2, arg3); /*0x460581*/
          goto LABEL_28; /*0x460586*/
        }
      }
    }
    else
    {
      v20 = (MagicBallProjectile *)FormHeapAlloc(0x90u); /*0x46058d*/
      if ( v20 ) /*0x4605a3*/
      {
        v18 = (TESForm *)MagicBallProjectile::MagicBallProjectile(v20, arg2, arg3); /*0x4605a7*/
        goto LABEL_28; /*0x4605ac*/
      }
    }
    v18 = 0; /*0x4605ae*/
    goto LABEL_28; /*0x4605ae*/
  }
  if ( v6->member.type == kFormType_NPC ) /*0x4605ef*/
  {
    v24 = (TESObjectREFR *)FormHeapAlloc(0x10Cu); /*0x460644*/
    if ( v24 ) /*0x46065a*/
    {
      v22 = (TESForm *)Character_constr(v24); /*0x46065e*/
      goto LABEL_40; /*0x460663*/
    }
    goto LABEL_39; /*0x46065a*/
  }
  if ( v6->member.type == kFormType_Creature ) /*0x4605f4*/
  {
    v23 = (TESObjectREFR *)FormHeapAlloc(0x108u); /*0x46061e*/
    if ( v23 ) /*0x460634*/
    {
      v22 = (TESForm *)Creature_constr(v23); /*0x460638*/
      goto LABEL_40; /*0x46063d*/
    }
LABEL_39:
    v22 = 0; /*0x460665*/
    goto LABEL_40; /*0x460665*/
  }
  v21 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x4605f8*/
  if ( !v21 ) /*0x46060e*/
    goto LABEL_39; /*0x46060e*/
  v22 = (TESForm *)TESObjectREFR_constr(v21); /*0x460612*/
LABEL_40:
  v7 = v22; /*0x460667*/
  v25 = (TESObjectREFR *)OblivionDynamicCast( /*0x460680*/
                           v22,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                           0);
  TESObjectREFR_SetBaseForm(v25, v6); /*0x46068b*/
  v26 = referenceID; /*0x460696*/
LABEL_41:
  TESForm_SetFormID(v7, v26, 1); /*0x460697*/
LABEL_42:
  if ( v7 ) /*0x4606a0*/
LABEL_43:
    v7->member.flags |= 0x200000u; /*0x4606a2*/
  return v7; /*0x4606ab*/
}
