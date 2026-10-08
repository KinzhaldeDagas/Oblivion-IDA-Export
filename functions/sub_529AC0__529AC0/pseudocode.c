bool __thiscall TESQuest::SetStage(TESQuest *this, UInt8 stage)
{
  double v2; // st5
  double v3; // st6
  double v4; // st7
  int *p_stages; // esi
  int v7; // eax
  TESQuestFlags questFlags; // al

  p_stages = (int *)&this->stages; /*0x529ac5*/
  if ( this != (TESQuest *)0xFFFFFFC0 ) /*0x529aca*/
  {
    do /*0x529ad0*/
    {
      v7 = p_stages[1]; /*0x529ad0*/
      if ( !v7 && !*p_stages ) /*0x529ad7*/
        break; /*0x529ad7*/
      if ( *(_BYTE *)*p_stages == stage ) /*0x529adf*/
      {
        questFlags = this->questFlags; /*0x529aef*/
        if ( (questFlags & 2) == 0 || (questFlags & 8) != 0 )// SetStage reactivates a non-completed quest. A completed quest is reactivated only when questFlags has 0x08, confirmed by the Oblivion Construction Set label 'Allow repeated stages'. /*0x529af8*/
        {
          this->questFlags |= 1u; /*0x529afa*/
          this->vtbl->MarkAsModified((TESForm *)this, 4); /*0x529b07*/
        }
        if ( stage > this->currentStage ) /*0x529b0c*/
          this->currentStage = stage; /*0x529b0e*/
        sub_52B080(*p_stages, v2, v3, v4, (int)this); /*0x529b14*/
        this->vtbl->MarkAsModified((TESForm *)this, 0x10000000); /*0x529b25*/
        return 1; /*0x529b29*/
      }
      p_stages = (int *)p_stages[1]; /*0x529ae1*/
    }
    while ( v7 ); /*0x529ad0*/
  }
  return 0; /*0x529ae7*/
}
