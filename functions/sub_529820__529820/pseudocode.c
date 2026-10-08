// TESQuest running/active setter used by StartQuest and StopQuest. Runtime bit 0x01 shares QUST DATA's editor label 'Start Game Enabled'; toggling it marks modified flag 0x04.
void __thiscall TESQuest::SetRunning(TESQuest *this, bool running)
{
  if ( running ) /*0x529825*/
    this->questFlags |= 1u; /*0x529827*/
  else
    this->questFlags &= ~1u; /*0x52982d*/
  this->vtbl->MarkAsModified((TESForm *)this, 4); /*0x52983e*/
}
