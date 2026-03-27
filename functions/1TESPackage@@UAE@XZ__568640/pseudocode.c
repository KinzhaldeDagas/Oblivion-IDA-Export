void __thiscall TESPackage::~TESPackage(TESPackage *this)
{
  LocationData *location; // edi
  TargetData *target; // edi

  this->__vftable = (TESPackageVtbl *)&TESPackage::`vftable';
  if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
    sub_675090((char *)this);
  if ( TESDataHandler_IsFormIDCreated_(this->members.super.refID) )
    this->members.packageFlags &= ~0x800u;
  location = this->members.location;
  if ( location )
  {
    TESPackage_LocationData_destr(&this->members.location->locationType);
    FormHeapFree((unsigned int)location);
  }
  target = this->members.target;
  if ( target )
  {
    TESTexture::ClearComponentReferences(this->members.target);
    FormHeapFree((unsigned int)target);
  }
  sub_56A750((void **)&this->members.conditionList.data);
  j_TESForm_ClearComponentReferences((TESForm *)this);
  sub_56A7A0(&this->members.conditionList);
  TESTexture::ClearComponentReferences(&this->members.time);
  TESForm_destr((TESForm *)this);
}
