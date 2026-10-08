// Oblivion social eligibility predicate used only by the two random-conversation scans. Requires a process; in interiors requires |Z(this)-Z(other)| <= 90; rejects process current-package flag 0x1000, dead actors, process mode 9, sub_5E6FA0 state, sleep states other than None/Sitting, and package types accepted by sub_567770; final process metric at vslot +0x15C must be <= 0.
bool __thiscall Actor::CanStartSocialConversationWith(Actor *this, Actor *other)
{
  bool v3; // bl
  TESObjectCELL *DwordAtOffset40; // eax
  LowProcess *process; // eax
  TESPackage *editorPackage; // eax
  char *CurrentPackage; // eax
  double v9; // [esp+8h] [ebp-8h]
  float othera; // [esp+14h] [ebp+4h]
  float otherb; // [esp+14h] [ebp+4h]

  v3 = 0; /*0x5ed737*/
  if ( !this->members.super.process ) /*0x5ed739*/
    return 0; /*0x5ed739*/
  if ( Shared_GetDwordAtOffset40(this) ) /*0x5ed749*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5ed754*/
    if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x5ed75b*/
    {
      v9 = this->vtbl->super.super.GetPos(this)[2]; /*0x5ed777*/
      othera = v9 - other->vtbl->super.super.GetPos(other)[2]; /*0x5ed78c*/
      otherb = fabs(othera); /*0x5ed796*/
      if ( otherb > (double)flt_A430CC ) /*0x5ed7a9*/
        return 0; /*0x5ed7a9*/
    }
  }
  process = this->members.super.process; /*0x5ed7ab*/
  if ( process ) /*0x5ed7b0*/
  {
    editorPackage = process->editorPackage; /*0x5ed7b2*/
    if ( editorPackage ) /*0x5ed7b7*/
    {
      if ( (editorPackage->members.packageFlags & 0x1000) != 0 ) /*0x5ed7c1*/
        return 0; /*0x5ed740*/
    }
  }
  if ( !this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) /*0x5ed817*/
    && (!this->members.super.process
     || ((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process) != 9)
    && !sub_5E6FA0(this)
    && (this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_Sitting
     || this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_None) )
  {
    if ( !Actor::GetCurrentPackage(this) /*0x5ed831*/
      || (CurrentPackage = (char *)Actor::GetCurrentPackage(this), !TESPackage::IsTemporaryOverrideType(CurrentPackage)) )
    {
      if ( ((double (__thiscall *)(LowProcess *))this->members.super.process->Unk_56)(this->members.super.process) <= *(float *)&SrcStr ) /*0x5ed852*/
        return 1; /*0x5ed854*/
    }
  }
  return v3; /*0x5ed73f*/
}
