UInt32 __thiscall sub_569DD0(Time *this, UInt32 a2)
{
  UInt32 result; // eax

  result = a2;
  if ( a2 )
  {
    this->weekDay = *(_BYTE *)(a2 + 1);
    this->month = *(_BYTE *)a2;
    this->date = *(_BYTE *)(a2 + 2);
    this->time = *(_BYTE *)(a2 + 3);
    result = *(_DWORD *)(a2 + 4);
    this->duration = result;
  }
  return result;
}
