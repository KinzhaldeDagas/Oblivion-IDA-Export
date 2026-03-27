char __thiscall sub_4ABE50(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // edi
  char v6; // bl
  char v7; // bl
  char v8; // bl
  char v9; // bl
  char v10; // bl
  char v11; // bl
  char v12; // bl
  char v13; // bl
  char v14; // bl
  char v15; // bl
  char v16; // bl
  char v17; // bl
  double v18; // [esp+10h] [ebp-8h]
  double v19; // [esp+10h] [ebp-8h]
  double v20; // [esp+10h] [ebp-8h]
  double v21; // [esp+10h] [ebp-8h]
  double v22; // [esp+10h] [ebp-8h]
  double v23; // [esp+10h] [ebp-8h]
  double v24; // [esp+10h] [ebp-8h]
  double v25; // [esp+10h] [ebp-8h]
  double v26; // [esp+10h] [ebp-8h]
  double v27; // [esp+10h] [ebp-8h]
  double v28; // [esp+10h] [ebp-8h]
  double v29; // [esp+10h] [ebp-8h]
  double v30; // [esp+10h] [ebp-8h]
  double v31; // [esp+10h] [ebp-8h]
  double v32; // [esp+10h] [ebp-8h]
  double v33; // [esp+10h] [ebp-8h]
  double v34; // [esp+10h] [ebp-8h]
  double v35; // [esp+10h] [ebp-8h]
  double v36; // [esp+10h] [ebp-8h]
  double v37; // [esp+10h] [ebp-8h]
  double v38; // [esp+10h] [ebp-8h]
  double v39; // [esp+10h] [ebp-8h]
  double v40; // [esp+10h] [ebp-8h]
  double v41; // [esp+10h] [ebp-8h]
  double v42; // [esp+10h] [ebp-8h]
  double v43; // [esp+10h] [ebp-8h]
  double v44; // [esp+10h] [ebp-8h]
  double v45; // [esp+10h] [ebp-8h]
  double v46; // [esp+10h] [ebp-8h]
  double v47; // [esp+10h] [ebp-8h]
  double v48; // [esp+10h] [ebp-8h]
  double v49; // [esp+10h] [ebp-8h]
  double v50; // [esp+10h] [ebp-8h]
  double v51; // [esp+10h] [ebp-8h]
  double v52; // [esp+10h] [ebp-8h]
  double v53; // [esp+10h] [ebp-8h]
  double v54; // [esp+10h] [ebp-8h]
  double v55; // [esp+10h] [ebp-8h]
  double AttackDuringBlockMult; // [esp+10h] [ebp-8h]
  double v57; // [esp+10h] [ebp-8h]
  double v58; // [esp+10h] [ebp-8h]
  double v59; // [esp+10h] [ebp-8h]

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESCombatStyle `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 )
    return 1;
  if ( TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  v6 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].super.InitializeComponent)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].super.InitializeComponent)(this) != v6 )
    return 1;
  v7 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].super.ClearComponentReferences)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].super.ClearComponentReferences)(this) != v7 )
    return 1;
  v8 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].super.CopyFromBase)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].super.CopyFromBase)(this) != v8 )
    return 1;
  v18 = ((double (__thiscall *)(TESForm *))this->vtbl[1].super.CompareTo)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].super.CompareTo)(v4) != v18 )
    return 1;
  v19 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Destroy)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Destroy)(v4) != v19 )
    return 1;
  v20 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_05)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_05)(v4) != v20 )
    return 1;
  v21 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_06)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_06)(v4) != v21 )
    return 1;
  v22 = ((double (__thiscall *)(TESForm *))this->vtbl[1].LoadForm)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].LoadForm)(v4) != v22 )
    return 1;
  v23 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_08)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_08)(v4) != v23 )
    return 1;
  v24 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_09)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_09)(v4) != v24 )
    return 1;
  v25 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_0A)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0A)(v4) != v25 )
    return 1;
  v9 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0B)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_0B)(this) != v9 )
    return 1;
  v10 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0C)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_0C)(this) != v10 )
    return 1;
  v26 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_0D)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0D)(v4) != v26 )
    return 1;
  v27 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_0E)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0E)(v4) != v27 )
    return 1;
  v28 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_0F)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0F)(v4) != v28 )
    return 1;
  v11 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].MarkAsModified)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].MarkAsModified)(this) != v11 )
    return 1;
  v29 = ((double (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].ClearModified)(v4) != v29 )
    return 1;
  v30 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_12)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_12)(v4) != v30 )
    return 1;
  v12 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].GetSaveSize)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].GetSaveSize)(this) != v12 )
    return 1;
  v13 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].SaveGame)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].SaveGame)(this) != v13 )
    return 1;
  v14 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].LoadGame)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].LoadGame)(this) != v14 )
    return 1;
  v15 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_16)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_16)(this) != v15 )
    return 1;
  v16 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_17)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_17)(this) != v16 )
    return 1;
  v31 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_18)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_18)(v4) != v31 )
    return 1;
  v32 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_19)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_19)(v4) != v32 )
    return 1;
  v33 = ((double (__thiscall *)(TESForm *))this->vtbl[1].SeekRecordTypeFast)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].SeekRecordTypeFast)(v4) != v33 )
    return 1;
  v34 = ((double (__thiscall *)(TESForm *))this->vtbl[1].DoPostFixup)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].DoPostFixup)(v4) != v34 )
    return 1;
  v35 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_1C)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_1C)(v4) != v35 )
    return 1;
  v36 = ((double (__thiscall *)(TESForm *))this->vtbl[1].GetDescription)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].GetDescription)(v4) != v36 )
    return 1;
  v37 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_1E)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_1E)(v4) != v37 )
    return 1;
  v38 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_1F)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_1F)(v4) != v38 )
    return 1;
  v39 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_20)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_20)(v4) != v39 )
    return 1;
  v40 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_22)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_22)(v4) != v40 )
    return 1;
  v17 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_21)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_21)(this) != v17 )
    return 1;
  if ( *((_BYTE *)this + 0x68) != LOBYTE(v4[4].member.flags) )
    return 1;
  if ( *((TESFormVtbl **)this + 0x24) != v4[6].vtbl )
    return 1;
  if ( !((unsigned __int8 (__thiscall *)(TESForm *, int))this->vtbl[1].SetFromActiveFile)(this, 1) )
    return 0;
  v41 = sub_4A9CB0(this);
  if ( sub_4A9CB0(v4) != v41 )
    return 1;
  v42 = sub_4A9CF0(this);
  if ( sub_4A9CF0(v4) != v42 )
    return 1;
  v43 = sub_4A9D30(this);
  if ( sub_4A9D30(v4) != v43 )
    return 1;
  v44 = sub_4A9D70(this);
  if ( sub_4A9D70(v4) != v44 )
    return 1;
  v45 = sub_4A9DB0(this);
  if ( sub_4A9DB0(v4) != v45 )
    return 1;
  v46 = sub_4A9DF0(this);
  if ( sub_4A9DF0(v4) != v46 )
    return 1;
  v47 = sub_4A9E30(this);
  if ( sub_4A9E30(v4) != v47 )
    return 1;
  v48 = sub_4A9E70(this);
  if ( sub_4A9E70(v4) != v48 )
    return 1;
  v49 = sub_4A9EB0(this);
  if ( sub_4A9EB0(v4) != v49 )
    return 1;
  v50 = sub_4A9EF0(this);
  if ( sub_4A9EF0(v4) != v50 )
    return 1;
  v51 = sub_4A9F30(this);
  if ( sub_4A9F30(v4) != v51 )
    return 1;
  v52 = sub_4A9F70(this);
  if ( sub_4A9F70(v4) != v52 )
    return 1;
  v53 = sub_4A9FB0(this);
  if ( sub_4A9FB0(v4) == v53
    && (v54 = sub_4A9FF0(this), sub_4A9FF0(v4) == v54)
    && (v55 = sub_4AA0B0(this), sub_4AA0B0(v4) == v55)
    && (AttackDuringBlockMult = CombatStyle_GetAttackDuringBlockMult(this),
        CombatStyle_GetAttackDuringBlockMult(v4) == AttackDuringBlockMult)
    && (v57 = sub_4AA130(this), sub_4AA130(v4) == v57)
    && (v58 = sub_4AA170(this), sub_4AA170(v4) == v58)
    && (v59 = sub_4AA1B0(this), sub_4AA1B0(v4) == v59) )
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
