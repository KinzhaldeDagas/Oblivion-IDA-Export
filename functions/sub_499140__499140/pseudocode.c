double __thiscall sub_499140(Sky *this)
{
  TESClimate *firstClimate; // eax

  if ( (this->Flags0FC & 0x100) != 0 )
  {
    firstClimate = this->firstClimate;
    if ( firstClimate )
    {
      flt_B35238 = (double)*((unsigned __int8 *)firstClimate + 0x50) / dbl_A3F3A0;
      this->Flags0FC &= ~0x100u;
    }
  }
  return flt_B35238;
}
