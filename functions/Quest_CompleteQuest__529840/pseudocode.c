// TESQuest completed-state setter used by CompleteQuest. Runtime bit 0x02 is saved through the same one-byte questFlags field.
void __thiscall TESQuest::SetCompleted(TESQuest *this, bool completed)
{
  if ( completed ) /*0x529845*/
    this->questFlags |= 2u; /*0x529847*/
  else
    this->questFlags &= ~2u; /*0x52984d*/
  this->vtbl->MarkAsModified((TESForm *)this, 4); /*0x52985e*/
}
