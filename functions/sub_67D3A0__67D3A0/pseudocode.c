TESPackage *__thiscall sub_67D3A0(TESPackage *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  TESPackage *v7; // edi
  _DWORD *v8; // eax
  unsigned __int8 *v9; // edi
  TargetData *target; // ecx

  TESPackage::TESPackage(this);
  *((float *)this + 0xF) = 0.0;
  *((_DWORD *)this + 0x12) = a4;
  this->__vftable = (TESPackageVtbl *)&TrespassPackage::`vftable';
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = a3;
  TESPackage_SetType_(this, 0x11);
  this->members.packageFlags |= 6u;
  v6 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v6 )
    v7 = (TESPackage *)TESPackage_LocationData_constr(v6);
  else
    v7 = 0;
  TESPackage_LocationData_SetType(v7, 0);
  TESPackage_LocationData_SetReference(v7, a2);
  TESPackage_SetLocation(this, (char *)v7);
  if ( v7 )
  {
    TESPackage_LocationData_destr(v7);
    FormHeapFree((unsigned int)v7);
  }
  v8 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v8 )
    v9 = (unsigned __int8 *)TESPackage_TargetData_constr(v8);
  else
    v9 = 0;
  TESPackage_SetTarget(this, v9);
  if ( v9 )
  {
    TESTexture::ClearComponentReferences(v9);
    FormHeapFree((unsigned int)v9);
  }
  target = this->members.target;
  this->members.procedureArrayIndex = 0x14;
  TESPackage_TargetData_SetType(&target->targetType, 0);
  TeSPackage_TargetData_SetTargetREFR(&this->members.target->targetType, a2);
  TESAIForm_SetServiceFlags(&this->members.target->targetType, 0x80);
  *((_DWORD *)this + 0x13) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x14) = a5;
  *((_DWORD *)this + 0x15) = 0;
  return this;
}
