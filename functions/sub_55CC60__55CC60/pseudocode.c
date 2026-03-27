void __thiscall sub_55CC60(int this, int a2)
{
  float *v2; // eax
  float v3; // [esp+4h] [ebp-1Ch]
  float v4; // [esp+4h] [ebp-1Ch]
  float v5; // [esp+14h] [ebp-Ch]
  float v6; // [esp+18h] [ebp-8h]
  float v7; // [esp+1Ch] [ebp-4h]

  if ( dword_B39B84 )
    v2 = (float *)(dword_B39B84 + 0x88);
  else
    v2 = &Vector3_InitValue_;
  v5 = *v2 - *(float *)(this + 0x88);
  v6 = v2[1] - *(float *)(this + 0x8C);
  v7 = v2[2] - *(float *)(this + 0x90);
  v3 = v6 * v6 + v5 * v5 + v7 * v7;
  v4 = sqrt(v3);
  if ( (flt_B120CC + dbl_A3F3E8 >= v4 || *(_BYTE *)(this + 0x110)) && a2 )
  {
    if ( flt_B120CC - dbl_A3F3E8 > v4 && *(_BYTE *)(this + 0x110) || a2 == 1 )
      sub_553BB0(this, 1);
  }
  else
  {
    sub_553BB0(this, 0);
  }
}
