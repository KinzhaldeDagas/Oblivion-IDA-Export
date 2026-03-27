void __thiscall sub_53FB60(Sky *this, char a2)
{
  UInt32 Flags0FC; // eax

  if ( a2 && this->secondWeather )
  {
    Flags0FC = this->Flags0FC;
    if ( (Flags0FC & 8) == 0 )
    {
      this->unk0F4 = this->weatherPercent;
      this->Flags0FC = Flags0FC | 8;
    }
  }
  else
  {
    this->Flags0FC &= ~8u;
    this->unk0F4 = 0.0;
  }
}
