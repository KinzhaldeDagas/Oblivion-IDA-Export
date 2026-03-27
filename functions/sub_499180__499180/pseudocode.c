double __thiscall sub_499180(Sky *this)
{
  TESClimate *firstClimate; // eax

  if ( (this->Flags0FC & 0x200) != 0 )
  {
    firstClimate = this->firstClimate;
    if ( firstClimate )
    {
      flt_B3523C = (double)*((unsigned __int8 *)firstClimate + 0x51) / dbl_A3F3A0;
      this->Flags0FC &= ~0x200u;
    }
  }
  return flt_B3523C;
}
