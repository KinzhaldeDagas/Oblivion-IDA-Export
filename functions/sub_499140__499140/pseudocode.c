// Exterior fog day/night helper: climate sunrise boundary byte (+0x50) cached as normalized time for weather fog interpolation.
double __thiscall sub_499140(Sky *this)
{                                               // Fog time-boundary decode: sunrise helper refreshes cached boundary only when Sky Flags0FC bit 0x100 marks it dirty.
  TESClimate *firstClimate; // eax

  if ( (this->Flags0FC & 0x100) != 0 ) /*0x49914b*/
  {
    firstClimate = this->firstClimate; /*0x49914d*/
    if ( firstClimate ) /*0x499152*/
    {
      *(float *)&MEMORY[0xB33E90][0x13A8] = (double)*((unsigned __int8 *)firstClimate + 0x50) / dbl_A3F3A0;// Fog time-boundary decode: climate byte +0x50 / 24.0-style divisor -> cached sunrise time B33E90+0x13A8. /*0x499164*/
      this->Flags0FC &= ~0x100u;                // Fog time-boundary decode: clears sunrise dirty bit after cache refresh. /*0x49916a*/
    }
  }
  return *(float *)&MEMORY[0xB33E90][0x13A8];   // Fog time-boundary decode: returns cached normalized sunrise boundary used by weather fog day/night interpolation. /*0x49917b*/
}
