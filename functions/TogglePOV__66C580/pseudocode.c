void __thiscall TogglePOV(PlayerCharacter *this, UInt8 a1)
{
  double v2; // st7

  this->isThirdPerson = a1 == 0; /*0x66c598*/
  if ( !a1 && this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0) ) /*0x66c5aa*/
  {
    v2 = unk_B36B80; /*0x66c5b0*/
    *(float *)&unk_B3BB24.vtbl = unk_B36B80; /*0x66c5b6*/
  }
  if ( !MEMORY[0xB3BB04] ) /*0x66c5bc*/
  {
    if ( this->firstPersonNiNode ) /*0x66c5c5*/
    {
      byte_B14E4D = 1; /*0x66c5d2*/
      sub_66B710(this, v2, 0); /*0x66c5d9*/
      ToggleBody(this, this->isThirdPerson == 0); /*0x66c5eb*/
    }
  }
}
