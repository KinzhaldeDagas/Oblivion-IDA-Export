int __userpurge sub_631EC0@<eax>(int a1@<ecx>, double a2@<st0>, Actor *a3, char a4)
{
  int result; // eax
  unsigned __int8 *v6; // ebp
  char v7; // cl
  int v8; // esi
  bool v9; // zf
  int v10; // esi
  TESPackage *v11; // eax
  TESPackage *v12; // esi
  _DWORD *v13; // eax
  TargetData *target; // ecx

  result = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x184))(a1, a2); /*0x631eef*/
  v6 = 0; /*0x631ef1*/
  if ( !result || (*(_DWORD *)(result + 0x1C) & 0x200) != 0 && (*(_BYTE *)(result + 0x1C) & 1) != 0 ) /*0x631f06*/
  {
LABEL_10:
    if ( !a3->vtbl->GetMountedHorse(a3) ) /*0x631f67*/
    {
      if ( a3->vtbl->super.super.GetSleepState((TESObjectREFR *)a3) ) /*0x631f77*/
        a3->vtbl->AddPackageWakeUp(a3); /*0x631f87*/
    }
    v11 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x631f8b*/
    if ( v11 ) /*0x631f9d*/
      v12 = TESPackage::TESPackage(v11); /*0x631fa6*/
    else
      v12 = 0; /*0x631faa*/
    TESPackage_SetType_(v12, 1); /*0x631fb7*/
    v12->members.packageFlags |= 6u; /*0x631fbc*/
    v13 = (_DWORD *)FormHeapAlloc(0xCu); /*0x631fc2*/
    if ( v13 ) /*0x631fd8*/
      v6 = (unsigned __int8 *)TESPackage_TargetData_constr(v13); /*0x631fe1*/
    TESPackage_SetTarget(v12, v6); /*0x631fea*/
    if ( v6 ) /*0x631ff1*/
    {
      Shared_NoOpVirtual_60D0A0(v6); /*0x631ff5*/
      FormHeapFree((unsigned int)v6); /*0x631ffb*/
    }
    TESPackage_TargetData_SetType(&v12->members.target->targetType, 0); /*0x632008*/
    TeSPackage_TargetData_SetTargetREFR(&v12->members.target->targetType, (int)reference); /*0x632017*/
    target = v12->members.target; /*0x632022*/
    if ( a4 ) /*0x632025*/
      TESAIForm_SetServiceFlags(target, 0xBB8); /*0x63202c*/
    else
      TESAIForm_SetServiceFlags(target, 0x50); /*0x632030*/
    v12->members.procedureArrayIndex = 7; /*0x63203e*/
    Actor_AddPackage_(a3, v12, 1, 1); /*0x632045*/
    result = (*(int (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)a1 + 0x484))(a1, reference); /*0x63205a*/
    if ( a4 ) /*0x63205e*/
      return (*(int (__thiscall **)(int, float))(*(_DWORD *)a1 + 0x160))(a1, unk_B36B38); /*0x632074*/
    return result; /*0x632074*/
  }
  v7 = *(_BYTE *)(result + 0x20); /*0x631f08*/
  if ( v7 == 5 ) /*0x631f0e*/
  {
    v8 = *(_DWORD *)(result + 0x18); /*0x631f12*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x180))(a1); /*0x631f1d*/
    v9 = *(_DWORD *)(*(_DWORD *)(4 * v8 + 0xB152B0) + 4 * result) == 1; /*0x631f26*/
    goto LABEL_9; /*0x631f2a*/
  }
  if ( v7 == 6 || !v7 ) /*0x631f33*/
  {
    v10 = *(_DWORD *)(result + 0x18); /*0x631f3b*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x180))(a1); /*0x631f46*/
    v9 = *(_DWORD *)(*(_DWORD *)(4 * v10 + 0xB152B0) + 4 * result) == 0x2C; /*0x631f4f*/
LABEL_9:
    if ( !v9 ) /*0x631f53*/
      return result; /*0x631f53*/
    goto LABEL_10; /*0x631f53*/
  }
  return result; /*0x632076*/
}
