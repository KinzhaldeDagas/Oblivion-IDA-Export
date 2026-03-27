double __thiscall sub_65FCA0(float *this, int a2)
{
  char v2; // di
  float v5; // [esp+10h] [ebp+4h]

  v2 = a2;
  if ( (unsigned int)(a2 - 0xC) > 0x14 )
    return 0.0;
  v5 = *(this + ActorValue_GetGroupOffsetFromAV(2, a2) + 0x4C);
  return (float)(v5 / *(this + ActorValue_GetGroupOffsetFromAV(2, v2) + 0x1E9));
}
