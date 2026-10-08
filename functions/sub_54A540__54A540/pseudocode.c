BOOL __userpurge sub_54A540@<eax>(int a1@<ecx>, double a2@<st0>, float *a3)
{
  int v3; // esi
  double v4; // st7
  double v5; // st6
  double v6; // st4
  double v7; // st3
  double v8; // st7
  double v9; // rtt
  double v10; // rt0
  double v11; // st3
  double v12; // st7
  double v13; // st3
  bool v14; // c3
  double v15; // st6
  double v16; // st5
  float v18; // [esp+1Ch] [ebp-Ch]
  float v19; // [esp+1Ch] [ebp-Ch]
  float v20; // [esp+20h] [ebp-8h]
  float v21; // [esp+20h] [ebp-8h]
  float v22; // [esp+24h] [ebp-4h]
  float v23; // [esp+24h] [ebp-4h]

  v3 = a1 + 0xA4; /*0x54a54d*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(a1 + 0xA4) + 0x48))(a1 + 0xA4, 0x10); /*0x54a557*/
  v20 = a2; /*0x54a559*/
  v18 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v3 + 0x48))(v3, 0xF); /*0x54a568*/
  v22 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v3 + 0x48))(v3, 0xE); /*0x54a577*/
  v4 = v20; /*0x54a57b*/
  v5 = dbl_A3A5B0; /*0x54a58b*/
  if ( v5 == v20 ) /*0x54a592*/
    v4 = (float)0.0; /*0x54a5a0*/
  v6 = dbl_A641E8; /*0x54a5a4*/
  v7 = dbl_A641E0; /*0x54a5ae*/
  if ( v6 >= v4 ) /*0x54a5b7*/
  {
    v8 = v7; /*0x54a5c8*/
    v7 = v6; /*0x54a5ca*/
  }
  else
  {
    if ( v7 > v4 ) /*0x54a5c0*/
      goto LABEL_8; /*0x54a5c0*/
    v8 = v7; /*0x54a5c2*/
  }
  v9 = v7; /*0x54a5cc*/
  v7 = v8; /*0x54a5cc*/
  v4 = v9; /*0x54a5cc*/
LABEL_8:
  v10 = v7; /*0x54a5ce*/
  v11 = v4; /*0x54a5ce*/
  v12 = v10; /*0x54a5ce*/
  v21 = v11; /*0x54a5d0*/
  v13 = v18; /*0x54a5d4*/
  if ( v18 == v5 ) /*0x54a5e1*/
    v13 = (float)0.0; /*0x54a5f3*/
  if ( v13 <= v6 ) /*0x54a5fc*/
  {
    v13 = v6; /*0x54a60f*/
  }
  else if ( v13 >= v12 ) /*0x54a605*/
  {
    v13 = v12; /*0x54a609*/
  }
  v14 = v22 == v5; /*0x54a61b*/
  v15 = v22; /*0x54a61f*/
  if ( v14 ) /*0x54a624*/
  {
    v16 = v6; /*0x54a630*/
    v15 = (float)0.0; /*0x54a630*/
  }
  else
  {
    v16 = v6; /*0x54a64a*/
  }
  if ( v16 >= v15 ) /*0x54a639*/
  {
    v15 = v16; /*0x54a64e*/
  }
  else if ( v15 >= v12 ) /*0x54a644*/
  {
    goto LABEL_22; /*0x54a644*/
  }
  v12 = v15; /*0x54a650*/
LABEL_22:
  v23 = v12; /*0x54a652*/
  v19 = v13; /*0x54a611*/
  sub_711580(a3, v21, v19, v23); /*0x54a676*/
  return !sub_70FF20(a3, (float *)&stru_B26AF0[0xA].unk2C); /*0x54a689*/
}
