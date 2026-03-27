double __thiscall sub_65FA90(float *this, int a2)
{
  float v3; // [esp+4h] [ebp-4h]

  v3 = 0.0;
  if ( (unsigned int)(a2 - 0xC) <= 0x14 )
    return *(this + ActorValue_GetGroupOffsetFromAV(2, a2) + 0x4C);
  return v3;
}
