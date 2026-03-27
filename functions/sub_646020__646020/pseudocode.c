char __thiscall sub_646020(
        int this,
        Actor *a2,
        int a3,
        int a4,
        char a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  TESPackage *v12; // eax
  TESPackage *v13; // esi
  _DWORD *v14; // eax
  TESPackage *v15; // edi
  _DWORD *v16; // eax
  unsigned __int8 *v17; // edi
  unsigned __int8 *p_targetType; // ecx
  LowProcess *process; // ebx
  TESPackage *v20; // eax
  int v22; // [esp-10h] [ebp-34h]
  BSExtraData *v23; // [esp-Ch] [ebp-30h]
  char v24; // [esp-8h] [ebp-2Ch]
  char v25; // [esp-4h] [ebp-28h]

  v12 = (TESPackage *)FormHeapAlloc(0x3Cu);
  if ( v12 )
    v13 = TESPackage::TESPackage(v12);
  else
    v13 = 0;
  TESPackage_SetType_(v13, 0xD);
  v13->members.packageFlags |= 6u;
  v14 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v14 )
    v15 = (TESPackage *)TESPackage_LocationData_constr(v14);
  else
    v15 = 0;
  TESPackage_LocationData_SetType(v15, 0);
  TESPackage_LocationData_SetReference(v15, a3);
  TESPackage_SetLocation(v13, (char *)v15);
  if ( v15 )
  {
    TESPackage_LocationData_destr(v15);
    FormHeapFree((unsigned int)v15);
  }
  v16 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v16 )
    v17 = (unsigned __int8 *)TESPackage_TargetData_constr(v16);
  else
    v17 = 0;
  TESPackage_SetTarget(v13, v17);
  if ( v17 )
  {
    TESTexture::ClearComponentReferences(v17);
    FormHeapFree((unsigned int)v17);
  }
  p_targetType = &v13->members.target->targetType;
  v13->members.procedureArrayIndex = 0x12;
  TESPackage_TargetData_SetType(p_targetType, 0);
  TeSPackage_TargetData_SetTargetREFR(&v13->members.target->targetType, a3);
  TESAIForm_SetServiceFlags(&v13->members.target->targetType, 0x5A);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 0x14C))(this, a7);
  if ( sub_5E0380(a2) )
  {
    process = a2->members.super.process;
    v25 = process->GetUnk01C(process);
    v24 = process->Unk_2F(process);
    v23 = (BSExtraData *)process->GetUnk02C(process);
    v22 = process->GetCurrentPackProcedure(process);
    v20 = sub_5E0380(a2);
    sub_4268B0(&a2->members.super.super.baseExtraList, v20, v22, v23, v24, v25);
  }
  Actor_AddPackage_(a2, v13, 0, 1);
  if ( a5 )
    ((void (__thiscall *)(LowProcess *, Actor *, int))a2->members.super.process->Unk_61)(
      a2->members.super.process,
      a2,
      1);
  return 1;
}
