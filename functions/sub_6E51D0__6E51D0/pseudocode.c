char __thiscall sub_6E51D0(int this, float a2, int a3, _DWORD *a4)
{
  double v5; // st7
  float v7; // [esp+18h] [ebp-1Ch]
  float v8; // [esp+20h] [ebp-14h]
  float v9; // [esp+24h] [ebp-10h]
  int v10[3]; // [esp+28h] [ebp-Ch] BYREF

  v5 = a2; /*0x6e51e3*/
  if ( a2 == *(float *)(this + 8) ) /*0x6e51e8*/
  {
    *a4 = *(_DWORD *)(this + 0x1C); /*0x6e51f3*/
    a4[1] = *(_DWORD *)(this + 0x20); /*0x6e51f8*/
    a4[2] = *(_DWORD *)(this + 0x24); /*0x6e51fe*/
    return 1; /*0x6e5201*/
  }
  else
  {
    if ( *(_DWORD *)(this + 0x28) != 0xFFFF ) /*0x6e5212*/
    {
      v7 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC)); /*0x6e522f*/
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, (int)v10, 3, *(char **)(this + 0x18), *(_DWORD *)(this + 0x28)); /*0x6e523a*/
      v8 = *(float *)&v10[1]; /*0x6e524f*/
      *(_DWORD *)(this + 0x1C) = v10[0]; /*0x6e5253*/
      v9 = *(float *)&v10[2]; /*0x6e525e*/
      *(float *)(this + 0x20) = v8; /*0x6e5262*/
      v5 = a2; /*0x6e5269*/
      *(float *)(this + 0x24) = v9; /*0x6e526d*/
    }
    *a4 = *(_DWORD *)(this + 0x1C); /*0x6e5277*/
    a4[1] = *(_DWORD *)(this + 0x20); /*0x6e527c*/
    a4[2] = *(_DWORD *)(this + 0x24); /*0x6e5282*/
    *(float *)(this + 8) = v5; /*0x6e5285*/
    return 1; /*0x6e5288*/
  }
}
