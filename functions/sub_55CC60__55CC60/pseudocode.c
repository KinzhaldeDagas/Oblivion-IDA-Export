void __thiscall sub_55CC60(int this, int a2)
{
  NiPoint3 *v2; // eax
  float v3; // [esp+4h] [ebp-1Ch]
  float v4; // [esp+4h] [ebp-1Ch]
  float v5; // [esp+14h] [ebp-Ch]
  float v6; // [esp+18h] [ebp-8h]
  float v7; // [esp+1Ch] [ebp-4h]

  if ( unk_B39B84 ) /*0x55cc60*/
    v2 = (NiPoint3 *)(unk_B39B84 + 0x88); /*0x55cc6f*/
  else
    v2 = &g_zeroNiPoint3; /*0x55cc76*/
  v5 = v2->x - *(float *)(this + 0x88); /*0x55cc99*/
  v6 = v2->y - *(float *)(this + 0x8C); /*0x55cca7*/
  v7 = v2->z - *(float *)(this + 0x90); /*0x55ccb5*/
  v3 = v6 * v6 + v5 * v5 + v7 * v7; /*0x55ccd5*/
  v4 = sqrt(v3); /*0x55cce2*/
  if ( (flt_B120CC + dbl_A3F3E8 >= v4 || *(_BYTE *)(this + 0x110)) && a2 ) /*0x55cd1c*/
  {
    if ( flt_B120CC - dbl_A3F3E8 > v4 && *(_BYTE *)(this + 0x110) || a2 == 1 ) /*0x55cd4d*/
      sub_553BB0(this, 1); /*0x55cd52*/
  }
  else
  {
    sub_553BB0(this, 0); /*0x55cd27*/
  }
}
