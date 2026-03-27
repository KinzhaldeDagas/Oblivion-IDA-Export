double __thiscall sub_53FC90(Sky *this)
{
  UInt32 Flags0FC; // eax
  TESClimate *firstClimate; // eax
  double v4; // st7

  Flags0FC = this->Flags0FC;
  if ( (Flags0FC & 0x2000) != 0 )
  {
    if ( (Flags0FC & 0x800) != 0 )
    {
      firstClimate = this->firstClimate;
      if ( firstClimate )
      {
        flt_B35244 = (double)*((unsigned __int8 *)firstClimate + 0x53) / dbl_A3F3A0;
        this->Flags0FC &= ~0x800u;
      }
    }
    v4 = dbl_A56E08;
    if ( v4 >= flt_B36668 + flt_B35244 )
      v4 = sub_499200(this) + flt_B36668;
    flt_B36678 = v4;
    this->Flags0FC &= ~0x2000u;
  }
  return flt_B36678;
}
