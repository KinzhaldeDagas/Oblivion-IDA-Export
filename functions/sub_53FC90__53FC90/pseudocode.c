// Exterior fog day/night helper: computes adjusted sunset/night blend end from climate night plus transition padding.
double __thiscall sub_53FC90(Sky *this)
{
  UInt32 Flags0FC; // eax
  TESClimate *firstClimate; // eax
  double v4; // st7

  Flags0FC = this->Flags0FC; /*0x53fc94*/
  if ( (Flags0FC & 0x2000) != 0 )               // Fog time-boundary decode: adjusted sunset/night helper refreshes only when Flags0FC bit 0x2000 marks blend-end dirty. /*0x53fc9f*/
  {
    if ( (Flags0FC & 0x800) != 0 ) /*0x53fca6*/
    {
      firstClimate = this->firstClimate; /*0x53fca8*/
      if ( firstClimate ) /*0x53fcad*/
      {
        *(float *)&MEMORY[0xB33E90][0x13B4] = (double)*((unsigned __int8 *)firstClimate + 0x53) / dbl_A3F3A0; /*0x53fcc1*/
        this->Flags0FC &= ~0x800u; /*0x53fcc7*/
      }
    }
    v4 = dbl_A56E08;                            // Fog time-boundary decode: default adjusted sunset/night blend-end starts at day wrap value before clamp. /*0x53fce7*/
    if ( v4 >= unk_B36668 + *(float *)&MEMORY[0xB33E90][0x13B4] ) /*0x53fcec*/
      v4 = sub_499200(this) + unk_B36668;       // Fog time-boundary decode: adjusted sunset/night uses cached night boundary + transition padding unk_B36668 when within day wrap. /*0x53fcf5*/
    unk_B36678 = v4;                            // Fog time-boundary decode: stores adjusted sunset/night blend-end in unk_B36678 for 0x5418F0/0x541DD0 interpolation. /*0x53fcfb*/
    this->Flags0FC &= ~0x2000u;                 // Fog time-boundary decode: clears adjusted-sunset dirty bit after updating unk_B36678. /*0x53fd01*/
  }
  return unk_B36678; /*0x53fd11*/
}
