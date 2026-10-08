// RadiantAI: TrespassPackage constructor, type 0x11/procedure index 0x14. Opt-in constructor logging only.
TESPackage *__thiscall sub_67D3A0(TESPackage *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  TESPackage *v7; // edi
  _DWORD *v8; // eax
  unsigned __int8 *v9; // edi
  TargetData *target; // ecx

  TESPackage::TESPackage(this); /*0x67d3cb*/
  *((float *)this + 0xF) = 0.0; /*0x67d3d6*/
  *((_DWORD *)this + 0x12) = a4; /*0x67d3df*/
  this->__vftable = &TrespassPackage::`vftable'; /*0x67d3ea*/
  *((_DWORD *)this + 0x10) = 0; /*0x67d3f0*/
  *((_DWORD *)this + 0x11) = a3; /*0x67d3f3*/
  TESPackage_SetType_(this, 0x11); /*0x67d3f6*/
  this->members.packageFlags |= 6u; /*0x67d3fb*/
  v6 = (_DWORD *)FormHeapAlloc(0xCu); /*0x67d401*/
  if ( v6 ) /*0x67d414*/
    v7 = (TESPackage *)TESPackage_LocationData_constr(v6); /*0x67d41d*/
  else
    v7 = 0; /*0x67d421*/
  TESPackage_LocationData_SetType(v7, 0); /*0x67d42a*/
  TESPackage_LocationData_SetReference(v7, a2); /*0x67d436*/
  TESPackage_SetLocation(this, (char *)v7); /*0x67d43e*/
  if ( v7 ) /*0x67d445*/
  {
    TESPackage_LocationData_destr(v7); /*0x67d449*/
    FormHeapFree((unsigned int)v7); /*0x67d44f*/
  }
  v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x67d459*/
  if ( v8 ) /*0x67d46c*/
    v9 = (unsigned __int8 *)TESPackage_TargetData_constr(v8); /*0x67d475*/
  else
    v9 = 0; /*0x67d479*/
  TESPackage_SetTarget(this, v9); /*0x67d482*/
  if ( v9 ) /*0x67d489*/
  {
    Shared_NoOpVirtual_60D0A0(v9); /*0x67d48d*/
    FormHeapFree((unsigned int)v9); /*0x67d493*/
  }
  target = this->members.target; /*0x67d49b*/
  this->members.procedureArrayIndex = 0x14; /*0x67d49f*/
  TESPackage_TargetData_SetType(&target->targetType, 0); /*0x67d4a6*/
  TeSPackage_TargetData_SetTargetREFR(&this->members.target->targetType, a2); /*0x67d4af*/
  TESAIForm_SetServiceFlags(&this->members.target->targetType, 0x80); /*0x67d4bc*/
  *((_DWORD *)this + 0x13) = 0xFFFFFFFF; /*0x67d4c5*/
  *((_DWORD *)this + 0x14) = a5; /*0x67d4cc*/
  *((_DWORD *)this + 0x15) = 0; /*0x67d4cf*/
  return this; /*0x67d4d4*/
}
