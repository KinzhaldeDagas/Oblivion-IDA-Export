void __userpurge sub_660760(PlayerCharacter *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  void (__thiscall *Unk_6F)(MobileObject *, UInt32); // edx
  TESPackage *v7; // edi
  TESPackage *v8; // eax
  TESPackage *v9; // esi
  _DWORD *v10; // eax

  Unk_6F = a1->vtbl->super.super.Unk_6F;
  v7 = 0;
  a1->isTravelPackage = 1;
  Unk_6F((MobileObject *)a1, 0);
  if ( ((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetCurrentAction)(a1->super.super.super.process) == 6 )
    sub_5F4AE0((Actor *)a1, a2, a3, a4, 0);
  v8 = (TESPackage *)FormHeapAlloc(0x3Cu);
  if ( v8 )
    v9 = TESPackage::TESPackage(v8);
  else
    v9 = 0;
  TESPackage_SetType_(v9, 6);
  v9->members.packageFlags = v9->members.packageFlags & 0xFFFFFFF9 | 4;
  v10 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v10 )
    v7 = (TESPackage *)TESPackage_LocationData_constr(v10);
  TESPackage_LocationData_SetType(v7, 0);
  TESPackage_LocationData_SetReference(v7, a5);
  TESPackage_SetLocation(v9, (char *)v7);
  if ( v7 )
  {
    TESPackage_LocationData_destr(v7);
    FormHeapFree((unsigned int)v7);
  }
  v9->members.procedureArrayIndex = 0;
  Actor_AddPackage_((Actor *)a1, v9, 0, 1);
}
