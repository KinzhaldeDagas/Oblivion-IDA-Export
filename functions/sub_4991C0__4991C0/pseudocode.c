double __thiscall sub_4991C0(Sky *this)
{
  TESClimate *firstClimate; // eax

  if ( (this->Flags0FC & 0x400) != 0 )
  {
    firstClimate = this->firstClimate;
    if ( firstClimate )
    {
      flt_B35240 = (double)*((unsigned __int8 *)firstClimate + 0x52) / dbl_A3F3A0;
      this->Flags0FC &= ~0x400u;
    }
  }
  return flt_B35240;
}
