void __thiscall TogglePOV(PlayerCharacter *this, UInt8 a1)
{
  double v2; // st5
  double v3; // st7

  this->isThirdPerson = a1 == 0;
  if ( !a1 && this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0) )
  {
    v3 = flt_B36B80;
    *((float *)&qword_B3BB20 + 1) = flt_B36B80;
  }
  if ( !VanityCamState )
  {
    if ( this->firstPersonNiNode )
    {
      byte_B14E4D = 1;
      sub_66B710(this, v3, v2, 0);
      ToggleBody(this, this->isThirdPerson == 0);
    }
  }
}
