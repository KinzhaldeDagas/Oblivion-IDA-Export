void __thiscall Sky::SetFasTravelFlag(Sky *this, char a2)
{
  if ( a2 )
  {
    this->weatherOverride = 0;
    this->Flags0FC |= 0x10u;
  }
  else
  {
    this->Flags0FC &= ~0x10u;
  }
}
