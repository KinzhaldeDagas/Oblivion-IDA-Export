void __thiscall sub_8126D0(int this)
{
  unsigned __int16 v2; // ax
  float *v3; // ecx
  int v4; // esi
  int v5; // edi
  NiObject *v6; // esi
  double v7; // st7
  double v8; // st5
  double v9; // st3
  double v10; // rtt
  NiRTTI *v11; // eax
  char v12; // al
  NiObject *v13; // eax
  NiObject *v14; // esi
  float v15; // [esp+Ch] [ebp-30h]
  float v16; // [esp+Ch] [ebp-30h]
  float v17; // [esp+Ch] [ebp-30h]
  float v18; // [esp+Ch] [ebp-30h]
  float v20; // [esp+14h] [ebp-28h]
  float v21; // [esp+14h] [ebp-28h]
  float v22; // [esp+18h] [ebp-24h]
  float v23; // [esp+18h] [ebp-24h]
  float v24; // [esp+1Ch] [ebp-20h]
  float v25; // [esp+1Ch] [ebp-20h]
  float v26; // [esp+20h] [ebp-1Ch]
  float v27; // [esp+20h] [ebp-1Ch]
  float v28; // [esp+24h] [ebp-18h]
  float v29; // [esp+24h] [ebp-18h]
  float v30; // [esp+28h] [ebp-14h]
  float v31; // [esp+28h] [ebp-14h]
  float v32; // [esp+2Ch] [ebp-10h]
  float v33; // [esp+2Ch] [ebp-10h]
  float v34; // [esp+30h] [ebp-Ch]
  float v35; // [esp+30h] [ebp-Ch]
  float v36; // [esp+34h] [ebp-8h]
  float v37; // [esp+34h] [ebp-8h]
  float v38; // [esp+38h] [ebp-4h]

  v15 = flt_A9372C; /*0x8126dc*/
  v2 = *(_WORD *)(this + 0xE); /*0x8126e0*/
  if ( !v2 ) /*0x8126ee*/
    v15 = 0.0; /*0x8126f2*/
  v26 = v15; /*0x8126ff*/
  v28 = v15; /*0x812703*/
  v30 = v15; /*0x812707*/
  v16 = -v15; /*0x81270d*/
  v20 = v16; /*0x812715*/
  v22 = v16; /*0x812719*/
  v24 = v16; /*0x81271d*/
  if ( v2 ) /*0x812721*/
  {
    v3 = *(float **)(this + 0x10); /*0x812727*/
    v4 = v2; /*0x81272a*/
    do /*0x8127bc*/
    {
      if ( *v3 <= (double)v26 ) /*0x81273d*/
        v26 = *v3; /*0x812741*/
      if ( *v3 >= (double)v20 ) /*0x812752*/
        v20 = *v3; /*0x812756*/
      if ( v3[1] <= (double)v28 ) /*0x812768*/
        v28 = v3[1]; /*0x81276d*/
      if ( v3[1] >= (double)v22 ) /*0x81277f*/
        v22 = v3[1]; /*0x812784*/
      if ( v3[2] <= (double)v30 ) /*0x812796*/
        v30 = v3[2]; /*0x81279b*/
      if ( v3[2] >= (double)v24 ) /*0x8127ad*/
        v24 = v3[2]; /*0x8127b2*/
      v3 += 4; /*0x8127b6*/
      --v4; /*0x8127b9*/
    }
    while ( v4 ); /*0x8127bc*/
  }
  v5 = *(_DWORD *)(this + 4); /*0x8127c2*/
  if ( v5 )
  {
    v6 = *(NiObject **)this; /*0x8127cd*/
    if ( *(_DWORD *)this )
    {
      v7 = v20; /*0x8127d7*/
      v32 = v20 - v26; /*0x8127e7*/
      v8 = v22; /*0x8127eb*/
      v34 = v22 - v28; /*0x8127fb*/
      v9 = v24; /*0x8127ff*/
      v36 = v24 - v30; /*0x81280f*/
      v10 = dbl_A2FAA0; /*0x81281f*/
      v21 = v32 * v10; /*0x812821*/
      v23 = v34 * v10; /*0x81282b*/
      v25 = v10 * v36; /*0x812833*/
      v27 = v26 + v21; /*0x81283f*/
      v29 = v28 + v23; /*0x81284f*/
      v31 = v30 + v25; /*0x81285f*/
      v33 = v7 - v27; /*0x81286b*/
      v35 = v8 - v29; /*0x812877*/
      v37 = v9 - v31; /*0x81287f*/
      v17 = v35 * v35 + v33 * v33 + v37 * v37; /*0x81289f*/
      v18 = sqrt(v17); /*0x8128ac*/
      v38 = v18 + *(float *)(v5 + 0x28); /*0x8128be*/
      v11 = v6->__vftable->GetType(v6); /*0x8128c2*/
      if ( v11 ) /*0x8128c6*/
      {
        while ( v11 != &stru_B47878 ) /*0x8128cd*/
        {
          v11 = v11->parent; /*0x8128cf*/
          if ( !v11 ) /*0x8128d4*/
            goto LABEL_23; /*0x8128d4*/
        }
        v12 = 1; /*0x812923*/
      }
      else
      {
LABEL_23:
        v12 = 0; /*0x8128d6*/
      }
      v13 = v12 != 0 ? v6 : 0;
      v14 = v13; /*0x8128de*/
      if ( v13 || (v13 = NiRTTI_Cast((BSStringT *)&stru_B4786C, *(NiObject **)this), (v14 = v13) != 0) ) /*0x81293f*/
      {
        ((void (__thiscall *)(NiObject *, float, float, float, float))v13->__vftable[2].GetType)( /*0x812963*/
          v13,
          COERCE_FLOAT(LODWORD(v27)),
          COERCE_FLOAT(LODWORD(v29)),
          COERCE_FLOAT(LODWORD(v31)),
          COERCE_FLOAT(LODWORD(v38)));
        ((void (__thiscall *)(NiObject *, _DWORD))v14->__vftable[2].Unk_02)(v14, *(unsigned __int16 *)(this + 0xE)); /*0x812974*/
      }
    }
  }
}
