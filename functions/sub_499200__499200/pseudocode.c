double __thiscall sub_499200(Sky *this)
{
  TESClimate *firstClimate; // eax

  if ( (this->Flags0FC & 0x800) != 0 )
  {
    firstClimate = this->firstClimate;
    if ( firstClimate )
    {
      flt_B35244 = (double)*((unsigned __int8 *)firstClimate + 0x53) / dbl_A3F3A0;
      this->Flags0FC &= ~0x800u;
    }
  }
  return flt_B35244;
}
