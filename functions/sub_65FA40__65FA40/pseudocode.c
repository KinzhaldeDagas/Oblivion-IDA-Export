char __thiscall sub_65FA40(float *this, int a2, float a3)
{
  char result; // al

  if ( a3 < 0.0 )
    a3 = 0.0;
  result = a2;
  if ( (unsigned int)(a2 - 0xC) <= 0x14 )
  {
    result = ActorValue_GetGroupOffsetFromAV(2, a2);
    *(this + result + 0x4C) = a3;
  }
  return result;
}
