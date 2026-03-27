// positive sp value has been detected, the output may be wrong!
int __usercall def_4C24EE@<eax>(int a1@<ebp>, float *a2@<esi>)
{
  int v2; // eax
  double v3; // rt0
  int result; // eax
  int v5; // [esp-54h] [ebp-54h]
  int v6; // [esp-50h] [ebp-50h]
  float v7; // [esp-4Ch] [ebp-4Ch]
  float v8; // [esp-48h] [ebp-48h]
  float v9; // [esp-24h] [ebp-24h]
  float v10; // [esp-20h] [ebp-20h]

  v2 = *(_DWORD *)(v5 + 0x24);
  v3 = dbl_A46040;
  v9 = ((double)*(int *)(v2 + 0x98) - *(float *)(v6 + 0x18) * v3 + v7) * dbl_A46038;
  v10 = ((double)*(int *)(v2 + 0x9C) - v3 * *(float *)(v6 + 0x1C) + v8) * dbl_A46038;
  a2[0x2A] = v9;
  result = LODWORD(v10);
  a2[0x2B] = v10;
  a2[0x2C] = 0.0;
  a2[0x2D] = 0.0;
  if ( a1 + 1 < 4 )
    JUMPOUT(0x4C23F6);
  return result;
}
