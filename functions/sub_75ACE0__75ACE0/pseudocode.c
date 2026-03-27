int __thiscall sub_75ACE0(_WORD *this, int a2, int a3)
{
  int v3; // ebx
  unsigned __int16 v4; // di
  int result; // eax
  float v7; // edx
  int v8; // eax
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

  v3 = a3;
  v4 = *(_WORD *)(a3 + 0x48);
  if ( v4 )
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    if ( v8 )
    {
      while ( (char *)v8 != dword_B41C4C )
      {
        v8 = *(_DWORD *)(v8 + 4);
        if ( !v8 )
          goto LABEL_6;
      }
      return sub_75AA90(this, a2, a3);
    }
    else
    {
LABEL_6:
      if ( *(this + 0xC) == 0xFFFF )
        sub_75A870((int)this, *(_WORD *)(a3 + 8) / 0x32u + 1);
      v9 = v4;
      v10 = (__int16)*(this + 0xC);
      v39 = v9;
      if ( v10 >= v9 / 0x32 + 1 )
        v10 = v9 / 0x32 + 1;
      if ( v10 <= 1 )
        v10 = 1;
      v11 = *(float **)(a3 + 0x1C);
      v12 = *(_DWORD *)(a3 + 0x44);
      v34 = v11[1];
      v35 = v11[2];
      v13 = *v11;
      v14 = (unsigned __int16)*(this + 0xD);
      v36 = *v11;
      v15 = v34;
      v37 = v34;
      v16 = v35;
      v38 = v35;
      if ( v14 < v39 )
      {
        v17 = &v11[3 * v14];
        v18 = *(_DWORD *)(a3 + 0x4C) - v12;
        v19 = (float *)(v12 + 4 * v14);
        for ( i = v18; ; v18 = i )
        {
          v54 = *(float *)((char *)v19 + v18) * *v19;
          v20 = v54;
          v55 = *v17 - v54;
          if ( v55 <= v13 )
            v13 = v55;
          v56 = v20 + *v17;
          if ( v56 >= (double)v36 )
            v36 = v20 + *v17;
          v57 = v17[1] - v20;
          if ( v57 <= v15 )
            v15 = v57;
          v58 = v17[1] + v20;
          if ( v58 >= (double)v37 )
            v37 = v17[1] + v20;
          v59 = v17[2] - v20;
          if ( v59 <= v16 )
            v16 = v59;
          v60 = v20 + v17[2];
          if ( v60 >= (double)v38 )
            v38 = v20 + v17[2];
          v14 += v10;
          v17 += 3 * v10;
          v19 += v10;
          if ( v14 >= v39 )
            break;
        }
        v14 = (unsigned __int16)*(this + 0xD);
        v3 = a3;
      }
      v21 = (float *)(*((_DWORD *)this + 7) + 0x10 * v14);
      v41 = v36 + v13;
      v42 = v37 + v15;
      v43 = v38 + v16;
      v22 = dbl_A2FAA0;
      v44 = v41 * v22;
      *v21 = v44;
      v46 = v42 * v22;
      v21[1] = v46;
      v48 = v22 * v43;
      v21[2] = v48;
      v45 = v36 - v13;
      v47 = v37 - v15;
      v49 = v38 - v16;
      v61 = v47 * v47 + v45 * v45 + v49 * v49;
      v62 = sqrt(v61);
      v63 = v62 * dbl_A2FAA0;
      *(float *)(0x10 * (unsigned __int16)*(this + 0xD) + *((_DWORD *)this + 7) + 0xC) = v63;
      v23 = 0.0;
      v24 = v10;
      if ( v10 < (__int16)*(this + 0xC) )
      {
        v25 = 0x10 * v10;
        do
        {
          v26 = (float *)(v25 + *((_DWORD *)this + 7));
          *v26 = Vector3_InitValue_;
          v26[1] = *(&Vector3_InitValue_ + 1);
          v26[2] = dword_B3F9B0;
          *(float *)(*((_DWORD *)this + 7) + v25 + 0xC) = 0.0;
          ++v24;
          v25 += 0x10;
        }
        while ( v24 < (__int16)*(this + 0xC) );
      }
      v27 = 0x10 * (unsigned __int16)*(this + 0xD) + *((_DWORD *)this + 7);
      v50 = *(_DWORD *)v27;
      v51 = *(_DWORD *)(v27 + 4);
      v52 = *(_DWORD *)(v27 + 8);
      v53 = *(float *)(v27 + 0xC);
      if ( v10 > 1 )
      {
        v28 = 0x10;
        v64 = v10 - 1;
        do
        {
          v29 = (float *)(*((_DWORD *)this + 7) + v28);
          if ( v23 != v29[3] )
          {
            sub_72A6B0((float *)&v50, v29);
            v23 = 0.0;
          }
          v28 += 0x10;
          --v64;
        }
        while ( v64 );
      }
      v30 = v53;
      v31 = v50;
      v32 = v51;
      *(float *)(v3 + 0x18) = v53;
      v33 = v52;
      *(_DWORD *)(v3 + 0xC) = v31;
      *(_DWORD *)(v3 + 0x10) = v32;
      *(_DWORD *)(v3 + 0x14) = v33;
      if ( v30 == v23 )
        *(float *)(v3 + 0x18) = **(float **)(v3 + 0x44) * **(float **)(v3 + 0x4C);
      result = (unsigned __int16)++*(this + 0xD);
      if ( result >= v10 )
        *(this + 0xD) = 0;
    }
  }
  else
  {
    result = LODWORD(Vector3_InitValue_);
    *(float *)(a3 + 0xC) = Vector3_InitValue_;
    *(float *)(a3 + 0x10) = *(&Vector3_InitValue_ + 1);
    v7 = dword_B3F9B0;
    *(float *)(a3 + 0x18) = 0.0;
    *(float *)(a3 + 0x14) = v7;
    *(this + 0xD) = 0;
  }
  return result;
}
