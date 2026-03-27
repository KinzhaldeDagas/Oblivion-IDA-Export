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

  v4 = a3;
  v5 = 0;
  if ( a3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0x198))(a3, 0) )
    {
      v6 = (TESPackage *)FormHeapAlloc(0x3Cu);
      if ( v6 )
        v7 = TESPackage::TESPackage(v6);
      else
        v7 = 0;
      TESPackage_SetType_(v7, 0x14);
      v7->members.packageFlags |= 0x400006u;
      v8 = (_DWORD *)FormHeapAlloc(0xCu);
      if ( v8 )
        v5 = (TESPackage *)TESPackage_LocationData_constr(v8);
      TESPackage_LocationData_SetType(v5, 0);
      TESPackage_LocationData_SetReference(v5, a3);
      TESPackage_SetLocation(v7, (char *)v5);
      if ( v5 )
      {
        TESPackage_LocationData_destr(v5);
        FormHeapFree((unsigned int)v5);
      }
      v9 = (_DWORD *)FormHeapAlloc(0xCu);
      if ( v9 )
        v10 = (unsigned __int8 *)TESPackage_TargetData_constr(v9);
      else
        v10 = 0;
      TESPackage_SetTarget(v7, v10);
      if ( v10 )
      {
        TESTexture::ClearComponentReferences(v10);
        FormHeapFree((unsigned int)v10);
      }
      p_targetType = &v7->members.target->targetType;
      v7->members.procedureArrayIndex = 0x11;
      TESPackage_TargetData_SetType(p_targetType, 0);
      TeSPackage_TargetData_SetTargetREFR(&v7->members.target->targetType, a3);
      TESAIForm_SetServiceFlags(&v7->members.target->targetType, 0x64);
      sub_566830((unsigned int *)v7, 1);
      a1->members.super.process->Unk_08(a1->members.super.process);
      process = a1->members.super.process;
      if ( process->editorPackage )
      {
        v13 = a1->members.super.process;
        v17 = ((int (__usercall *)@<eax>(double@<st0>))process->GetUnk01C)(a2);
        v16 = v13->Unk_2F(v13);
        v14 = (BSExtraData *)v13->GetUnk02C(v13);
        sub_4268B0(&a1->members.super.super.baseExtraList, v13->editorPackage, v13->editorPackProcedure, v14, v16, v17);
        v4 = a3;
      }
      Actor_AddPackage_(a1, v7, 1, 1);
      v15 = *(_DWORD *)(v4 + 0x58);
      if ( v15 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 0x204))(v15, 1);
      *(float *)(v4 + 0x84) = flt_B36CC0;
    }
  }
  return a2;
}
