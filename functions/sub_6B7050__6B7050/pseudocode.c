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

  sky = MEMORY[0xB333A0]->sky; /*0x6b7055*/
  if ( sky ) /*0x6b705e*/
  {
    v2 = *(_DWORD *)(this + 0x34); /*0x6b7064*/
    if ( v2 ) /*0x6b7069*/
    {
      firstWeather = sky->firstWeather; /*0x6b706b*/
      if ( firstWeather ) /*0x6b7070*/
      {
        if ( ((unsigned __int8)v2 & *((_BYTE *)firstWeather + 0x53)) == 0 ) /*0x6b7075*/
          return 0; /*0x6b7075*/
      }
    }
    v10 = *(float *)(this + 0x30) - *(float *)(this + 0x2C); /*0x6b708b*/
    v11 = fabs(v10); /*0x6b7095*/
    if ( v11 >= (double)flt_A771F0 ) /*0x6b70a8*/
    {
      v4 = *(float *)(this + 0x2C); /*0x6b70aa*/
      v5 = *(float *)(this + 0x30); /*0x6b70ad*/
      v6 = v5 < v4; /*0x6b70b0*/
      v7 = v5 == v4; /*0x6b70b0*/
      unk0D0 = sky->unk0D0; /*0x6b70b4*/
      if ( v6 || v7 || *(float *)(this + 0x2C) <= unk0D0 && *(float *)(this + 0x30) >= unk0D0 ) /*0x6b70d3*/
        return *(float *)(this + 0x30) >= (double)*(float *)(this + 0x2C) /*0x6b70fa*/
            || *(float *)(this + 0x2C) <= unk0D0
            || *(float *)(this + 0x30) >= unk0D0;
      return 0; /*0x6b710b*/
    }
  }
  return 1; /*0x6b70fe*/
}
