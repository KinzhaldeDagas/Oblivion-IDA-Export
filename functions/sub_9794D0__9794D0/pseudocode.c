float *__thiscall sub_9794D0(
        float *this,
        float *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        signed int a8,
        int a9)
{
  int v9; // eax
  int v11; // ebx
  float *v12; // edi
  float *v13; // eax
  float *v14; // edx
  float *v15; // esi
  double v16; // st6
  double v17; // st7
  double v19; // st7
  double v20; // st6
  double v21; // st5
  float v22; // [esp+0h] [ebp-38h]
  float v23; // [esp+8h] [ebp-30h]
  float v24; // [esp+Ch] [ebp-2Ch]
  float v25; // [esp+10h] [ebp-28h]
  float v26; // [esp+14h] [ebp-24h]
  float v27; // [esp+14h] [ebp-24h]
  float v28; // [esp+18h] [ebp-20h]
  float v29; // [esp+18h] [ebp-20h]
  float v30; // [esp+1Ch] [ebp-1Ch]
  float v31; // [esp+1Ch] [ebp-1Ch]
  float v32; // [esp+20h] [ebp-18h]
  float v33; // [esp+24h] [ebp-14h]
  float v34; // [esp+28h] [ebp-10h]
  float v35; // [esp+2Ch] [ebp-Ch]
  float v36; // [esp+30h] [ebp-8h]
  float i; // [esp+34h] [ebp-4h]
  float v38; // [esp+40h] [ebp+8h]
  float v39; // [esp+40h] [ebp+8h]
  float v40; // [esp+40h] [ebp+8h]
  float v41; // [esp+40h] [ebp+8h]
  float v42; // [esp+40h] [ebp+8h]
  float v43; // [esp+44h] [ebp+Ch]

  v23 = 0.0; /*0x9794d9*/
  v24 = 0.0; /*0x9794e0*/
  v9 = a7; /*0x9794e4*/
  v25 = 0.0; /*0x9794e7*/
  v22 = 0.0; /*0x9794eb*/
  v32 = 0.0; /*0x9794f2*/
  v33 = 0.0; /*0x9794f6*/
  v34 = 0.0; /*0x9794fe*/
  v35 = 0.0; /*0x979506*/
  v36 = 0.0; /*0x97950a*/
  for ( i = 0.0; a7 <= a8; i = v43 * (v16 * v16 + v14[2] * v14[2] + v15[2] * v15[2] + v12[2] * v12[2]) + i ) /*0x979512*/
  {
    v11 = *(_DWORD *)(a9 + 4 * v9); /*0x979524*/
    v12 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 2 * (3 * v11 + 1) + 2)); /*0x979542*/
    v13 = (float *)(a6 + 0xC * v11); /*0x97954d*/
    v14 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 6 * v11)); /*0x979557*/
    v43 = *(float *)(a5 + 4 * v11); /*0x979561*/
    v15 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 6 * v11 + 2)); /*0x979565*/
    v22 = v43 + v22; /*0x979573*/
    v26 = *v13 * v43; /*0x97957b*/
    v28 = v43 * v13[1]; /*0x979584*/
    v30 = v13[2] * v43; /*0x97958d*/
    v23 = v26 + v23; /*0x979599*/
    v24 = v28 + v24; /*0x9795a5*/
    v25 = v30 + v25; /*0x9795b1*/
    v32 = (*v13 * *v13 + *v14 * *v14 + *v15 * *v15 + *v12 * *v12) * v43 + v32; /*0x9795d7*/
    v33 = (*v13 * v13[1] + v14[1] * *v14 + *v15 * v15[1] + *v12 * v12[1]) * v43 + v33; /*0x9795fb*/
    v34 = (*v13 * v13[2] + v14[2] * *v14 + *v15 * v15[2] + *v12 * v12[2]) * v43 + v34; /*0x97961f*/
    v35 = (v13[1] * v13[1] + v14[1] * v14[1] + v15[1] * v15[1] + v12[1] * v12[1]) * v43 + v35; /*0x979649*/
    v36 = (v13[2] * v13[1] + v14[2] * v14[1] + v15[2] * v15[1] + v12[2] * v12[1]) * v43 + v36; /*0x979671*/
    v16 = v13[2]; /*0x979675*/
    v9 = ++a7; /*0x97968c*/
  }
  v38 = 1.0 / v22; /*0x9796c6*/
  v17 = v38; /*0x9796ca*/
  v39 = dbl_A3C770 * v38; /*0x9796d6*/
  v27 = v23 * v17; /*0x9796e0*/
  *(this + 1) = v27; /*0x9796ec*/
  v29 = v24 * v17; /*0x9796f1*/
  *(this + 2) = v29; /*0x9796f9*/
  v31 = v17 * v25; /*0x979704*/
  *(this + 3) = v31; /*0x97970c*/
  v19 = v39; /*0x979722*/
  *a2 = v39 * v32 - *(this + 1) * *(this + 1); /*0x979724*/
  v40 = v39 * v33 - *(this + 2) * *(this + 1); /*0x979734*/
  v20 = v40; /*0x979738*/
  a2[1] = v40; /*0x97973c*/
  v41 = v19 * v34 - *(this + 1) * *(this + 3); /*0x97974d*/
  v21 = v41; /*0x979751*/
  a2[2] = v41; /*0x979755*/
  a2[4] = v19 * v35 - *(this + 2) * *(this + 2); /*0x979767*/
  v42 = v19 * v36 - *(this + 2) * *(this + 3); /*0x979778*/
  a2[5] = v42; /*0x979780*/
  a2[8] = v19 * i - *(this + 3) * *(this + 3); /*0x979792*/
  a2[3] = v20; /*0x979797*/
  a2[6] = v21; /*0x97979a*/
  a2[7] = v42; /*0x97979d*/
  return a2; /*0x9797a0*/
}
