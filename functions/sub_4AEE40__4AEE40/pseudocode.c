bool __thiscall sub_4AEE40(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  char v6; // bl
  char v7; // bl
  char v8; // bl
  __int16 v9; // bx
  int v10; // ebx
  char v11; // bl
  char v12; // bl
  bool v13; // bl
  double v14; // [esp+8h] [ebp-8h]
  double v15; // [esp+8h] [ebp-8h]
  double v16; // [esp+8h] [ebp-8h]
  double v17; // [esp+8h] [ebp-8h]

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESGrass `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  v6 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].ClearModified)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this) != v6 )
    return 1;
  v7 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].GetSaveSize)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].GetSaveSize)(this) != v7 )
    return 1;
  v8 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].LoadGame)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].LoadGame)(this) != v8 )
    return 1;
  v9 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_19)(v4);
  if ( ((unsigned __int16 (__thiscall *)(TESForm *))this->vtbl[1].Unk_19)(this) != v9 )
    return 1;
  v10 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].DoPostFixup)(v4);
  if ( ((int (__thiscall *)(TESForm *))this->vtbl[1].DoPostFixup)(this) != v10 )
    return 1;
  v14 = ((double (__thiscall *)(TESForm *))this->vtbl[1].GetDescription)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].GetDescription)(v4) != v14 )
    return 1;
  v15 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_1F)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_1F)(v4) != v15 )
    return 1;
  v16 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_21)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_21)(v4) != v16 )
    return 1;
  v17 = ((double (__thiscall *)(TESForm *))this->vtbl[1].Unk_23)(this);
  if ( ((double (__thiscall *)(TESForm *))v4->vtbl[1].Unk_23)(v4) != v17 )
    return 1;
  v11 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].SetQuestItem)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].SetQuestItem)(this) != v11 )
    return 1;
  v12 = ((int (__thiscall *)(TESForm *))v4->vtbl[1].Unk_27)(v4);
  if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].Unk_27)(this) != v12 )
    return 1;
  v13 = v4->vtbl[1].Unk_29(v4);
  return this->vtbl[1].Unk_29(this) != v13;
}
