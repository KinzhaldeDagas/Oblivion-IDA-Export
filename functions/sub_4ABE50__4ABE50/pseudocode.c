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

  v3 = (TESForm *)OblivionDynamicCast( /*0x4abe70*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESCombatStyle `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4abe75*/
  if ( !v3 ) /*0x4abe7c*/
    return 1; /*0x4abe7c*/
  if ( TESForm_CompareAllComponentsTo(this, v3) ) /*0x4abe8c*/
    return 1; /*0x4abe8c*/
  v6 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].super.InitializeComponent)(v4); /*0x4abea3*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].super.InitializeComponent)(this) != v6 ) /*0x4abeb1*/
    return 1; /*0x4abeb1*/
  v7 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].super.ClearComponentReferences)(v4); /*0x4abec1*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].super.ClearComponentReferences)(this) != v7 ) /*0x4abecf*/
    return 1; /*0x4abecf*/
  v8 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].super.CopyFromBase)(v4); /*0x4abedf*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].super.CopyFromBase)(this) != v8 ) /*0x4abeed*/
    return 1; /*0x4abeed*/
  v18 = ((double (__thiscall *)(TESForm *))this->vtbl[1].super.CompareTo)(this); /*0x4abefb*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].super.CompareTo)(v4) != v18 ) /*0x4abf14*/
    return 1; /*0x4abf14*/
  v19 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Destroy)(this); /*0x4abf26*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Destroy)(v4) != v19 ) /*0x4abf3f*/
    return 1; /*0x4abf3f*/
  v20 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_05)(this); /*0x4abf51*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_05)(v4) != v20 ) /*0x4abf6a*/
    return 1; /*0x4abf6a*/
  v21 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_06)(this); /*0x4abf7c*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_06)(v4) != v21 ) /*0x4abf95*/
    return 1; /*0x4abf95*/
  v22 = ((double (__thiscall *)(TESForm *))this->vtbl[1].LoadForm)(this); /*0x4abfa7*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].LoadForm)(v4) != v22 ) /*0x4abfc0*/
    return 1; /*0x4abfc0*/
  v23 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_08)(this); /*0x4abfd2*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_08)(v4) != v23 ) /*0x4abfeb*/
    return 1; /*0x4abfeb*/
  v24 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_09)(this); /*0x4abffd*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_09)(v4) != v24 ) /*0x4ac016*/
    return 1; /*0x4ac016*/
  v25 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_0A)(this); /*0x4ac028*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0A)(v4) != v25 ) /*0x4ac041*/
    return 1; /*0x4ac041*/
  v9 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0B)(v4); /*0x4ac055*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_0B)(this) != v9 ) /*0x4ac063*/
    return 1; /*0x4ac063*/
  v10 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0C)(v4); /*0x4ac077*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_0C)(this) != v10 ) /*0x4ac085*/
    return 1; /*0x4ac085*/
  v26 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_0D)(this); /*0x4ac097*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0D)(v4) != v26 ) /*0x4ac0b0*/
    return 1; /*0x4ac0b0*/
  v27 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_0E)(this); /*0x4ac0c2*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0E)(v4) != v27 ) /*0x4ac0db*/
    return 1; /*0x4ac0db*/
  v28 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_0F)(this); /*0x4ac0ed*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_0F)(v4) != v28 ) /*0x4ac106*/
    return 1; /*0x4ac106*/
  v11 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].MarkAsModified)(v4); /*0x4ac11a*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].MarkAsModified)(this) != v11 ) /*0x4ac128*/
    return 1; /*0x4ac128*/
  v29 = ((double (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this); /*0x4ac13a*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].ClearModified)(v4) != v29 ) /*0x4ac153*/
    return 1; /*0x4ac153*/
  v30 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_12)(this); /*0x4ac165*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_12)(v4) != v30 ) /*0x4ac17e*/
    return 1; /*0x4ac17e*/
  v12 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].GetSaveSize)(v4); /*0x4ac192*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].GetSaveSize)(this) != v12 ) /*0x4ac1a0*/
    return 1; /*0x4ac1a0*/
  v13 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].SaveGame)(v4); /*0x4ac1b4*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].SaveGame)(this) != v13 ) /*0x4ac1c2*/
    return 1; /*0x4ac1c2*/
  v14 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].LoadGame)(v4); /*0x4ac1d6*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].LoadGame)(this) != v14 ) /*0x4ac1e4*/
    return 1; /*0x4ac1e4*/
  v15 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_16)(v4); /*0x4ac1f8*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_16)(this) != v15 ) /*0x4ac206*/
    return 1; /*0x4ac206*/
  v16 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_17)(v4); /*0x4ac21a*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_17)(this) != v16 ) /*0x4ac228*/
    return 1; /*0x4ac228*/
  v31 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_18)(this); /*0x4ac23a*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_18)(v4) != v31 ) /*0x4ac253*/
    return 1; /*0x4ac253*/
  v32 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_19)(this); /*0x4ac265*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_19)(v4) != v32 ) /*0x4ac27e*/
    return 1; /*0x4ac27e*/
  v33 = ((double (__thiscall *)(TESForm *))this->vtbl[1].SeekRecordTypeFast)(this); /*0x4ac290*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].SeekRecordTypeFast)(v4) != v33 ) /*0x4ac2a9*/
    return 1; /*0x4ac2a9*/
  v34 = ((double (__thiscall *)(TESForm *))this->vtbl[1].DoPostFixup)(this); /*0x4ac2bb*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].DoPostFixup)(v4) != v34 ) /*0x4ac2d4*/
    return 1; /*0x4ac2d4*/
  v35 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_1C)(this); /*0x4ac2e6*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_1C)(v4) != v35 ) /*0x4ac2ff*/
    return 1; /*0x4ac2ff*/
  v36 = ((double (__thiscall *)(TESForm *))this->vtbl[1].GetDescription)(this); /*0x4ac311*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].GetDescription)(v4) != v36 ) /*0x4ac32a*/
    return 1; /*0x4ac32a*/
  v37 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_1E)(this); /*0x4ac33c*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_1E)(v4) != v37 ) /*0x4ac355*/
    return 1; /*0x4ac355*/
  v38 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_1F)(this); /*0x4ac367*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_1F)(v4) != v38 ) /*0x4ac380*/
    return 1; /*0x4ac380*/
  v39 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_20)(this); /*0x4ac392*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_20)(v4) != v39 ) /*0x4ac3ab*/
    return 1; /*0x4ac3ab*/
  v40 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_22)(this); /*0x4ac3bd*/
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_22)(v4) != v40 ) /*0x4ac3d6*/
    return 1; /*0x4ac3d6*/
  v17 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_21)(v4); /*0x4ac3ea*/
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_21)(this) != v17 ) /*0x4ac3f8*/
    return 1; /*0x4ac3f8*/
  if ( *((_BYTE *)this + 0x68) != LOBYTE(v4[4].member.flags) ) /*0x4ac404*/
    return 1; /*0x4ac404*/
  if ( *((TESFormVtbl **)this + 0x24) != v4[6].vtbl ) /*0x4ac416*/
    return 1; /*0x4ac416*/
  if ( !((unsigned __int8 (__thiscall *)(TESForm *, int))this->vtbl[1].SetFromActiveFile)(this, 1) ) /*0x4ac428*/
    return 0; /*0x4ac428*/
  v41 = sub_4A9CB0(this); /*0x4ac439*/
  if ( sub_4A9CB0(v4) != v41 ) /*0x4ac44d*/
    return 1; /*0x4ac44d*/
  v42 = sub_4A9CF0(this); /*0x4ac45a*/
  if ( sub_4A9CF0(v4) != v42 ) /*0x4ac46e*/
    return 1; /*0x4ac46e*/
  v43 = sub_4A9D30(this); /*0x4ac47b*/
  if ( sub_4A9D30(v4) != v43 ) /*0x4ac48f*/
    return 1; /*0x4ac48f*/
  v44 = sub_4A9D70(this); /*0x4ac49c*/
  if ( sub_4A9D70(v4) != v44 ) /*0x4ac4b0*/
    return 1; /*0x4ac4b0*/
  v45 = sub_4A9DB0(this); /*0x4ac4bd*/
  if ( sub_4A9DB0(v4) != v45 ) /*0x4ac4d1*/
    return 1; /*0x4ac4d1*/
  v46 = sub_4A9DF0(this); /*0x4ac4de*/
  if ( sub_4A9DF0(v4) != v46 ) /*0x4ac4f2*/
    return 1; /*0x4ac4f2*/
  v47 = sub_4A9E30(this); /*0x4ac4ff*/
  if ( sub_4A9E30(v4) != v47 ) /*0x4ac513*/
    return 1; /*0x4ac513*/
  v48 = sub_4A9E70(this); /*0x4ac520*/
  if ( sub_4A9E70(v4) != v48 ) /*0x4ac534*/
    return 1; /*0x4ac534*/
  v49 = sub_4A9EB0(this); /*0x4ac541*/
  if ( sub_4A9EB0(v4) != v49 ) /*0x4ac555*/
    return 1; /*0x4ac555*/
  v50 = sub_4A9EF0(this); /*0x4ac562*/
  if ( sub_4A9EF0(v4) != v50 ) /*0x4ac576*/
    return 1; /*0x4ac576*/
  v51 = sub_4A9F30(this); /*0x4ac583*/
  if ( sub_4A9F30(v4) != v51 ) /*0x4ac597*/
    return 1; /*0x4ac597*/
  v52 = sub_4A9F70(this); /*0x4ac5a4*/
  if ( sub_4A9F70(v4) != v52 ) /*0x4ac5b8*/
    return 1; /*0x4ac5b8*/
  v53 = sub_4A9FB0(this); /*0x4ac5c5*/
  if ( sub_4A9FB0(v4) == v53 /*0x4ac69f*/
    && (v54 = sub_4A9FF0(this), sub_4A9FF0(v4) == v54)
    && (v55 = sub_4AA0B0(this), sub_4AA0B0(v4) == v55)
    && (AttackDuringBlockMult = CombatStyle_GetAttackDuringBlockMult(this),
        CombatStyle_GetAttackDuringBlockMult(v4) == AttackDuringBlockMult)
    && (v57 = sub_4AA130(this), sub_4AA130(v4) == v57)
    && (v58 = sub_4AA170(this), sub_4AA170(v4) == v58)
    && (v59 = sub_4AA1B0(this), sub_4AA1B0(v4) == v59) )
  {
    return 0; /*0x4ac6a7*/
  }
  else
  {
    return 1; /*0x4abe7e*/
  }
}
