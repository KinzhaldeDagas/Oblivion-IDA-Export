UInt32 __thiscall sub_569DD0(Time *this, UInt32 a2)
{
  UInt32 result; // eax

  result = a2; /*0x569dd0*/
  if ( a2 ) /*0x569dd6*/
  {
    this->weekDay = *(_BYTE *)(a2 + 1); /*0x569ddc*/
    this->month = *(_BYTE *)a2; /*0x569de2*/
    this->date = *(_BYTE *)(a2 + 2); /*0x569de8*/
    this->time = *(_BYTE *)(a2 + 3); /*0x569def*/
    result = *(_DWORD *)(a2 + 4); /*0x569df2*/
    this->duration = result; /*0x569df5*/
  }
  return result; /*0x569df8*/
}
