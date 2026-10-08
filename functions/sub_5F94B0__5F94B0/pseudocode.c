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

  v3 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x5f94d8*/
  v4 = 0; /*0x5f94e4*/
  if ( v3 ) /*0x5f94ec*/
    v5 = TESPackage::TESPackage(v3); /*0x5f94f5*/
  else
    v5 = 0; /*0x5f94f9*/
  TESPackage_SetType_(v5, 0x1D); /*0x5f9507*/
  v5->members.packageFlags &= 0xFFFFFFF9; /*0x5f950c*/
  v6 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f9512*/
  if ( v6 ) /*0x5f9528*/
    v4 = (TESPackage *)TESPackage_LocationData_constr(v6); /*0x5f9531*/
  TESPackage_LocationData_SetType(v4, 0); /*0x5f953f*/
  TESPackage_LocationData_SetReference(v4, (int)this); /*0x5f9547*/
  TESPackage_SetLocation(v5, (char *)v4); /*0x5f954f*/
  if ( v4 ) /*0x5f9556*/
  {
    TESPackage_LocationData_destr(v4); /*0x5f955a*/
    FormHeapFree((unsigned int)v4); /*0x5f9560*/
  }
  v5->members.packageFlags |= 0x2000u; /*0x5f9568*/
  v7 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f9571*/
  if ( v7 ) /*0x5f9587*/
    v8 = (unsigned __int8 *)TESPackage_TargetData_constr(v7); /*0x5f958b*/
  else
    v8 = 0; /*0x5f9592*/
  TESPackage_SetTarget(v5, v8); /*0x5f959f*/
  p_targetType = &v5->members.target->targetType; /*0x5f95a4*/
  v5->members.procedureArrayIndex = 0x24; /*0x5f95a9*/
  TESPackage_TargetData_SetType(p_targetType, 0); /*0x5f95b0*/
  TeSPackage_TargetData_SetTargetREFR(&v5->members.target->targetType, a2); /*0x5f95bd*/
  v10 = Double_To_SInt32(flt_B36778[0x48]); /*0x5f95c8*/
  TESAIForm_SetServiceFlags(&v5->members.target->targetType, v10); /*0x5f95d1*/
  this->members.super.process->Unk_29(this->members.super.process); /*0x5f95e1*/
  this->members.super.process->Unk_08(this->members.super.process); /*0x5f95eb*/
  this->members.super.process->Unk_25(this->members.super.process); /*0x5f95f8*/
  Actor_AddPackage_(this, v5, 1, 1); /*0x5f9601*/
}
