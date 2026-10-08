int __thiscall sub_75ACE0(_WORD *this, int a2, int a3)
{
  int v3; // ebx
  unsigned __int16 v4; // di
  int result; // eax
  float z; // edx
  NiRTTI *v8; // eax
  int v9; // ecx
  int v10; // edi
  float *v11; // eax
  int v12; // ebp
  double v13; // st7
  int v14; // ecx
  double v15; // st6
  double v16; // st5
  float *v17; // edx
  int v18; // eax
  float *v19; // ebp
  double v20; // st4
  float *v21; // ecx
  double v22; // rtt
  double v23; // st7
  int v24; // edx
  int v25; // ecx
  float *v26; // eax
  int v27; // eax
  int v28; // ebp
  float *v29; // ecx
  double v30; // st6
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  float v34; // [esp+14h] [ebp-48h]
  float v35; // [esp+18h] [ebp-44h]
  float v36; // [esp+1Ch] [ebp-40h]
  float v37; // [esp+20h] [ebp-3Ch]
  float v38; // [esp+24h] [ebp-38h]
  int v39; // [esp+28h] [ebp-34h]
  int i; // [esp+2Ch] [ebp-30h]
  float v41; // [esp+34h] [ebp-28h]
  float v42; // [esp+38h] [ebp-24h]
  float v43; // [esp+3Ch] [ebp-20h]
  float v44; // [esp+40h] [ebp-1Ch]
  float v45; // [esp+40h] [ebp-1Ch]
  float v46; // [esp+44h] [ebp-18h]
  float v47; // [esp+44h] [ebp-18h]
  float v48; // [esp+48h] [ebp-14h]
  float v49; // [esp+48h] [ebp-14h]
  int v50; // [esp+4Ch] [ebp-10h] BYREF
  int v51; // [esp+50h] [ebp-Ch]
  int v52; // [esp+54h] [ebp-8h]
  float v53; // [esp+58h] [ebp-4h]
  float v54; // [esp+60h] [ebp+4h]
  float v55; // [esp+60h] [ebp+4h]
  float v56; // [esp+60h] [ebp+4h]
  float v57; // [esp+60h] [ebp+4h]
  float v58; // [esp+60h] [ebp+4h]
  float v59; // [esp+60h] [ebp+4h]
  float v60; // [esp+60h] [ebp+4h]
  float v61; // [esp+64h] [ebp+8h]
  float v62; // [esp+64h] [ebp+8h]
  float v63; // [esp+64h] [ebp+8h]
  int v64; // [esp+64h] [ebp+8h]

  v3 = a3; /*0x75ace4*/
  v4 = *(_WORD *)(a3 + 0x48); /*0x75acea*/
  if ( v4 ) /*0x75acf3*/
  {
    v8 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3); /*0x75ad2a*/
    if ( v8 ) /*0x75ad2e*/
    {
      while ( v8 != &stru_B41C4C ) /*0x75ad35*/
      {
        v8 = v8->parent; /*0x75ad3b*/
        if ( !v8 ) /*0x75ad40*/
          goto LABEL_6; /*0x75ad40*/
      }
      return sub_75AA90(this, a2, a3); /*0x75ae12*/
    }
    else
    {
LABEL_6:
      if ( *(this + 0xC) == 0xFFFF ) /*0x75ad47*/
        sub_75A870((int)this, *(_WORD *)(a3 + 8) / 0x32u + 1); /*0x75ad63*/
      v9 = v4; /*0x75ad68*/
      v10 = (__int16)*(this + 0xC); /*0x75ad6b*/
      v39 = v9; /*0x75ad84*/
      if ( v10 >= v9 / 0x32 + 1 ) /*0x75ad88*/
        v10 = v9 / 0x32 + 1; /*0x75ad8a*/
      if ( v10 <= 1 ) /*0x75ad8f*/
        v10 = 1; /*0x75ad91*/
      v11 = *(float **)(a3 + 0x1C); /*0x75ad96*/
      v12 = *(_DWORD *)(a3 + 0x44); /*0x75ada6*/
      v34 = v11[1]; /*0x75ada9*/
      v35 = v11[2]; /*0x75adb0*/
      v13 = *v11; /*0x75adb4*/
      v14 = (unsigned __int16)*(this + 0xD); /*0x75adbc*/
      v36 = *v11; /*0x75adc0*/
      v15 = v34; /*0x75adc8*/
      v37 = v34; /*0x75adcc*/
      v16 = v35; /*0x75add4*/
      v38 = v35; /*0x75add8*/
      if ( v14 < v39 ) /*0x75addc*/
      {
        v17 = &v11[3 * v14]; /*0x75adf2*/
        v18 = *(_DWORD *)(a3 + 0x4C) - v12; /*0x75adfb*/
        v19 = (float *)(v12 + 4 * v14); /*0x75adfd*/
        for ( i = v18; ; v18 = i ) /*0x75ae01*/
        {
          v54 = *(float *)((char *)v19 + v18) * *v19; /*0x75ae2a*/
          v20 = v54; /*0x75ae38*/
          v55 = *v17 - v54; /*0x75ae3a*/
          if ( v55 <= v13 ) /*0x75ae49*/
            v13 = v55; /*0x75ae57*/
          v56 = v20 + *v17; /*0x75ae5d*/
          if ( v56 >= (double)v36 ) /*0x75ae72*/
            v36 = v20 + *v17; /*0x75ae74*/
          v57 = v17[1] - v20; /*0x75ae85*/
          if ( v57 <= v15 ) /*0x75ae94*/
            v15 = v57; /*0x75aea2*/
          v58 = v17[1] + v20; /*0x75aea9*/
          if ( v58 >= (double)v37 ) /*0x75aebe*/
            v37 = v17[1] + v20; /*0x75aec0*/
          v59 = v17[2] - v20; /*0x75aed1*/
          if ( v59 <= v16 ) /*0x75aee0*/
            v16 = v59; /*0x75aeee*/
          v60 = v20 + v17[2]; /*0x75aef3*/
          if ( v60 >= (double)v38 ) /*0x75af08*/
            v38 = v20 + v17[2]; /*0x75af0a*/
          v14 += v10; /*0x75af1d*/
          v17 += 3 * v10; /*0x75af1f*/
          v19 += v10; /*0x75af21*/
          if ( v14 >= v39 ) /*0x75af27*/
            break; /*0x75af27*/
        }
        v14 = (unsigned __int16)*(this + 0xD); /*0x75af2d*/
        v3 = a3; /*0x75af31*/
      }
      v21 = (float *)(*((_DWORD *)this + 7) + 0x10 * v14); /*0x75af3e*/
      v41 = v36 + v13; /*0x75af43*/
      v42 = v37 + v15; /*0x75af4f*/
      v43 = v38 + v16; /*0x75af5b*/
      v22 = dbl_A2FAA0; /*0x75af6b*/
      v44 = v41 * v22; /*0x75af6d*/
      *v21 = v44; /*0x75af79*/
      v46 = v42 * v22; /*0x75af7d*/
      v21[1] = v46; /*0x75af85*/
      v48 = v22 * v43; /*0x75af8c*/
      v21[2] = v48; /*0x75af96*/
      v45 = v36 - v13; /*0x75af9d*/
      v47 = v37 - v15; /*0x75afa7*/
      v49 = v38 - v16; /*0x75afad*/
      v61 = v47 * v47 + v45 * v45 + v49 * v49; /*0x75afcd*/
      v62 = sqrt(v61); /*0x75afda*/
      v63 = v62 * dbl_A2FAA0; /*0x75aff2*/
      *(float *)(0x10 * (unsigned __int16)*(this + 0xD) + *((_DWORD *)this + 7) + 0xC) = v63; /*0x75affa*/
      v23 = 0.0; /*0x75b004*/
      v24 = v10; /*0x75b006*/
      if ( v10 < (__int16)*(this + 0xC) ) /*0x75b008*/
      {
        v25 = 0x10 * v10; /*0x75b00c*/
        do /*0x75b041*/
        {
          v26 = (float *)(v25 + *((_DWORD *)this + 7)); /*0x75b018*/
          *v26 = g_zeroNiPoint3.x; /*0x75b01a*/
          v26[1] = g_zeroNiPoint3.y; /*0x75b022*/
          v26[2] = g_zeroNiPoint3.z; /*0x75b02b*/
          *(float *)(*((_DWORD *)this + 7) + v25 + 0xC) = 0.0; /*0x75b031*/
          ++v24; /*0x75b039*/
          v25 += 0x10; /*0x75b03c*/
        }
        while ( v24 < (__int16)*(this + 0xC) ); /*0x75b041*/
      }
      v27 = 0x10 * (unsigned __int16)*(this + 0xD) + *((_DWORD *)this + 7); /*0x75b050*/
      v50 = *(_DWORD *)v27; /*0x75b055*/
      v51 = *(_DWORD *)(v27 + 4); /*0x75b05c*/
      v52 = *(_DWORD *)(v27 + 8); /*0x75b063*/
      v53 = *(float *)(v27 + 0xC); /*0x75b06a*/
      if ( v10 > 1 ) /*0x75b06e*/
      {
        v28 = 0x10; /*0x75b073*/
        v64 = v10 - 1; /*0x75b078*/
        do /*0x75b0a3*/
        {
          v29 = (float *)(*((_DWORD *)this + 7) + v28); /*0x75b083*/
          if ( v23 != v29[3] ) /*0x75b08b*/
          {
            NiSphere_Merge((float *)&v50, v29); /*0x75b094*/
            v23 = 0.0; /*0x75b099*/
          }
          v28 += 0x10; /*0x75b09b*/
          --v64; /*0x75b09e*/
        }
        while ( v64 ); /*0x75b0a3*/
      }
      v30 = v53; /*0x75b0a5*/
      v31 = v50; /*0x75b0a9*/
      v32 = v51; /*0x75b0ad*/
      *(float *)(v3 + 0x18) = v53; /*0x75b0b1*/
      v33 = v52; /*0x75b0b4*/
      *(_DWORD *)(v3 + 0xC) = v31; /*0x75b0ba*/
      *(_DWORD *)(v3 + 0x10) = v32; /*0x75b0bd*/
      *(_DWORD *)(v3 + 0x14) = v33; /*0x75b0c0*/
      if ( v30 == v23 ) /*0x75b0c9*/
        *(float *)(v3 + 0x18) = **(float **)(v3 + 0x44) * **(float **)(v3 + 0x4C); /*0x75b0d5*/
      result = (unsigned __int16)++*(this + 0xD); /*0x75b0e1*/
      if ( result >= v10 ) /*0x75b0e6*/
        *(this + 0xD) = 0; /*0x75b0e8*/
    }
  }
  else
  {
    result = LODWORD(g_zeroNiPoint3.x); /*0x75acf5*/
    *(float *)(a3 + 0xC) = g_zeroNiPoint3.x; /*0x75acfc*/
    *(float *)(a3 + 0x10) = g_zeroNiPoint3.y; /*0x75ad05*/
    z = g_zeroNiPoint3.z; /*0x75ad08*/
    *(float *)(a3 + 0x18) = 0.0; /*0x75ad0e*/
    *(float *)(a3 + 0x14) = z; /*0x75ad11*/
    *(this + 0xD) = 0; /*0x75ad15*/
  }
  return result; /*0x75ad14*/
}
