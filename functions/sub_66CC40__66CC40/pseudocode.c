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
  TESPackage *CurrentPackage; // eax
  TESPackage *v12; // eax
  TESPackage *v13; // edi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  unsigned __int8 *v16; // ebp
  unsigned __int8 *p_targetType; // ecx
  LowProcess *process; // eax
  LowProcess *v19; // ebp
  BSExtraData *v20; // eax
  char v21; // [esp-8h] [ebp-2Ch]
  char v22; // [esp-4h] [ebp-28h]

  Unk_6F = a1->vtbl->super.super.Unk_6F; /*0x66cc69*/
  ++a1->miscStats[0x18]; /*0x66cc6f*/
  v10 = 0; /*0x66cc76*/
  a1->isTravelPackage = 1; /*0x66cc79*/
  ((void (__userpurge *)(_DWORD, double@<st0>, double@<st1>, double@<st2>))Unk_6F)(0, a3, a4, a2); /*0x66cc80*/
  a1->DisableFading = 1; /*0x66cc82*/
  if ( unk_B36B78 > (double)*(float *)&unk_B3BB24.vtbl ) /*0x66cc9e*/
    *(float *)&unk_B3BB24.vtbl = unk_B36B78; /*0x66cca0*/
  if ( !a1->isThirdPerson ) /*0x66ccaa*/
  {
    a1->unk58A = 1; /*0x66ccb6*/
    TogglePOV(a1, 0); /*0x66ccbd*/
  }
  if ( ((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetCurrentAction)(a1->super.super.super.process) == 6 ) /*0x66ccd2*/
    Actor_UpdateBlockingState((Actor *)a1, 0); /*0x66ccd7*/
  a1->super.super.super.process->SetCurrentPackage(a1->super.super.super.process, 0); /*0x66cce8*/
  a1->super.super.super.process->Unk_126(a1->super.super.super.process); /*0x66ccf5*/
  if ( Actor::GetCurrentPackage((Actor *)a1) ) /*0x66ccf9*/
  {
    CurrentPackage = Actor::GetCurrentPackage((Actor *)a1); /*0x66cd04*/
    if ( TESPackage::IsTemporaryOverrideType(CurrentPackage) ) /*0x66cd0b*/
      a1->vtbl->super.CleanupCurrentPackage((Actor *)a1); /*0x66cd1e*/
  }
  v12 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x66cd22*/
  if ( v12 ) /*0x66cd34*/
    v13 = TESPackage::TESPackage(v12); /*0x66cd3d*/
  else
    v13 = 0; /*0x66cd41*/
  TESPackage_SetType_(v13, 0x1B); /*0x66cd4e*/
  v13->members.packageFlags |= 6u; /*0x66cd53*/
  v14 = (_DWORD *)FormHeapAlloc(0xCu); /*0x66cd59*/
  if ( v14 ) /*0x66cd6f*/
    v10 = (TESPackage *)TESPackage_LocationData_constr(v14); /*0x66cd78*/
  TESPackage_LocationData_SetType(v10, 0); /*0x66cd82*/
  TESPackage_LocationData_SetReference(v10, (int)a1); /*0x66cd8a*/
  TESPackage_SetLocation(v13, (char *)v10); /*0x66cd92*/
  if ( v10 ) /*0x66cd99*/
  {
    TESPackage_LocationData_destr(v10); /*0x66cd9d*/
    FormHeapFree((unsigned int)v10); /*0x66cda3*/
  }
  v15 = (_DWORD *)FormHeapAlloc(0xCu); /*0x66cdad*/
  if ( v15 ) /*0x66cdc3*/
    v16 = (unsigned __int8 *)TESPackage_TargetData_constr(v15); /*0x66cdcc*/
  else
    v16 = 0; /*0x66cdd0*/
  TESPackage_SetTarget(v13, v16); /*0x66cdd9*/
  if ( v16 ) /*0x66cde0*/
  {
    Shared_NoOpVirtual_60D0A0(v16); /*0x66cde4*/
    FormHeapFree((unsigned int)v16); /*0x66cdea*/
  }
  p_targetType = &v13->members.target->targetType; /*0x66cdf2*/
  v13->members.procedureArrayIndex = 0x1F; /*0x66cdf7*/
  TESPackage_TargetData_SetType(p_targetType, 0); /*0x66cdfe*/
  TeSPackage_TargetData_SetTargetREFR(&v13->members.target->targetType, (int)a5); /*0x66ce0b*/
  TESAIForm_SetServiceFlags(&v13->members.target->targetType, 0); /*0x66ce15*/
  a1->super.super.super.process->Unk_08(a1->super.super.super.process); /*0x66ce22*/
  process = a1->super.super.super.process; /*0x66ce24*/
  if ( process->editorPackage ) /*0x66ce27*/
  {
    v19 = a1->super.super.super.process; /*0x66ce2d*/
    v22 = process->GetUnk01C(v19); /*0x66ce41*/
    v21 = v19->Unk_2F(v19); /*0x66ce4f*/
    v20 = (BSExtraData *)v19->GetUnk02C(v19); /*0x66ce56*/
    sub_4268B0(&a1->super.super.super.super.baseExtraList, v19->editorPackage, v19->editorPackProcedure, v20, v21, v22); /*0x66ce64*/
  }
  ((void (__thiscall *)(LowProcess *, int, int, int))a1->super.super.super.process->Unk_F9)( /*0x66ce83*/
    a1->super.super.super.process,
    a6,
    a8,
    a7);
  Actor_AddPackage_((Actor *)a1, v13, 0, 1); /*0x66ce8c*/
  sub_5F8000(a5); /*0x66ce93*/
}
