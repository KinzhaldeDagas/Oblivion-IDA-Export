// 3DTheft release decode 2026-05-18: low-process combat fallback creates CombatLow package and calls Actor_AddPackage_(actor, package, 0, 1), returning AL success. No separate forced EvaluatePackage observed at caller boundary.
char __thiscall LowProcess_CreateCombatPackage(
        void *this,
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
  TESPackage *v11; // eax
  TESPackage *v12; // esi
  _DWORD *v13; // eax
  TESPackage *v14; // edi
  _DWORD *v15; // eax
  unsigned __int8 *v16; // edi
  unsigned __int8 *p_targetType; // ecx
  LowProcess *process; // ebx
  TESPackage *CurrentPackage; // eax
  int v21; // [esp-10h] [ebp-34h]
  BSExtraData *v22; // [esp-Ch] [ebp-30h]
  char v23; // [esp-8h] [ebp-2Ch]
  char v24; // [esp-4h] [ebp-28h]

  v11 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x64604c*/
  if ( v11 ) /*0x646062*/
    v12 = TESPackage::TESPackage(v11); /*0x64606b*/
  else
    v12 = 0; /*0x64606f*/
  TESPackage_SetType_(v12, 0xD);                // LowProcess_CreateCombatPackage creates TESPackage type 0x0D, sets package flags 0x06, target data to target actor, then Actor_AddPackage. /*0x64607d*/
  v12->members.packageFlags |= 6u; /*0x646082*/
  v13 = (_DWORD *)FormHeapAlloc(0xCu); /*0x646088*/
  if ( v13 ) /*0x64609e*/
    v14 = (TESPackage *)TESPackage_LocationData_constr(v13); /*0x6460a7*/
  else
    v14 = 0; /*0x6460ab*/
  TESPackage_LocationData_SetType(v14, 0); /*0x6460b9*/
  TESPackage_LocationData_SetReference(v14, a3); /*0x6460c5*/
  TESPackage_SetLocation(v12, (char *)v14); /*0x6460cd*/
  if ( v14 ) /*0x6460d4*/
  {
    TESPackage_LocationData_destr(v14); /*0x6460d8*/
    FormHeapFree((unsigned int)v14); /*0x6460de*/
  }
  v15 = (_DWORD *)FormHeapAlloc(0xCu); /*0x6460e8*/
  if ( v15 ) /*0x6460fe*/
    v16 = (unsigned __int8 *)TESPackage_TargetData_constr(v15); /*0x646107*/
  else
    v16 = 0; /*0x64610b*/
  TESPackage_SetTarget(v12, v16); /*0x646118*/
  if ( v16 ) /*0x64611f*/
  {
    Shared_NoOpVirtual_60D0A0(v16); /*0x646123*/
    FormHeapFree((unsigned int)v16); /*0x646129*/
  }
  p_targetType = &v12->members.target->targetType; /*0x646131*/
  v12->members.procedureArrayIndex = 0x12;      // StartCombat-created package sets procedureArrayIndex=0x12 (PROCEDURE_OBSERVE_COMBAT) after TESPackage type 0x0D (CombatLow). /*0x646136*/
  TESPackage_TargetData_SetType(p_targetType, 0); /*0x64613d*/
  TeSPackage_TargetData_SetTargetREFR(&v12->members.target->targetType, a3); /*0x646146*/
  TESAIForm_SetServiceFlags(&v12->members.target->targetType, 0x5A); /*0x646150*/
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x14C))(this, a7); /*0x646166*/
  if ( Actor::GetCurrentPackage(a2) ) /*0x64616e*/
  {
    process = a2->members.super.process; /*0x646177*/
    v24 = process->GetUnk01C(process); /*0x64618a*/
    v23 = process->Unk_2F(process); /*0x646197*/
    v22 = (BSExtraData *)process->GetUnk02C(process); /*0x6461a2*/
    v21 = process->GetCurrentPackProcedure(process); /*0x6461ad*/
    CurrentPackage = Actor::GetCurrentPackage(a2); /*0x6461b0*/
    sub_4268B0(&a2->members.super.super.baseExtraList, CurrentPackage, v21, v22, v23, v24); /*0x6461b9*/
  }
  Actor_AddPackage_(a2, v12, 0, 1);             // 3DTheft: combat package caller also does not branch on Actor_AddPackage_ return; it optionally pokes process state after attachment. /*0x6461c5*/
  if ( a5 ) /*0x6461cf*/
    ((void (__thiscall *)(LowProcess *, Actor *, int))a2->members.super.process->Unk_61)( /*0x6461df*/
      a2->members.super.process,
      a2,
      1);
  return 1; /*0x6461e3*/
}
