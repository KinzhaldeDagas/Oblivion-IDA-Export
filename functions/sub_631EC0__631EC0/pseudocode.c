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

  result = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x184))(a1, a2);
  v6 = 0;
  if ( !result || (*(_DWORD *)(result + 0x1C) & 0x200) != 0 && (*(_BYTE *)(result + 0x1C) & 1) != 0 )
  {
LABEL_10:
    if ( !a3->vtbl->GetMountedHorse(a3) )
    {
      if ( a3->vtbl->super.super.GetSleepState((TESObjectREFR *)a3) )
        a3->vtbl->AddPackageWakeUp(a3);
    }
    v11 = (TESPackage *)FormHeapAlloc(0x3Cu);
    if ( v11 )
      v12 = TESPackage::TESPackage(v11);
    else
      v12 = 0;
    TESPackage_SetType_(v12, 1);
    v12->members.packageFlags |= 6u;
    v13 = (_DWORD *)FormHeapAlloc(0xCu);
    if ( v13 )
      v6 = (unsigned __int8 *)TESPackage_TargetData_constr(v13);
    TESPackage_SetTarget(v12, v6);
    if ( v6 )
    {
      TESTexture::ClearComponentReferences(v6);
      FormHeapFree((unsigned int)v6);
    }
    TESPackage_TargetData_SetType(&v12->members.target->targetType, 0);
    TeSPackage_TargetData_SetTargetREFR(&v12->members.target->targetType, (int)TESDataHandler_g_PlayerRef);
    target = v12->members.target;
    if ( a4 )
      TESAIForm_SetServiceFlags(target, 0xBB8);
    else
      TESAIForm_SetServiceFlags(target, 0x50);
    v12->members.procedureArrayIndex = 7;
    Actor_AddPackage_(a3, v12, 1, 1);
    result = (*(int (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)a1 + 0x484))(a1, TESDataHandler_g_PlayerRef);
    if ( a4 )
      return (*(int (__thiscall **)(int, float))(*(_DWORD *)a1 + 0x160))(a1, flt_B36B38);
    return result;
  }
  v7 = *(_BYTE *)(result + 0x20);
  if ( v7 == 5 )
  {
    v8 = *(_DWORD *)(result + 0x18);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x180))(a1);
    v9 = *(_DWORD *)(*(_DWORD *)(4 * v8 + 0xB152B0) + 4 * result) == 1;
    goto LABEL_9;
  }
  if ( v7 == 6 || !v7 )
  {
    v10 = *(_DWORD *)(result + 0x18);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x180))(a1);
    v9 = *(_DWORD *)(*(_DWORD *)(4 * v10 + 0xB152B0) + 4 * result) == 0x2C;
LABEL_9:
    if ( !v9 )
      return result;
    goto LABEL_10;
  }
  return result;
}
