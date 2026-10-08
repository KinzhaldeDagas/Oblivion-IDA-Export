void __thiscall sub_802AE0(int this)
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

  v15 = flt_A9372C; /*0x802aec*/
  v2 = *(_WORD *)(this + 0xE); /*0x802af0*/
  if ( !v2 ) /*0x802afe*/
    v15 = 0.0; /*0x802b02*/
  v26 = v15; /*0x802b0f*/
  v28 = v15; /*0x802b13*/
  v30 = v15; /*0x802b17*/
  v16 = -v15; /*0x802b1d*/
  v20 = v16; /*0x802b25*/
  v22 = v16; /*0x802b29*/
  v24 = v16; /*0x802b2d*/
  if ( v2 ) /*0x802b31*/
  {
    v3 = *(float **)(this + 0x10); /*0x802b37*/
    v4 = v2; /*0x802b40*/
    do /*0x802bdc*/
    {
      if ( flt_A6D2D8 < (double)v3[2] ) /*0x802b4a*/
      {
        if ( *v3 <= (double)v26 ) /*0x802b5d*/
          v26 = *v3; /*0x802b61*/
        if ( *v3 >= (double)v20 ) /*0x802b72*/
          v20 = *v3; /*0x802b76*/
        if ( v3[1] <= (double)v28 ) /*0x802b88*/
          v28 = v3[1]; /*0x802b8d*/
        if ( v3[1] >= (double)v22 ) /*0x802b9f*/
          v22 = v3[1]; /*0x802ba4*/
        if ( v3[2] <= (double)v30 ) /*0x802bb6*/
          v30 = v3[2]; /*0x802bbb*/
        if ( v3[2] >= (double)v24 ) /*0x802bcd*/
          v24 = v3[2]; /*0x802bd2*/
      }
      v3 += 4; /*0x802bd6*/
      --v4; /*0x802bd9*/
    }
    while ( v4 ); /*0x802bdc*/
  }
  v5 = *(_DWORD *)(this + 4); /*0x802be4*/
  if ( v5 )
  {
    v6 = *(NiObject **)this; /*0x802bef*/
    if ( *(_DWORD *)this )
    {
      v7 = v20; /*0x802bf9*/
      v32 = v20 - v26; /*0x802c09*/
      v8 = v22; /*0x802c0d*/
      v34 = v22 - v28; /*0x802c1d*/
      v9 = v24; /*0x802c21*/
      v36 = v24 - v30; /*0x802c31*/
      v10 = dbl_A2FAA0; /*0x802c41*/
      v21 = v32 * v10; /*0x802c43*/
      v23 = v34 * v10; /*0x802c4d*/
      v25 = v10 * v36; /*0x802c55*/
      v27 = v26 + v21; /*0x802c61*/
      v29 = v28 + v23; /*0x802c71*/
      v31 = v30 + v25; /*0x802c81*/
      v33 = v7 - v27; /*0x802c8d*/
      v35 = v8 - v29; /*0x802c99*/
      v37 = v9 - v31; /*0x802ca1*/
      v17 = v35 * v35 + v33 * v33 + v37 * v37; /*0x802cc1*/
      v18 = sqrt(v17); /*0x802cce*/
      v38 = v18 + *(float *)(v5 + 0x28); /*0x802ce0*/
      v11 = v6->__vftable->GetType(v6); /*0x802ce4*/
      if ( v11 ) /*0x802ce8*/
      {
        while ( v11 != &stru_B47878 ) /*0x802cf5*/
        {
          v11 = v11->parent; /*0x802cf7*/
          if ( !v11 ) /*0x802cfc*/
            goto LABEL_24; /*0x802cfc*/
        }
        v12 = 1; /*0x802d4b*/
      }
      else
      {
LABEL_24:
        v12 = 0; /*0x802cfe*/
      }
      v13 = v12 != 0 ? v6 : 0;
      v14 = v13; /*0x802d06*/
      if ( v13 || (v13 = NiRTTI_Cast((BSStringT *)&stru_B4786C, *(NiObject **)this), (v14 = v13) != 0) ) /*0x802d67*/
      {
        ((void (__thiscall *)(NiObject *, float, float, float, float))v13->__vftable[2].GetType)( /*0x802d8b*/
          v13,
          COERCE_FLOAT(LODWORD(v27)),
          COERCE_FLOAT(LODWORD(v29)),
          COERCE_FLOAT(LODWORD(v31)),
          COERCE_FLOAT(LODWORD(v38)));
        ((void (__thiscall *)(NiObject *, _DWORD))v14->__vftable[2].Unk_02)(v14, *(unsigned __int16 *)(this + 0xE)); /*0x802d9c*/
      }
    }
  }
}
