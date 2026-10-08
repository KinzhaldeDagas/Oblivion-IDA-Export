int __thiscall sub_8B3850(float *this, int a2)
{
  int v2; // edx
  int v4; // edi
  int result; // eax
  float *v6; // ebx
  float *v7; // edi
  double v8; // st7
  double v9; // st6
  int v10; // edx
  double v11; // st5
  double v12; // st2
  double v13; // st1
  double v14; // st1
  double v15; // st1
  double v16; // st6
  bool v17; // zf
  double v18; // st7
  float v19; // [esp+10h] [ebp-4Ch]
  float v20; // [esp+14h] [ebp-48h]
  float v21; // [esp+18h] [ebp-44h]
  float v22; // [esp+1Ch] [ebp-40h]
  float v23; // [esp+20h] [ebp-3Ch]
  float v24; // [esp+24h] [ebp-38h]
  float v25; // [esp+24h] [ebp-38h]
  float v26; // [esp+28h] [ebp-34h]
  float v27; // [esp+28h] [ebp-34h]
  float v28; // [esp+2Ch] [ebp-30h]
  float v29; // [esp+2Ch] [ebp-30h]
  float v30; // [esp+30h] [ebp-2Ch]
  float v31; // [esp+30h] [ebp-2Ch]
  float v32; // [esp+34h] [ebp-28h]
  float v33; // [esp+38h] [ebp-24h]
  float v34; // [esp+38h] [ebp-24h]
  float v35; // [esp+3Ch] [ebp-20h]
  float v36; // [esp+3Ch] [ebp-20h]
  float v37; // [esp+40h] [ebp-1Ch]
  int v38; // [esp+44h] [ebp-18h]
  int v39; // [esp+48h] [ebp-14h]
  float v40; // [esp+4Ch] [ebp-10h]
  float v41; // [esp+50h] [ebp-Ch]
  float v42; // [esp+54h] [ebp-8h]
  float v43; // [esp+58h] [ebp-4h]
  float v44; // [esp+60h] [ebp+4h]

  v2 = *(_DWORD *)this; /*0x8b3853*/
  v4 = *((_DWORD *)this + 1); /*0x8b385f*/
  *(this + 0xC) = 0.0; /*0x8b3862*/
  *(this + 0xB) = 0.0; /*0x8b3865*/
  *(this + 0xA) = 0.0; /*0x8b3868*/
  *(this + 9) = 0.0; /*0x8b386b*/
  *(this + 8) = 0.0; /*0x8b386e*/
  *(this + 7) = 0.0; /*0x8b3871*/
  *(this + 6) = 0.0; /*0x8b3874*/
  *(this + 5) = 0.0; /*0x8b3877*/
  *(this + 4) = 0.0; /*0x8b387a*/
  *(this + 3) = 0.0; /*0x8b387d*/
  result = 1; /*0x8b3880*/
  v6 = (float *)(a2 + 4 * v4); /*0x8b3885*/
  v38 = 1; /*0x8b3888*/
  v7 = (float *)(a2 + 4 * v2); /*0x8b388c*/
  v39 = 3; /*0x8b388f*/
  do /*0x8b3ac2*/
  {
    v8 = *v7; /*0x8b38a1*/
    v9 = *v6; /*0x8b38a8*/
    v10 = 4 * (result % 3); /*0x8b38ae*/
    v44 = *(float *)(a2 + 4 * (v10 + *(_DWORD *)this)); /*0x8b38b9*/
    v11 = *(float *)(a2 + 4 * (*((_DWORD *)this + 1) + v10)); /*0x8b38bf*/
    v20 = v44 - v8; /*0x8b38c8*/
    v22 = v8 * v8 * v8; /*0x8b38d8*/
    v23 = v9 * v9; /*0x8b38e0*/
    v19 = v9 * v9 * v9; /*0x8b38e6*/
    v21 = v44 * v44; /*0x8b38f2*/
    v35 = v11 * v11; /*0x8b38fa*/
    v37 = v11 * v11 * v11; /*0x8b3900*/
    v12 = v44 + v8; /*0x8b3908*/
    v13 = v44 * v12 + v8 * v8; /*0x8b3910*/
    v24 = v13; /*0x8b3912*/
    v26 = v13 * v44 + v22; /*0x8b391e*/
    v14 = (v11 + v9) * v11 + v23; /*0x8b3928*/
    v28 = v14; /*0x8b392c*/
    v30 = v14 * v11 + v19; /*0x8b3936*/
    v15 = v44 * v8 + v44 * v8; /*0x8b3940*/
    v32 = v21 * *(float *)&dword_A46C30 + v15 + v8 * v8; /*0x8b3950*/
    v33 = v8 * v8 * *(float *)&dword_A46C30 + v15 + v21; /*0x8b3962*/
    v40 = v12 * (v11 - v9) + *(this + 3); /*0x8b396d*/
    *(this + 3) = v40; /*0x8b3971*/
    v25 = v24 * (v11 - v9) + *(this + 4); /*0x8b397d*/
    *(this + 4) = v25; /*0x8b3981*/
    v41 = v26 * (v11 - v9) + *(this + 6); /*0x8b398d*/
    *(this + 6) = v41; /*0x8b3991*/
    v27 = (v22 * v8 + v26 * v44) * (v11 - v9) + *(this + 9); /*0x8b39a9*/
    *(this + 9) = v27; /*0x8b39ad*/
    v29 = v28 * v20 + *(this + 5); /*0x8b39bb*/
    *(this + 5) = v29; /*0x8b39bf*/
    v42 = v30 * v20 + *(this + 8); /*0x8b39cd*/
    *(this + 8) = v42; /*0x8b39d1*/
    v31 = (v19 * v9 + v30 * v11) * v20 + *(this + 0xC); /*0x8b39e9*/
    *(this + 0xC) = v31; /*0x8b39ed*/
    v43 = (v32 * v11 + v33 * v9) * (v11 - v9) + *(this + 7); /*0x8b3a03*/
    *(this + 7) = v43; /*0x8b3a07*/
    v34 = (v11 - v9) * ((v21 * v44 * flt_A46B10 + v32 * v8) * v11 + (v33 * v44 + v22 * flt_A46B10) * v9) + *(this + 0xA); /*0x8b3a3f*/
    *(this + 0xA) = v34; /*0x8b3a43*/
    v36 = v35 * v9; /*0x8b3a4c*/
    v16 = v23 * v11; /*0x8b3a56*/
    v7 += 4; /*0x8b3a86*/
    v6 += 4; /*0x8b3a8d*/
    result = v38 + 1; /*0x8b3a96*/
    v17 = v39 == 1; /*0x8b3a97*/
    ++v38; /*0x8b3a98*/
    --v39; /*0x8b3a9e*/
    v18 = (v8 * (*(float *)&dword_A46C30 * v16 + v36 + v36 + v19 * flt_A46B10 + v37) /*0x8b3abc*/
         + (v16 + v16 + v36 * *(float *)&dword_A46C30 + v37 * flt_A46B10 + v19) * v44)
        * v20
        + *(this + 0xB);
    *(this + 0xB) = v18; /*0x8b3abf*/
  }
  while ( !v17 ); /*0x8b3ac2*/
  *(this + 3) = v40 * kHeadBodyNormalMatchRadius; /*0x8b3ad6*/
  *(this + 4) = v25 * flt_A97F44; /*0x8b3ae3*/
  *(this + 6) = v41 * flt_A8C5F8; /*0x8b3af0*/
  *(this + 9) = v27 * flt_A43328; /*0x8b3afd*/
  *(this + 5) = v29 * flt_A97F40; /*0x8b3b0a*/
  *(this + 8) = v42 * flt_A97F3C; /*0x8b3b17*/
  *(this + 0xC) = v31 * flt_A641BC; /*0x8b3b24*/
  *(this + 7) = v43 * flt_A97F38; /*0x8b3b31*/
  *(this + 0xA) = v34 * flt_A97F34; /*0x8b3b3e*/
  *(this + 0xB) = v18 * flt_A97F30; /*0x8b3b47*/
  return result; /*0x8b3b4a*/
}
