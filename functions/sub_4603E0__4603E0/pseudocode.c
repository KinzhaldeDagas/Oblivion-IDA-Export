TESForm *__userpurge sub_4603E0@<eax>(char *ecx0@<ecx>, double a2@<st2>, double a3@<st1>, int a1, int *a5)
{
  _BYTE *v6; // ebx
  TESForm *v7; // esi
  TESForm *v8; // eax
  void *v10; // eax
  int v11; // eax
  TESObjectREFR *v12; // eax
  TESObjectREFR *v13; // eax
  int v14; // edi
  TESForm *v15; // ecx
  int v16; // edi
  MagicFogProjectile *v17; // eax
  TESForm *v18; // eax
  MagicBoltProjectile *v19; // eax
  MagicBallProjectile *v20; // eax
  TESChildCELL *v21; // eax
  TESForm *v22; // eax
  TESObjectREFR *v23; // eax
  TESObjectREFR *v24; // eax
  TESObjectREFR *v25; // eax
  int v26; // [esp-8h] [ebp-28h]

  v6 = 0;
  v7 = TESForm_LookupByFormID(a1);
  if ( *a5 != 2 )
  {
    v8 = TESForm_LookupByFormID(a5[1]);
    v6 = OblivionDynamicCast(
           v8,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
           0);
    if ( !v6 )
    {
      PrintError("Bound object %08X no longer exists.  Reference %08X will not be created.", a5[1], a1);
      return 0;
    }
  }
  if ( v7 )
  {
    v10 = OblivionDynamicCast(
            v7,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
            0);
    if ( v10 && (!*a5 || *a5 == 3) && (_BYTE *)(*(int (__thiscall **)(void *))(*(_DWORD *)v10 + 0x170))(v10) == v6 )
      goto LABEL_43;
    sub_45C7A0(ecx0, v7);
    v7 = 0;
  }
  v11 = *a5;
  if ( *a5 && v11 != 3 )
  {
    if ( v11 == 1 )
    {
      v12 = (TESObjectREFR *)FormHeapAlloc(0x9Cu);
      if ( v12 )
        v7 = (TESForm *)sub_6078E0(v12);
      else
        v7 = 0;
      v13 = (TESObjectREFR *)OblivionDynamicCast(
                               v7,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
      TESObjectREFR_SetBaseForm(v13, (int)v6);
      v26 = a1;
      goto LABEL_41;
    }
    if ( v11 != 2 )
    {
      PrintError(
        "Invalid created reference type %i for form %08X with bound object %08X in location %08X",
        v11,
        a1,
        a5[1],
        a5[2]);
      goto LABEL_42;
    }
    v14 = a5[1];
    v15 = 0;
    if ( v14 )
    {
      v16 = v14 - 1;
      if ( v16 )
      {
        if ( v16 != 2 )
        {
LABEL_29:
          v7 = v15;
          TESForm_SetFormID(v15, a1, 1);
          goto LABEL_42;
        }
        v17 = (MagicFogProjectile *)FormHeapAlloc(0x9Cu);
        if ( v17 )
        {
          v18 = (TESForm *)MagicForProjectile::MagicFogProjectile(v17);
LABEL_28:
          v15 = v18;
          goto LABEL_29;
        }
      }
      else
      {
        v19 = (MagicBoltProjectile *)FormHeapAlloc(0xA4u);
        if ( v19 )
        {
          v18 = (TESForm *)MagicBoltProjectile::MagicBoltProjectile(v19, a2, a3);
          goto LABEL_28;
        }
      }
    }
    else
    {
      v20 = (MagicBallProjectile *)FormHeapAlloc(0x90u);
      if ( v20 )
      {
        v18 = (TESForm *)MagicBallProjectile::MagicBallProjectile(v20, a2, a3);
        goto LABEL_28;
      }
    }
    v18 = 0;
    goto LABEL_28;
  }
  if ( v6[4] == 0x23 )
  {
    v24 = (TESObjectREFR *)FormHeapAlloc(0x10Cu);
    if ( v24 )
    {
      v22 = (TESForm *)Character_constr(v24);
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  if ( v6[4] == 0x24 )
  {
    v23 = (TESObjectREFR *)FormHeapAlloc(0x108u);
    if ( v23 )
    {
      v22 = (TESForm *)Creature_constr(v23);
      goto LABEL_40;
    }
LABEL_39:
    v22 = 0;
    goto LABEL_40;
  }
  v21 = (TESChildCELL *)FormHeapAlloc(0x58u);
  if ( !v21 )
    goto LABEL_39;
  v22 = (TESForm *)TESObjectREFR_constr(v21);
LABEL_40:
  v7 = v22;
  v25 = (TESObjectREFR *)OblivionDynamicCast(
                           v22,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                           0);
  TESObjectREFR_SetBaseForm(v25, (int)v6);
  v26 = a1;
LABEL_41:
  TESForm_SetFormID(v7, v26, 1);
LABEL_42:
  if ( v7 )
LABEL_43:
    v7->member.flags |= 0x200000u;
  return v7;
}
