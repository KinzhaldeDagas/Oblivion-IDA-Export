bool __thiscall sub_6B7050(int this)
{
  Sky *sky; // eax
  int v2; // edx
  TESWeather *firstWeather; // esi
  double v4; // st7
  double v5; // st6
  bool v6; // c0
  bool v7; // c3
  double unk0D0; // st7
  float v10; // [esp+4h] [ebp-8h]
  float v11; // [esp+4h] [ebp-8h]

  sky = TES->sky;
  if ( sky )
  {
    v2 = *(_DWORD *)(this + 0x34);
    if ( v2 )
    {
      firstWeather = sky->firstWeather;
      if ( firstWeather )
      {
        if ( ((unsigned __int8)v2 & *((_BYTE *)firstWeather + 0x53)) == 0 )
          return 0;
      }
    }
    v10 = *(float *)(this + 0x30) - *(float *)(this + 0x2C);
    v11 = fabs(v10);
    if ( v11 >= (double)flt_A771F0 )
    {
      v4 = *(float *)(this + 0x2C);
      v5 = *(float *)(this + 0x30);
      v6 = v5 < v4;
      v7 = v5 == v4;
      unk0D0 = sky->unk0D0;
      if ( v6 || v7 || *(float *)(this + 0x2C) <= unk0D0 && *(float *)(this + 0x30) >= unk0D0 )
        return *(float *)(this + 0x30) >= (double)*(float *)(this + 0x2C)
            || *(float *)(this + 0x2C) <= unk0D0
            || *(float *)(this + 0x30) >= unk0D0;
      return 0;
    }
  }
  return 1;
}
