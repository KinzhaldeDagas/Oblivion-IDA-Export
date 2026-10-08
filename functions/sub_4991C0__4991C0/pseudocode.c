// Exterior fog day/night helper: climate sunset boundary byte (+0x52) cached as normalized time for weather fog interpolation.
double __thiscall sub_4991C0(Sky *this)
{
  TESClimate *firstClimate; // eax

  if ( (this->Flags0FC & 0x400) != 0 ) /*0x4991cb*/
  {
    firstClimate = this->firstClimate; /*0x4991cd*/
    if ( firstClimate ) /*0x4991d2*/
    {
      *(float *)&MEMORY[0xB33E90][0x13B0] = (double)*((unsigned __int8 *)firstClimate + 0x52) / dbl_A3F3A0;// Fog time-boundary decode: climate byte +0x52 normalized -> cached sunset boundary B33E90+0x13B0. /*0x4991e4*/
      this->Flags0FC &= ~0x400u; /*0x4991ea*/
    }
  }
  return *(float *)&MEMORY[0xB33E90][0x13B0]; /*0x4991fb*/
}
