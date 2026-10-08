// Verified: removes a reference from the cell object list under the cell lock. For persistent cells, clears the reference's ExtraDataList cell pointer and removes it from the owning WorldSpace persistent-reference index (+0x64); for normal cells, clears its parent cell and updates changed state. No write to the separate SubSpace index (+0x60) is present.
void __thiscall TESObjectCELL_RemoveReference(TESObjectCELL *this, TESObjectREFR *reference)
{
  TESWorldSpace *worldSpace; // ecx

  if ( reference ) /*0x4cecda*/
  {
    sub_496EA0((char *)&unk_B35C80, this); /*0x4cece6*/
    BSSimpleList_Remove((int *)&this->members.objectList, (int)reference); /*0x4cecef*/
    sub_496F50(&unk_B35C80, this); /*0x4cecfa*/
    if ( (this->members.super.flags & 0x400) != 0 ) /*0x4ced08*/
    {
      sub_4247B0(&reference->member.baseExtraList, 0); /*0x4ced0d*/
      if ( (this->members.flags0 & 1) == 0 ) /*0x4ced16*/
      {
        worldSpace = this->members.worldSpace; /*0x4ced18*/
        if ( worldSpace ) /*0x4ced1d*/
          TESWorldSpace_RemoveIndexedReference(worldSpace, reference); /*0x4ced20*/
      }
    }
    else
    {
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))reference->vtbl->ChangeCell)(reference, 0); /*0x4ced34*/
      if ( (reference->member.super.flags & 0x4000) == 0 /*0x4ced51*/
        && !TESObjectREFR_IsPersistent(reference)
        && !g_TESDataHandler->unknownC0[0xC14] )
      {
        this->vtbl->SetFromActiveFile((TESForm *)this, 1); /*0x4ced65*/
      }
    }
  }
}
