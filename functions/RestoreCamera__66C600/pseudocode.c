void __thiscall RestoreCamera(PlayerCharacter *this)
{
  this->DisableFading = 1; /*0x66c602*/
  if ( unk_B36B78 > (double)*(float *)&unk_B3BB24.vtbl ) /*0x66c61d*/
    *(float *)&unk_B3BB24.vtbl = unk_B36B78; /*0x66c61f*/
  if ( !this->isThirdPerson ) /*0x66c629*/
  {
    this->unk58A = 1; /*0x66c637*/
    TogglePOV(this, 0); /*0x66c63d*/
  }
}
