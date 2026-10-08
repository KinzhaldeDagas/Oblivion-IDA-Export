char __thiscall sub_685880(int this, float a2)
{
  char *v3; // ecx
  int v4; // eax
  double v5; // st7
  float *v6; // ecx
  int v8; // ecx
  float v9; // [esp+Ch] [ebp-4h]
  float v10; // [esp+14h] [ebp+4h]
  float v11; // [esp+14h] [ebp+4h]
  float v12; // [esp+14h] [ebp+4h]
  float v13; // [esp+14h] [ebp+4h]
  float v14; // [esp+14h] [ebp+4h]

  v10 = *(float *)(this + 0x1C) - a2; /*0x68588e*/
  if ( v10 > 0.0 && 0.0 == *(float *)(this + 0x20) || v10 / *(float *)(this + 0x20) > dbl_A2F928 ) /*0x6858bb*/
  {
    v6 = *(float **)(this + 0x30); /*0x68592b*/
    *(float *)(this + 0x20) = 0.0; /*0x68592e*/
    if ( v6 ) /*0x685933*/
    {
      sub_680D00(v6, 0.0); /*0x685939*/
      return 1; /*0x685943*/
    }
    return 1; /*0x685933*/
  }
  v3 = *(char **)(this + 0x30); /*0x6858bd*/
  v11 = unk_B3A498[0]; /*0x6858ca*/
  if ( v3 ) /*0x6858ce*/
  {
    v4 = sub_680CB0(v3); /*0x6858d0*/
    if ( v4 ) /*0x6858d7*/
    {
      if ( v4 != 7 ) /*0x6858dc*/
        v11 = MEMORY[0xB3A4B8]; /*0x6858e4*/
    }
  }
  v12 = v11 / flt_B06530; /*0x6858f2*/
  v5 = v12; /*0x6858f6*/
  v9 = v12 / dbl_A3F3F0; /*0x685902*/
  v13 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x68590c*/
  if ( v9 < (double)v13 ) /*0x685921*/
    v13 = v9; /*0x685923*/
  v14 = v13 + *(float *)(this + 0x20); /*0x68594f*/
  *(float *)(this + 0x20) = v14; /*0x685957*/
  if ( v14 <= v5 ) /*0x685961*/
    return 1; /*0x68598b*/
  v8 = *(_DWORD *)(this + 0x30); /*0x685963*/
  if ( !v8 || !sub_680D60(v8) ) /*0x68596a*/
    return 0; /*0x685981*/
  *(float *)(this + 0x20) = 0.0; /*0x685977*/
  return 1; /*0x68593e*/
}
