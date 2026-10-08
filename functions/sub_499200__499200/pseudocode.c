// Exterior fog day/night helper: climate night boundary byte (+0x53) cached as normalized time for weather fog interpolation.
double __thiscall sub_499200(Sky *this)
{
  TESClimate *firstClimate; // eax

  if ( (this->Flags0FC & 0x800) != 0 ) /*0x49920b*/
  {
    firstClimate = this->firstClimate; /*0x49920d*/
    if ( firstClimate ) /*0x499212*/
    {
      *(float *)&MEMORY[0xB33E90][0x13B4] = (double)*((unsigned __int8 *)firstClimate + 0x53) / dbl_A3F3A0;// Fog time-boundary decode: climate byte +0x53 normalized -> cached night boundary B33E90+0x13B4. /*0x499224*/
      this->Flags0FC &= ~0x800u; /*0x49922a*/
    }
  }
  return *(float *)&MEMORY[0xB33E90][0x13B4]; /*0x49923b*/
}
