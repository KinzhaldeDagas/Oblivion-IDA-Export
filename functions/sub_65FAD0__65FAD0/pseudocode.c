double __thiscall sub_65FAD0(Actor *this, int a2)
{
  int v3; // eax
  float v5; // [esp+8h] [ebp-4h]
  float v6; // [esp+10h] [ebp+4h]

  v5 = 1.0;
  if ( a2 )
  {
    if ( Actor_GetBaseClass(this) )
    {
      v3 = *(_DWORD *)(a2 + 0x2C);
      v6 = 1.0;
      if ( (unsigned int)(v3 - 0xC) <= 0x14 )
        return *((float *)this + ActorValue_GetGroupOffsetFromAV(2, v3) + 0x1E9);
      return v6;
    }
  }
  return v5;
}
