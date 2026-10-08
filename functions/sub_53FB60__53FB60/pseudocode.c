void __thiscall sub_53FB60(Sky *this, char a2)
{
  UInt32 Flags0FC; // eax

  if ( a2 && this->secondWeather ) /*0x53fb67*/
  {
    Flags0FC = this->Flags0FC; /*0x53fb6e*/
    if ( (Flags0FC & 8) == 0 ) /*0x53fb76*/
    {
      this->unk0F4 = this->weatherPercent; /*0x53fb81*/
      this->Flags0FC = Flags0FC | 8; /*0x53fb87*/
    }
  }
  else
  {
    this->Flags0FC &= ~8u; /*0x53fb96*/
    this->unk0F4 = 0.0; /*0x53fb9d*/
  }
}
