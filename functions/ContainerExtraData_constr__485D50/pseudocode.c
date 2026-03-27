ExtraContainerChanges_Data *__thiscall ContainerExtraData_constr(ExtraContainerChanges_Data *this, TESObjectREFR *a2)
{
  tListEntryData *v3; // eax
  TESObjectREFR *v4; // eax
  TESChildCELL *v5; // eax

  this->owner = a2;
  v3 = (tListEntryData *)FormHeapAlloc(8u);
  if ( v3 )
  {
    v3->node.data = 0;
    v3->node.next = 0;
  }
  else
  {
    v3 = 0;
  }
  this->objList = v3;
  if ( !ContainerExtraData_TempObjectREFR_ )
  {
    v4 = (TESObjectREFR *)FormHeapAlloc(0x58u);
    a2 = v4;
    if ( v4 )
      v5 = TESObjectREFR_constr((TESChildCELL *)v4);
    else
      v5 = 0;
    ContainerExtraData_TempObjectREFR_ = v5;
    TESForm_MakeTemporary((TESForm *)v5);
  }
  return ContainerExtraData_constr_::InitCachedWeights_Return(this, (int)a2);
}
