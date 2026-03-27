double __thiscall sub_53FC10(Sky *this)
{
  UInt32 Flags0FC; // eax
  TESClimate *firstClimate; // eax
  double v4; // st7
  bool v5; // c0
  bool v6; // c3
  double v7; // st7

  Flags0FC = this->Flags0FC;
  if ( (Flags0FC & 0x1000) != 0 )
  {
    if ( (Flags0FC & 0x100) != 0 )
    {
      firstClimate = this->firstClimate;
      if ( firstClimate )
      {
        flt_B35238 = (double)*((unsigned __int8 *)firstClimate + 0x50) / dbl_A3F3A0;
        this->Flags0FC &= ~0x100u;
      }
    }
    v4 = flt_B35238 - flt_B36668;
    v5 = v4 > 0.0;
    v6 = 0.0 == v4;
    v7 = 0.0;
    if ( v5 || v6 )
      v7 = sub_499140(this) - flt_B36668;
    flt_B36674 = v7;
    this->Flags0FC &= ~0x1000u;
  }
  return flt_B36674;
}
