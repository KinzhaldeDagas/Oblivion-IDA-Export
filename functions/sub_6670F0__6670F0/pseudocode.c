char __thiscall sub_6670F0(MobileObject *this, int a2)
{
  float *v4; // eax
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  double v8; // st6
  PlayerCharacter *v9; // ecx
  double ScaledCollisionHeight; // st7
  float v11; // ecx
  float v12; // ecx
  float *v13; // ecx
  float v14; // edx
  int v15; // ecx
  double v16; // st7
  float v17; // ecx
  double v18; // rt0
  float *v19; // ecx
  float v20; // edx
  int v21; // ecx
  double v22; // st7
  float v23; // ecx
  float *v24; // ecx
  float v25; // edx
  int v26; // ecx
  bhkCharacterProxy *CharProxy; // eax
  float v28; // [esp+8h] [ebp-44h]
  float v29; // [esp+Ch] [ebp-40h]
  float v30; // [esp+10h] [ebp-3Ch] BYREF
  float v31; // [esp+14h] [ebp-38h]
  float v32; // [esp+18h] [ebp-34h]
  float v33; // [esp+1Ch] [ebp-30h]
  float v34; // [esp+20h] [ebp-2Ch]
  float v35; // [esp+24h] [ebp-28h]
  float v36; // [esp+28h] [ebp-24h]
  float v37; // [esp+2Ch] [ebp-20h]
  float v38; // [esp+30h] [ebp-1Ch]
  float v39; // [esp+34h] [ebp-18h] BYREF
  float v40; // [esp+38h] [ebp-14h]
  float v41; // [esp+3Ch] [ebp-10h]
  float v42[3]; // [esp+40h] [ebp-Ch] BYREF
  float v43; // [esp+50h] [ebp+4h]
  float v44; // [esp+50h] [ebp+4h]
  float v45; // [esp+50h] [ebp+4h]

  if ( !a2 ) /*0x6670fd*/
    return 0; /*0x667100*/
  if ( !LODWORD(qword_B3BB2C[0x17]) ) /*0x667109*/
  {
    LODWORD(qword_B3BB2C[0x17]) = &qword_B3BB2C[8]; /*0x667112*/
    LOBYTE(qword_B3BB2C[0xC]) = 0; /*0x66711c*/
    BYTE1(qword_B3BB2C[0x13]) = 1; /*0x667123*/
  }
  v4 = this->vtbl->super.GetPos(this); /*0x667132*/
  v5 = *v4; /*0x667136*/
  v6 = v4[1]; /*0x667138*/
  v7 = v4[2]; /*0x66713b*/
  v30 = 0.0; /*0x66713e*/
  v8 = flt_A2F930; /*0x667142*/
  v33 = v5; /*0x667148*/
  v9 = reference; /*0x66714c*/
  v31 = v8; /*0x667152*/
  v34 = v6; /*0x667156*/
  v32 = 0.0; /*0x66715a*/
  v35 = v7; /*0x66715e*/
  ScaledCollisionHeight = Actor_GetScaledCollisionHeight(v9); /*0x667162*/
  v11 = qword_B3BB2C[0x17]; /*0x66716d*/
  v35 = ScaledCollisionHeight * dbl_A3C770 + v35; /*0x667178*/
  sub_441920((_DWORD *)LODWORD(v11), a2); /*0x66717c*/
  v12 = qword_B3BB2C[0x17]; /*0x667190*/
  v39 = (float)0.0 + v33; /*0x667196*/
  v40 = v34 + v31; /*0x6671a7*/
  v41 = (float)0.0 + v35; /*0x6671b3*/
  if ( NiPick_ExecuteAndSort((_WORD *)LODWORD(v12), &v39, &v30, 0) ) /*0x6671b7*/
  {
    v13 = **(float ***)(LODWORD(qword_B3BB2C[0x17]) + 0x1C); /*0x6671c8*/
    v14 = v13[0xA]; /*0x6671cd*/
    v37 = v13[0xB]; /*0x6671d0*/
    v36 = v14; /*0x6671dc*/
    v38 = v13[0xC]; /*0x6671eb*/
    v43 = v37 * v31 + v30 * v14 + v38 * v32; /*0x6671fb*/
    if ( v43 > (double)*(float *)&SrcStr ) /*0x66720e*/
    {
      v15 = *(_DWORD *)(*(_DWORD *)v13 + 0x1C); /*0x667212*/
      if ( !v15 || (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 4))(v15) != &stru_B3FD4C ) /*0x66722a*/
        return 1; /*0x66722a*/
    }
  }
  v36 = flt_A2F930; /*0x66723e*/
  v16 = flt_A7386C; /*0x667246*/
  v30 = v36; /*0x66724c*/
  v37 = v16; /*0x667250*/
  v38 = 0.0; /*0x66725e*/
  v31 = v37; /*0x667262*/
  v17 = qword_B3BB2C[0x17]; /*0x667277*/
  v18 = dbl_A2F920; /*0x66727d*/
  v32 = 0.0; /*0x667284*/
  v42[0] = v33 + v18; /*0x667288*/
  v44 = v34 - v18; /*0x667290*/
  v42[1] = v44; /*0x667298*/
  v28 = v35 + dbl_A2FC68; /*0x6672a6*/
  v42[2] = v28; /*0x6672ae*/
  if ( NiPick_ExecuteAndSort((_WORD *)LODWORD(v17), v42, &v30, 0) ) /*0x6672b2*/
  {
    v19 = **(float ***)(LODWORD(qword_B3BB2C[0x17]) + 0x1C); /*0x6672c3*/
    v20 = v19[0xA]; /*0x6672c8*/
    v37 = v19[0xB]; /*0x6672cb*/
    v36 = v20; /*0x6672d7*/
    v38 = v19[0xC]; /*0x6672e6*/
    v29 = v37 * v31 + v20 * v30 + v38 * v32; /*0x6672f6*/
    if ( v29 > (double)*(float *)&SrcStr ) /*0x667309*/
    {
      v21 = *(_DWORD *)(*(_DWORD *)v19 + 0x1C); /*0x66730d*/
      if ( !v21 || (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v21 + 4))(v21) != &stru_B3FD4C ) /*0x667329*/
        return 1; /*0x667329*/
    }
  }
  v36 = flt_A7386C; /*0x667337*/
  v37 = v36; /*0x66733f*/
  v30 = v36; /*0x667349*/
  v38 = 0.0; /*0x66734d*/
  v22 = v33 - dbl_A2F920; /*0x66735d*/
  v31 = v36; /*0x667363*/
  v23 = qword_B3BB2C[0x17]; /*0x667368*/
  v39 = v22; /*0x667372*/
  v32 = 0.0; /*0x66737b*/
  v40 = v44; /*0x66737f*/
  v41 = v28; /*0x667387*/
  if ( NiPick_ExecuteAndSort((_WORD *)LODWORD(v23), &v39, &v30, 0) ) /*0x66738b*/
  {
    v24 = **(float ***)(LODWORD(qword_B3BB2C[0x17]) + 0x1C); /*0x66739c*/
    v25 = v24[0xA]; /*0x6673a1*/
    v37 = v24[0xB]; /*0x6673a4*/
    v36 = v25; /*0x6673b0*/
    v38 = v24[0xC]; /*0x6673bf*/
    v45 = v37 * v31 + v25 * v30 + v38 * v32; /*0x6673cf*/
    if ( v45 > (double)*(float *)&SrcStr ) /*0x6673e2*/
    {
      v26 = *(_DWORD *)(*(_DWORD *)v24 + 0x1C); /*0x6673e6*/
      if ( !v26 || (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v26 + 4))(v26) != &stru_B3FD4C ) /*0x667402*/
        return 1; /*0x66722d*/
    }
  }
  CharProxy = MobileObject_GetCharProxy(this); /*0x66740a*/
  return sub_892D90((__m128 *)CharProxy); /*0x6670ff*/
}
