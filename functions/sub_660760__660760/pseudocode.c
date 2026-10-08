void __thiscall sub_660760(PlayerCharacter *this, int a2)
{
  void (__thiscall *Unk_6F)(MobileObject *, UInt32); // edx
  TESPackage *v7; // edi
  TESPackage *v8; // eax
  TESPackage *v9; // esi
  _DWORD *v10; // eax

  Unk_6F = this->vtbl->super.super.Unk_6F; /*0x660789*/
  v7 = 0; /*0x66078f*/
  this->isTravelPackage = 1; /*0x660792*/
  Unk_6F((MobileObject *)this, 0); /*0x660799*/
  if ( ((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetCurrentAction)(this->super.super.super.process) == 6 ) /*0x6607ab*/
    Actor_UpdateBlockingState((Actor *)this, 0); /*0x6607b0*/
  v8 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x6607b7*/
  if ( v8 ) /*0x6607c9*/
    v9 = TESPackage::TESPackage(v8); /*0x6607d2*/
  else
    v9 = 0; /*0x6607d6*/
  TESPackage_SetType_(v9, 6); /*0x6607e4*/
  v9->members.packageFlags = v9->members.packageFlags & 0xFFFFFFF9 | 4; /*0x6607f4*/
  v10 = (_DWORD *)FormHeapAlloc(0xCu); /*0x6607f7*/
  if ( v10 ) /*0x66080d*/
    v7 = (TESPackage *)TESPackage_LocationData_constr(v10); /*0x660816*/
  TESPackage_LocationData_SetType(v7, 0); /*0x660824*/
  TESPackage_LocationData_SetReference(v7, a2); /*0x660830*/
  TESPackage_SetLocation(v9, (char *)v7); /*0x660838*/
  if ( v7 ) /*0x66083f*/
  {
    TESPackage_LocationData_destr(v7); /*0x660843*/
    FormHeapFree((unsigned int)v7); /*0x660849*/
  }
  v9->members.procedureArrayIndex = 0; /*0x660858*/
  Actor_AddPackage_((Actor *)this, v9, 0, 1); /*0x66085f*/
}
