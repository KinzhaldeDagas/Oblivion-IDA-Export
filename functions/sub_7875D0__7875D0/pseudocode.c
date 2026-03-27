float *__thiscall sub_7875D0(int this)
{
  float *result; // eax
  float v2; // [esp+0h] [ebp-1Ch]
  float v3; // [esp+4h] [ebp-18h]
  float v4; // [esp+8h] [ebp-14h]
  float v5; // [esp+10h] [ebp-Ch]
  float v6; // [esp+14h] [ebp-8h]

  if ( *(_BYTE *)(this + 0x6D) )
  {
    result = *(float **)(this + 0x40);
    v5 = *result;
    v6 = result[1];
    v3 = result[3];
    v4 = result[4];
    v2 = (result[5] + result[2]) * dbl_A2FAA0;
    *(float *)(this + 0x70) = v3;
    *(float *)(this + 0x74) = v4;
    *(float *)(this + 0x78) = v2;
    *(float *)(this + 0x7C) = v5;
    *(float *)(this + 0x80) = v4;
    *(float *)(this + 0x84) = v2;
    *(float *)(this + 0x88) = v5;
    *(float *)(this + 0x8C) = v6;
    *(float *)(this + 0x90) = v2;
    *(float *)(this + 0x94) = v3;
    *(float *)(this + 0x98) = v6;
    *(float *)(this + 0x9C) = v2;
  }
  return result;
}
