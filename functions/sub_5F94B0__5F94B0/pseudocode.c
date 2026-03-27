void __thiscall sub_5F94B0(Actor *this, int a2)
{
  TESPackage *v3; // eax
  TESPackage *v4; // ebx
  TESPackage *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  unsigned __int8 *v8; // eax
  unsigned __int8 *p_targetType; // ecx
  int v10; // eax

  v3 = (TESPackage *)FormHeapAlloc(0x3Cu);
  v4 = 0;
  if ( v3 )
    v5 = TESPackage::TESPackage(v3);
  else
    v5 = 0;
  TESPackage_SetType_(v5, 0x1D);
  v5->members.packageFlags &= 0xFFFFFFF9;
  v6 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v6 )
    v4 = (TESPackage *)TESPackage_LocationData_constr(v6);
  TESPackage_LocationData_SetType(v4, 0);
  TESPackage_LocationData_SetReference(v4, (int)this);
  TESPackage_SetLocation(v5, (char *)v4);
  if ( v4 )
  {
    TESPackage_LocationData_destr(v4);
    FormHeapFree((unsigned int)v4);
  }
  v5->members.packageFlags |= 0x2000u;
  v7 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v7 )
    v8 = (unsigned __int8 *)TESPackage_TargetData_constr(v7);
  else
    v8 = 0;
  TESPackage_SetTarget(v5, v8);
  p_targetType = &v5->members.target->targetType;
  v5->members.procedureArrayIndex = 0x24;
  TESPackage_TargetData_SetType(p_targetType, 0);
  TeSPackage_TargetData_SetTargetREFR(&v5->members.target->targetType, a2);
  v10 = Double_To_SInt32(fSearchPackageDistanceToTarget);
  TESAIForm_SetServiceFlags(&v5->members.target->targetType, v10);
  this->members.super.process->Unk_29(this->members.super.process);
  this->members.super.process->Unk_08(this->members.super.process);
  this->members.super.process->Unk_25(this->members.super.process);
  Actor_AddPackage_(this, v5, 1, 1);
}
