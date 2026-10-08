// Exterior fog day/night helper: computes adjusted sunrise blend start from climate sunrise minus transition padding.
double __thiscall sub_53FC10(Sky *this)
{
  UInt32 Flags0FC; // eax
  TESClimate *firstClimate; // eax
  double v4; // st7
  bool v5; // c0
  bool v6; // c3
  double v7; // st7

  Flags0FC = this->Flags0FC; /*0x53fc14*/
  if ( (Flags0FC & 0x1000) != 0 )               // Fog time-boundary decode: adjusted sunrise helper refreshes only when Flags0FC bit 0x1000 marks blend-start dirty. /*0x53fc1f*/
  {
    if ( (Flags0FC & 0x100) != 0 ) /*0x53fc26*/
    {
      firstClimate = this->firstClimate; /*0x53fc28*/
      if ( firstClimate ) /*0x53fc2d*/
      {
        *(float *)&MEMORY[0xB33E90][0x13A8] = (double)*((unsigned __int8 *)firstClimate + 0x50) / dbl_A3F3A0; /*0x53fc41*/
        this->Flags0FC &= ~0x100u; /*0x53fc47*/
      }
    }
    v4 = *(float *)&MEMORY[0xB33E90][0x13A8] - unk_B36668;// Fog time-boundary decode: candidate adjusted sunrise = cached sunrise - transition padding unk_B36668. /*0x53fc57*/
    v5 = v4 > 0.0; /*0x53fc5f*/
    v6 = 0.0 == v4; /*0x53fc5f*/
    v7 = 0.0; /*0x53fc63*/
    if ( v5 || v6 ) /*0x53fc65*/
      v7 = sub_499140(this) - unk_B36668;       // Fog time-boundary decode: adjusted sunrise uses sub_499140() - unk_B36668 when nonnegative; otherwise clamps to 0. /*0x53fc71*/
    unk_B36674 = v7;                            // Fog time-boundary decode: stores adjusted sunrise blend-start in unk_B36674 for 0x5418F0/0x541DD0 interpolation. /*0x53fc77*/
    this->Flags0FC &= ~0x1000u;                 // Fog time-boundary decode: clears adjusted-sunrise dirty bit after updating unk_B36674. /*0x53fc7d*/
  }
  return unk_B36674; /*0x53fc8d*/
}
