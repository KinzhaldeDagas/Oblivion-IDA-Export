double __userpurge sub_5F9EB0@<st0>(Actor *a1@<ecx>, double a2@<st0>, int a3)
{
  int v4; // ebp
  TESPackage *v5; // ebx
  TESPackage *v6; // eax
  TESPackage *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  unsigned __int8 *v10; // ebx
  unsigned __int8 *p_targetType; // ecx
  LowProcess *process; // eax
  LowProcess *v13; // ebx
  BSExtraData *v14; // eax
  int v15; // ecx
  char v16; // [esp-8h] [ebp-2Ch]
  char v17; // [esp-4h] [ebp-28h]

  v4 = a3; /*0x5f9ed7*/
  v5 = 0; /*0x5f9edb*/
  if ( a3 ) /*0x5f9edf*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0x198))(a3, 0) ) /*0x5f9ef1*/
    {
      v6 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x5f9efd*/
      if ( v6 ) /*0x5f9f0f*/
        v7 = TESPackage::TESPackage(v6); /*0x5f9f18*/
      else
        v7 = 0; /*0x5f9f1c*/
      TESPackage_SetType_(v7, 0x14); /*0x5f9f2a*/
      v7->members.packageFlags |= 0x400006u; /*0x5f9f2f*/
      v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f9f38*/
      if ( v8 ) /*0x5f9f4e*/
        v5 = (TESPackage *)TESPackage_LocationData_constr(v8); /*0x5f9f57*/
      TESPackage_LocationData_SetType(v5, 0); /*0x5f9f65*/
      TESPackage_LocationData_SetReference(v5, a3); /*0x5f9f6d*/
      TESPackage_SetLocation(v7, (char *)v5); /*0x5f9f75*/
      if ( v5 ) /*0x5f9f7c*/
      {
        TESPackage_LocationData_destr(v5); /*0x5f9f80*/
        FormHeapFree((unsigned int)v5); /*0x5f9f86*/
      }
      v9 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f9f90*/
      if ( v9 ) /*0x5f9fa6*/
        v10 = (unsigned __int8 *)TESPackage_TargetData_constr(v9); /*0x5f9faf*/
      else
        v10 = 0; /*0x5f9fb3*/
      TESPackage_SetTarget(v7, v10); /*0x5f9fc0*/
      if ( v10 ) /*0x5f9fc7*/
      {
        Shared_NoOpVirtual_60D0A0(v10); /*0x5f9fcb*/
        FormHeapFree((unsigned int)v10); /*0x5f9fd1*/
      }
      p_targetType = &v7->members.target->targetType; /*0x5f9fd9*/
      v7->members.procedureArrayIndex = 0x11; /*0x5f9fde*/
      TESPackage_TargetData_SetType(p_targetType, 0); /*0x5f9fe5*/
      TeSPackage_TargetData_SetTargetREFR(&v7->members.target->targetType, a3); /*0x5f9fee*/
      TESAIForm_SetServiceFlags(&v7->members.target->targetType, 0x64); /*0x5f9ff8*/
      sub_566830((unsigned int *)v7, 1); /*0x5fa001*/
      a1->members.super.process->Unk_08(a1->members.super.process); /*0x5fa00e*/
      process = a1->members.super.process; /*0x5fa010*/
      if ( process->editorPackage ) /*0x5fa013*/
      {
        v13 = a1->members.super.process; /*0x5fa023*/
        v17 = ((int (__usercall *)@<eax>(double@<st0>))process->GetUnk01C)(a2); /*0x5fa02b*/
        v16 = v13->Unk_2F(v13); /*0x5fa038*/
        v14 = (BSExtraData *)v13->GetUnk02C(v13); /*0x5fa042*/
        sub_4268B0(&a1->members.super.super.baseExtraList, v13->editorPackage, v13->editorPackProcedure, v14, v16, v17); /*0x5fa052*/
        v4 = a3; /*0x5fa057*/
      }
      Actor_AddPackage_(a1, v7, 1, 1); /*0x5fa062*/
      v15 = *(_DWORD *)(v4 + 0x58); /*0x5fa067*/
      if ( v15 ) /*0x5fa06c*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 0x204))(v15, 1); /*0x5fa078*/
      *(float *)(v4 + 0x84) = flt_B36CC0[0]; /*0x5fa080*/
    }
  }
  return a2; /*0x5fa086*/
}
