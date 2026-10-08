// Exterior fog day/night helper: climate day boundary byte (+0x51) cached as normalized time for weather fog interpolation.
double __thiscall sub_499180(Sky *this)
{
  TESClimate *firstClimate; // eax

  if ( (this->Flags0FC & 0x200) != 0 ) /*0x49918b*/
  {
    firstClimate = this->firstClimate; /*0x49918d*/
    if ( firstClimate ) /*0x499192*/
    {
      *(float *)&MEMORY[0xB33E90][0x13AC] = (double)*((unsigned __int8 *)firstClimate + 0x51) / dbl_A3F3A0;// Fog time-boundary decode: climate byte +0x51 normalized -> cached day boundary B33E90+0x13AC. /*0x4991a4*/
      this->Flags0FC &= ~0x200u; /*0x4991aa*/
    }
  }
  return *(float *)&MEMORY[0xB33E90][0x13AC]; /*0x4991bb*/
}
