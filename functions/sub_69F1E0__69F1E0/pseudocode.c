void __thiscall sub_69F1E0(TESObjectREFR *this, int a2, int a3)
{
  int StrongestItem; // eax
  TESForm::ModReferenceList *next; // ecx
  int ProcessLevel; // eax
  int v11; // eax

  this[1].member.super.modlist.data = (Data *)MagicCaster_GetFromRefID((UInt32)this[1].member.super.modlist.data);
  this[1].member.super.modlist.next = (TESForm::ModReferenceList *)MagicItem_LookupByFormID((UInt32)this[1].member.super.modlist.next);
  StrongestItem = EffectItemList_GetStrongestItem(2, 0);
  next = this[1].member.super.modlist.next;
  this[1].member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))StrongestItem;
  this[1].member.baseForm = (TESForm *)MagicItem_GetFXEffect(next, 0);
  this->vtbl->GenerateNiNode(this);
  MobileObject_LinkModifierForm(this, a2, a3);
  ProcessLevel = Actor::GetProcessLevel((Actor *)this);
  sub_674550((int)this, ProcessLevel);
  v11 = Actor::GetProcessLevel((Actor *)this);
  sub_673A90((int)this, v11, 0, 0, 0);
  if ( !this[1].member.super.modlist.data || !this[1].member.super.modlist.next )
    sub_453910(SaveLoad_CurrentSavegame, (int)this);
}
