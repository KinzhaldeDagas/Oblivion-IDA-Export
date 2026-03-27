void __thiscall RestoreCamera(PlayerCharacter *this)
{
  this->DisableFading = 1;
  if ( flt_B36B78 > (double)*((float *)&qword_B3BB20 + 1) )
    *((float *)&qword_B3BB20 + 1) = flt_B36B78;
  if ( !this->isThirdPerson )
  {
    this->unk58A = 1;
    TogglePOV(this, 0);
  }
}
