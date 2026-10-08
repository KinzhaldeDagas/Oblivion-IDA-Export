void __thiscall sub_74EE70(float *this, float a2, unsigned __int16 a3, int a4)
{
  int v5; // ebp
  int v6; // edi
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // ax
  bool v9; // cf
  unsigned __int16 v10; // cx
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  float *v15; // eax
  double v16; // st7
  int v17; // [esp+Ch] [ebp-4Ch]
  float v18; // [esp+10h] [ebp-48h]
  float v19; // [esp+14h] [ebp-44h]
  float v20; // [esp+14h] [ebp-44h]
  float v21; // [esp+18h] [ebp-40h]
  float v22; // [esp+18h] [ebp-40h]
  float v23; // [esp+18h] [ebp-40h]
  float v24; // [esp+1Ch] [ebp-3Ch]
  float v25; // [esp+20h] [ebp-38h]
  float v26; // [esp+20h] [ebp-38h]
  int v27; // [esp+24h] [ebp-34h]
  int i; // [esp+28h] [ebp-30h]
  float v29; // [esp+2Ch] [ebp-2Ch]
  float v30; // [esp+2Ch] [ebp-2Ch]
  float v31; // [esp+2Ch] [ebp-2Ch]
  float v32; // [esp+30h] [ebp-28h]
  float v33; // [esp+30h] [ebp-28h]
  int v34; // [esp+34h] [ebp-24h]
  int v35; // [esp+38h] [ebp-20h]
  int v36; // [esp+3Ch] [ebp-1Ch]
  float v37; // [esp+40h] [ebp-18h]
  float v38; // [esp+44h] [ebp-14h]
  float v39; // [esp+4Ch] [ebp-Ch]
  float v40; // [esp+50h] [ebp-8h]
  float v41; // [esp+54h] [ebp-4h]

  v5 = *(_DWORD *)(*((_DWORD *)this + 4) + 0xB4); /*0x74ee7a*/
  v6 = 0; /*0x74ee8a*/
  v34 = *(_DWORD *)(v5 + 0x1C); /*0x74ee91*/
  v35 = *(_DWORD *)(v5 + 0x24); /*0x74ee98*/
  v27 = *(_DWORD *)(v5 + 0x44); /*0x74ee9c*/
  v36 = *(_DWORD *)(v5 + 0x4C); /*0x74eea0*/
  for ( i = 0; (unsigned __int16)v6 < a3; i = ++v6 ) /*0x74eea8*/
  {
    v24 = *(float *)(a4 + 4 * (unsigned __int16)v6); /*0x74eeba*/
    v25 = (double)rand() / dbl_A3D5A8; /*0x74eed1*/
    v26 = (v25 - dbl_A2FAA0) * *(this + 0x13) + *(this + 0x12); /*0x74eee5*/
    if ( v26 >= (double)v24 ) /*0x74eef8*/
    {
      v7 = *(_WORD *)(v5 + 0x64); /*0x74eefe*/
      if ( v7 ) /*0x74ef05*/
      {
        v10 = *(_WORD *)(v5 + 0x66); /*0x74ef28*/
        if ( v7 + v10 >= *(unsigned __int16 *)(v5 + 8) ) /*0x74ef3a*/
          return; /*0x74ef3a*/
        *(_WORD *)(v5 + 0x64) = v7 + 1; /*0x74ef48*/
        v17 = (unsigned __int16)(v7 + v10); /*0x74ef4c*/
        v8 = v7 + v10; /*0x74ef50*/
      }
      else
      {
        v8 = *(_WORD *)(v5 + 0x48); /*0x74ef07*/
        v9 = v8 < *(_WORD *)(v5 + 8); /*0x74ef0b*/
        *(_WORD *)(v5 + 0x66) = v8; /*0x74ef0f*/
        if ( !v9 ) /*0x74ef13*/
          return; /*0x74ef13*/
        v17 = v8; /*0x74ef1c*/
        *(_WORD *)(v5 + 0x64) = 1; /*0x74ef20*/
      }
      if ( v8 == word_A877E8 ) /*0x74ef59*/
        return; /*0x74ef59*/
      v11 = v8; /*0x74ef5f*/
      v12 = *(_DWORD *)(v5 + 0x5C) + 0x1C * v8; /*0x74ef6e*/
      v21 = (double)rand() / dbl_A3D5A8; /*0x74ef84*/
      v32 = (v21 - dbl_A2FAA0) * *(this + 7) + *(this + 6); /*0x74ef98*/
      v13 = rand(); /*0x74ef9c*/
      v22 = ((double)v13 + (double)v13) / dbl_A3D5A8 - dbl_A2F928; /*0x74efb7*/
      v23 = *(this + 9) * v22 + *(this + 8); /*0x74efc5*/
      v14 = rand(); /*0x74efc9*/
      v19 = ((double)v14 + (double)v14) / dbl_A3D5A8 - dbl_A2F928; /*0x74efe4*/
      v18 = *(this + 0xB) * v19 + *(this + 0xA); /*0x74eff2*/
      v20 = sin(v23); /*0x74efff*/
      v29 = cos(v18); /*0x74f014*/
      v37 = v29 * v20; /*0x74f020*/
      v30 = sin(v18); /*0x74f02d*/
      v38 = v30 * v20; /*0x74f039*/
      v31 = cos(v23); /*0x74f046*/
      *(_WORD *)(v12 + 0x18) = 0; /*0x74f04e*/
      v39 = v37 * v32; /*0x74f066*/
      *(float *)v12 = v39; /*0x74f072*/
      v40 = v38 * v32; /*0x74f076*/
      *(float *)(v12 + 4) = v40; /*0x74f07e*/
      v41 = v32 * v31; /*0x74f085*/
      *(float *)(v12 + 8) = v41; /*0x74f091*/
      *(float *)(v12 + 0xC) = v24; /*0x74f094*/
      *(float *)(v12 + 0x10) = v26; /*0x74f09b*/
      (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)this + 0x60))(this, v34 + 0xC * v11, v12); /*0x74f0b1*/
      if ( v35 ) /*0x74f0b9*/
      {
        v15 = (float *)(v35 + 0x10 * v11); /*0x74f0c0*/
        *v15 = *(this + 0xC); /*0x74f0c5*/
        v15[1] = *(this + 0xD); /*0x74f0ca*/
        v15[2] = *(this + 0xE); /*0x74f0d0*/
        v15[3] = *(this + 0xF); /*0x74f0d6*/
      }
      if ( v27 ) /*0x74f0de*/
      {
        v16 = (double)rand(); /*0x74f0e9*/
        v33 = (v16 + v16) / dbl_A3D5A8 - dbl_A2F928; /*0x74f0ff*/
        *(float *)(v27 + 4 * v11) = *(this + 0x11) * v33 + *(this + 0x10); /*0x74f10d*/
      }
      if ( v36 ) /*0x74f116*/
        *(float *)(v36 + 4 * v11) = 1.0; /*0x74f11a*/
      *(float *)(v12 + 0x14) = a2 - *(float *)(v12 + 0xC); /*0x74f129*/
      sub_749510(*((_DWORD **)this + 4), v17); /*0x74f12f*/
      v6 = i; /*0x74f134*/
    }
  }
}
