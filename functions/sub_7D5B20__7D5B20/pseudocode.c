char __stdcall sub_7D5B20(float a1, float a2, float a3, int a4, int a5, int a6)
{
  NiCamera *v6; // ebx
  int v7; // eax
  float v8; // ecx
  float v9; // edx
  double v10; // st7
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  double v14; // st7
  float v15; // ecx
  float v16; // edx
  float v17; // eax
  int v18; // edx
  int v19; // eax
  double v20; // st7
  float v22; // [esp+10h] [ebp-18Ch]
  float v23; // [esp+10h] [ebp-18Ch]
  float v24; // [esp+10h] [ebp-18Ch]
  float v25; // [esp+10h] [ebp-18Ch]
  int v26; // [esp+10h] [ebp-18Ch]
  float v27; // [esp+10h] [ebp-18Ch]
  float v28; // [esp+14h] [ebp-188h]
  float v29; // [esp+14h] [ebp-188h]
  float v30; // [esp+14h] [ebp-188h]
  int v31; // [esp+14h] [ebp-188h]
  int v32; // [esp+14h] [ebp-188h]
  float v33; // [esp+14h] [ebp-188h]
  float v34; // [esp+18h] [ebp-184h] BYREF
  float v35; // [esp+1Ch] [ebp-180h]
  float v36; // [esp+20h] [ebp-17Ch]
  float v37; // [esp+24h] [ebp-178h]
  float v38; // [esp+28h] [ebp-174h] BYREF
  float v39; // [esp+2Ch] [ebp-170h]
  float v40; // [esp+30h] [ebp-16Ch]
  int v41; // [esp+34h] [ebp-168h] BYREF
  float v42; // [esp+38h] [ebp-164h]
  float v43; // [esp+3Ch] [ebp-160h]

  v6 = *(NiCamera **)(a5 + 0xC); /*0x7d5b60*/
  switch ( (__int16)a6 ) /*0x7d5b69*/
  {
    case 0: /*0x7d5b69*/
      v37 = -*(float *)&stru_B258D0; /*0x7d5b78*/
      v22 = -*(float *)&MEMORY[0xB258D4]; /*0x7d5b84*/
      v28 = -*(float *)&MEMORY[0xB258D8]; /*0x7d5b90*/
      v38 = v37; /*0x7d5b98*/
      v7 = LODWORD(v37); /*0x7d5b9c*/
      v39 = v22; /*0x7d5ba4*/
      v8 = v22; /*0x7d5ba8*/
      v40 = v28; /*0x7d5bb0*/
      v9 = v28; /*0x7d5bb4*/
      v29 = -*(float *)&stru_B258DC; /*0x7d5bc0*/
      v23 = -*(float *)&MEMORY[0xB258E0]; /*0x7d5bcc*/
      v10 = *((float *)&MEMORY[0xB258E0] + 1); /*0x7d5bd0*/
      goto LABEL_3; /*0x7d5bd0*/
    case 1: /*0x7d5b69*/
      v11 = stru_B258D0; /*0x7d5c27*/
      v12 = MEMORY[0xB258D4]; /*0x7d5c2d*/
      v13 = MEMORY[0xB258D8]; /*0x7d5c32*/
      goto LABEL_5; /*0x7d5c32*/
    case 2: /*0x7d5b69*/
      *(float *)&v31 = -*(float *)&stru_B258DC; /*0x7d5caf*/
      v25 = -*(float *)&MEMORY[0xB258E0]; /*0x7d5cbb*/
      v37 = -*((float *)&MEMORY[0xB258E0] + 1); /*0x7d5cc7*/
      v34 = *(float *)&v31; /*0x7d5ccf*/
      v41 = v31; /*0x7d5cdb*/
      v15 = *(float *)&rhs; /*0x7d5cdf*/
      v35 = v25; /*0x7d5ce5*/
      v36 = v37; /*0x7d5cf1*/
      v42 = v25; /*0x7d5cf9*/
      v16 = *(float *)&MEMORY[0xB258EC]; /*0x7d5cfd*/
      v43 = v37; /*0x7d5d03*/
      v17 = *(float *)&MEMORY[0xB258F0]; /*0x7d5d07*/
      goto LABEL_10; /*0x7d5d0c*/
    case 3: /*0x7d5b69*/
      v7 = stru_B258DC; /*0x7d5d17*/
      v8 = *(float *)&MEMORY[0xB258E0]; /*0x7d5d1c*/
      v9 = *((float *)&MEMORY[0xB258E0] + 1); /*0x7d5d24*/
      v29 = -*(float *)&rhs; /*0x7d5d2a*/
      v23 = -*(float *)&MEMORY[0xB258EC]; /*0x7d5d36*/
      v10 = *(float *)&MEMORY[0xB258F0]; /*0x7d5d3a*/
LABEL_3:
      v41 = v7; /*0x7d5bd6*/
      v37 = -v10; /*0x7d5bdc*/
      v42 = v8; /*0x7d5be0*/
      v43 = v9; /*0x7d5be8*/
      v34 = v29; /*0x7d5bec*/
      v38 = v29; /*0x7d5bf8*/
      v35 = v23; /*0x7d5bfc*/
      v36 = v37; /*0x7d5c0c*/
      v39 = v23; /*0x7d5c14*/
      v40 = v37; /*0x7d5c1d*/
      NiPoint3_CrossProduct((float *)&v41, &v34, &v38); /*0x7d5c22*/
      break; /*0x7d5c22*/
    case 4: /*0x7d5b69*/
      *(float *)&v32 = -*(float *)&rhs; /*0x7d5d4d*/
      *(float *)&v26 = -*(float *)&MEMORY[0xB258EC]; /*0x7d5d59*/
      v37 = -*(float *)&MEMORY[0xB258F0]; /*0x7d5d65*/
      v34 = *(float *)&v32; /*0x7d5d6d*/
      v11 = v32; /*0x7d5d71*/
      v35 = *(float *)&v26; /*0x7d5d79*/
      v12 = v26; /*0x7d5d7d*/
      v36 = v37; /*0x7d5d85*/
      v13 = LODWORD(v37); /*0x7d5d89*/
LABEL_5:
      v14 = *(float *)&stru_B258DC; /*0x7d5c38*/
      v41 = v11; /*0x7d5c3e*/
      v42 = *(float *)&v12; /*0x7d5c44*/
      v30 = -v14; /*0x7d5c48*/
      v43 = *(float *)&v13; /*0x7d5c4c*/
      v24 = -*(float *)&MEMORY[0xB258E0]; /*0x7d5c58*/
      v37 = -*((float *)&MEMORY[0xB258E0] + 1); /*0x7d5c64*/
      v34 = v30; /*0x7d5c6c*/
      v38 = v30; /*0x7d5c78*/
      v35 = v24; /*0x7d5c7c*/
      v36 = v37; /*0x7d5c8c*/
      v39 = v24; /*0x7d5c94*/
      v40 = v37; /*0x7d5c9d*/
      NiPoint3_CrossProduct((float *)&v41, &v34, &v38); /*0x7d5ca2*/
      break; /*0x7d5ca2*/
    case 5: /*0x7d5b69*/
      v18 = MEMORY[0xB258EC]; /*0x7d5d9e*/
      v19 = MEMORY[0xB258F0]; /*0x7d5da6*/
      v33 = -*(float *)&stru_B258DC; /*0x7d5dab*/
      v20 = *(float *)&MEMORY[0xB258E0]; /*0x7d5daf*/
      v41 = rhs; /*0x7d5db5*/
      v42 = *(float *)&v18; /*0x7d5dbb*/
      v27 = -v20; /*0x7d5dbf*/
      v43 = *(float *)&v19; /*0x7d5dc3*/
      v37 = -*((float *)&MEMORY[0xB258E0] + 1); /*0x7d5dcf*/
      v34 = v33; /*0x7d5dd7*/
      v15 = v33; /*0x7d5ddb*/
      v35 = v27; /*0x7d5de3*/
      v16 = v27; /*0x7d5de7*/
      v36 = v37; /*0x7d5def*/
      v17 = v37; /*0x7d5df3*/
LABEL_10:
      v38 = v15; /*0x7d5df7*/
      v39 = v16; /*0x7d5dff*/
      v40 = v17; /*0x7d5e09*/
      NiPoint3_CrossProduct((float *)&v41, &v34, &v38); /*0x7d5e11*/
      break; /*0x7d5e11*/
    default:
      JUMPOUT(0x7D5E16); /*0x7d5e16*/
  }
  return def_7D5B69(v6, (unsigned __int16)a6, a1, a2, a3, a4, a5, a6);
}
