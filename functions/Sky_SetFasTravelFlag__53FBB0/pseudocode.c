// Sky::SetFastTravelFlag(bool): true clears weatherOverride and sets Sky+0xFC bit 0x10; false clears that bit.
void __thiscall Sky_SetFastTravelFlag(Sky *this, char a2)
{
  if ( a2 ) /*0x53fbb5*/
  {
    this->weatherOverride = 0;                  // Fast-travel true path clears weatherOverride only; it does not clear Sky+0x10 firstWeather. /*0x53fbb7*/
    this->Flags0FC |= 0x10u; /*0x53fbbe*/
  }
  else
  {
    this->Flags0FC &= ~0x10u; /*0x53fbc8*/
  }
}
