float *__thiscall sub_6E09A0(int this, float *a2)
{
  float *result; // eax
  float v3; // ecx
  float v4; // edx
  float v5; // eax
  float v6; // [esp+8h] [ebp-4h]

  result = *(float **)(this + 0x30);
  if ( result )
  {
    if ( (*(_BYTE *)(this + 0x40) & 1) != 0 )
    {
      v3 = result[0x38];
      v4 = result[0x39];
      v5 = result[0x3A];
    }
    else
    {
      v3 = result[0x3B];
      v4 = result[0x3C];
      v5 = result[0x3D];
    }
    v6 = v5;
    *a2 = v3;
    a2[1] = v4;
    a2[2] = v6;
    return a2;
  }
  return result;
}
