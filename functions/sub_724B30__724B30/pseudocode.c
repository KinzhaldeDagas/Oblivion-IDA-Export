int __thiscall sub_724B30(int this, float *a2, int a3)
{
  unsigned int v4; // esi
  int v5; // edx
  double v6; // st7
  float *i; // ecx
  float v9; // [esp+10h] [ebp-Ch]
  float v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+18h] [ebp-4h]
  float v12; // [esp+20h] [ebp+4h]
  float v13; // [esp+20h] [ebp+4h]
  float v14; // [esp+20h] [ebp+4h]

  v4 = *(_DWORD *)(this + 0x20);
  v5 = 0;
  v9 = *(float *)(this + 0x14) - a2[0x22];
  v10 = *(float *)(this + 0x18) - a2[0x23];
  v11 = *(float *)(this + 0x1C) - a2[0x24];
  v12 = a2[0x1C] * v10 + a2[0x19] * v9 + a2[0x1F] * v11;
  v13 = v12 * a2[0x48];
  v14 = fabs(v13);
  if ( !v4 )
    return 0xFFFFFFFF;
  v6 = v14;
  for ( i = (float *)(*(_DWORD *)(this + 0x24) + 0xC); i[0xFFFFFFFF] > v6 || *i <= v6; i += 4 )
  {
    if ( ++v5 >= v4 )
      return 0xFFFFFFFF;
  }
  return v5;
}
