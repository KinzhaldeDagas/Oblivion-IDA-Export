void __thiscall TESPackage::~TESPackage(TESPackage *this)
{
  LocationData *location; // edi
  TargetData *target; // edi

  this->__vftable = &TESPackage::`vftable'; /*0x568669*/
  if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x568674*/
    sub_675090((ActorProcessManager *)&qword_B3BB2C[0x75], this); /*0x56868c*/
  if ( TESDataHandler_IsFormIDCreated_(this->members.super.refID) ) /*0x56869b*/
    this->members.packageFlags &= ~0x800u; /*0x5686a4*/
  location = this->members.location; /*0x5686ab*/
  if ( location ) /*0x5686b0*/
  {
    TESPackage_LocationData_destr(&this->members.location->locationType); /*0x5686b4*/
    FormHeapFree((unsigned int)location); /*0x5686ba*/
  }
  target = this->members.target; /*0x5686c2*/
  if ( target ) /*0x5686c7*/
  {
    Shared_NoOpVirtual_60D0A0(this->members.target); /*0x5686cb*/
    FormHeapFree((unsigned int)target); /*0x5686d1*/
  }
  sub_56A750((BSSimpleList_VoidPtr *)&this->members.conditionList); /*0x5686de*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x5686e5*/
  sub_56A7A0((BSSimpleList_VoidPtr *)&this->members.conditionList); /*0x5686f1*/
  Shared_NoOpVirtual_60D0A0(&this->members.time); /*0x5686fe*/
  TESForm_destr((TESForm *)this); /*0x56870d*/
}
