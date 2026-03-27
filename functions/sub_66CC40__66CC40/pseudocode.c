void __userpurge sub_66CC40(
        PlayerCharacter *a1@<ecx>,
        double a2@<st2>,
        double a3@<st0>,
        double a4@<st1>,
        Actor *a5,
        int a6,
        int a7,
        int a8)
{
  void (__thiscall *Unk_6F)(MobileObject *, UInt32); // edx
  TESPackage *v10; // ebp
  double v11; // st6
  char *v12; // eax
  TESPackage *v13; // eax
  TESPackage *v14; // edi
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  unsigned __int8 *v17; // ebp
  unsigned __int8 *p_targetType; // ecx
  LowProcess *process; // eax
  LowProcess *v20; // ebp
  BSExtraData *v21; // eax
  char v22; // [esp-8h] [ebp-2Ch]
  char v23; // [esp-4h] [ebp-28h]

  Unk_6F = a1->vtbl->super.super.Unk_6F;
  ++a1->miscStats[0x18];
  v10 = 0;
  a1->isTravelPackage = 1;
  ((void (__userpurge *)(_DWORD, double@<st0>, double@<st1>))Unk_6F)(0, a3, a4);
  a1->DisableFading = 1;
  v11 = flt_B36B78;
  if ( v11 > *((float *)&qword_B3BB20 + 1) )
    *((float *)&qword_B3BB20 + 1) = flt_B36B78;
  if ( !a1->isThirdPerson )
  {
    a1->unk58A = 1;
    TogglePOV(a1, 0);
  }
  if ( ((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetCurrentAction)(a1->super.super.super.process) == 6 )
    sub_5F4AE0((Actor *)a1, a2, v11, v11, 0);
  a1->super.super.super.process->SetCurrentPackage(a1->super.super.super.process, 0);
  a1->super.super.super.process->Unk_126(a1->super.super.super.process);
  if ( sub_5E0380((Actor *)a1) )
  {
    v12 = (char *)sub_5E0380((Actor *)a1);
    if ( sub_567770(v12) )
      a1->vtbl->super.Unk_C3((Actor *)a1);
  }
  v13 = (TESPackage *)FormHeapAlloc(0x3Cu);
  if ( v13 )
    v14 = TESPackage::TESPackage(v13);
  else
    v14 = 0;
  TESPackage_SetType_(v14, 0x1B);
  v14->members.packageFlags |= 6u;
  v15 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v15 )
    v10 = (TESPackage *)TESPackage_LocationData_constr(v15);
  TESPackage_LocationData_SetType(v10, 0);
  TESPackage_LocationData_SetReference(v10, (int)a1);
  TESPackage_SetLocation(v14, (char *)v10);
  if ( v10 )
  {
    TESPackage_LocationData_destr(v10);
    FormHeapFree((unsigned int)v10);
  }
  v16 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v16 )
    v17 = (unsigned __int8 *)TESPackage_TargetData_constr(v16);
  else
    v17 = 0;
  TESPackage_SetTarget(v14, v17);
  if ( v17 )
  {
    TESTexture::ClearComponentReferences(v17);
    FormHeapFree((unsigned int)v17);
  }
  p_targetType = &v14->members.target->targetType;
  v14->members.procedureArrayIndex = 0x1F;
  TESPackage_TargetData_SetType(p_targetType, 0);
  TeSPackage_TargetData_SetTargetREFR(&v14->members.target->targetType, (int)a5);
  TESAIForm_SetServiceFlags(&v14->members.target->targetType, 0);
  a1->super.super.super.process->Unk_08(a1->super.super.super.process);
  process = a1->super.super.super.process;
  if ( process->editorPackage )
  {
    v20 = a1->super.super.super.process;
    v23 = process->GetUnk01C(v20);
    v22 = v20->Unk_2F(v20);
    v21 = (BSExtraData *)v20->GetUnk02C(v20);
    sub_4268B0(&a1->super.super.super.super.baseExtraList, v20->editorPackage, v20->editorPackProcedure, v21, v22, v23);
  }
  ((void (__thiscall *)(LowProcess *, int, int, int))a1->super.super.super.process->Unk_F9)(
    a1->super.super.super.process,
    a6,
    a8,
    a7);
  Actor_AddPackage_((Actor *)a1, v14, 0, 1);
  sub_5F8000(a5);
}
