char __thiscall sub_74BCD0(float *this, NiPoint3 *a2, NiPoint3 *a3, NiPoint3 *a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  int v7; // esi
  float x; // edi
  int v9; // eax
  int v10; // ebx
  int v12; // ecx
  int v13; // edx
  double v14; // st7
  int v15; // esi
  float v16; // edi
  double v17; // st6
  float v18; // eax
  double v19; // st5
  double v22; // st4
  double v23; // st3
  double v24; // st3
  float v25; // eax
  float v26; // ecx
  float v27; // eax
  float v28; // ecx
  float v29; // edx
  double v30; // st6
  float v31; // ecx
  float v32; // edx
  double v33; // st6
  double v34; // st7
  double v35; // st6
  float v36; // eax
  double v37; // st5
  double v38; // rt1
  double v39; // st5
  double v40; // rt2
  float *v41; // esi
  double v42; // st7
  double v43; // st7
  int v44; // eax
  int v45; // [esp+10h] [ebp-68h] BYREF
  int v46; // [esp+14h] [ebp-64h] BYREF
  int v47; // [esp+18h] [ebp-60h] BYREF
  int i; // [esp+1Ch] [ebp-5Ch]
  float *v49; // [esp+20h] [ebp-58h]
  float v50; // [esp+24h] [ebp-54h] BYREF
  float v51; // [esp+28h] [ebp-50h]
  float v52; // [esp+2Ch] [ebp-4Ch]
  float v53; // [esp+30h] [ebp-48h]
  float v54; // [esp+34h] [ebp-44h]
  float v55; // [esp+38h] [ebp-40h]
  float v56; // [esp+3Ch] [ebp-3Ch]
  float v57; // [esp+40h] [ebp-38h]
  float v58; // [esp+44h] [ebp-34h]
  float v59; // [esp+48h] [ebp-30h]
  float v60; // [esp+4Ch] [ebp-2Ch]
  float v61; // [esp+50h] [ebp-28h]
  float v62; // [esp+54h] [ebp-24h]
  float v63; // [esp+58h] [ebp-20h]
  float v64; // [esp+5Ch] [ebp-1Ch]
  float v65; // [esp+60h] [ebp-18h]
  float v66; // [esp+64h] [ebp-14h]
  float v67; // [esp+68h] [ebp-10h]
  float v68; // [esp+6Ch] [ebp-Ch]
  float v69; // [esp+70h] [ebp-8h]
  float v70; // [esp+74h] [ebp-4h]
  float v71; // [esp+80h] [ebp+8h]
  float v72; // [esp+84h] [ebp+Ch]
  float v73; // [esp+84h] [ebp+Ch]
  float v74; // [esp+84h] [ebp+Ch]
  float v75; // [esp+84h] [ebp+Ch]

  v49 = this;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  if ( !a2 )
    return 0;
  if ( (*(int (__thiscall **)(NiPoint3 *))(LODWORD(a2->x) + 0x10))(a2) )
  {
    v5 = (*(unsigned __int16 (__thiscall **)(_DWORD *))(*(_DWORD *)LODWORD(a2[0xF].x) + 0x5C))((_DWORD *)LODWORD(a2[0xF].x));
    v6 = rand();
    v7 = v6 % v5;
    if ( v6 % v5 == v5 )
      v7 = v5 - 1;
    for ( i = 0; i < 6; ++i )
    {
      (*(void (__thiscall **)(_DWORD *, int, int *, int *, int *))(*(_DWORD *)LODWORD(a2[0xF].x) + 0x60))(
        (_DWORD *)LODWORD(a2[0xF].x),
        v7,
        &v45,
        &v46,
        &v47);
      if ( (_WORD)v45 != (_WORD)v46 && (_WORD)v45 != (_WORD)v47 && (_WORD)v46 != (_WORD)v47 )
        break;
      if ( ++v7 >= v5 )
        v7 = 0;
    }
    x = a2[0xF].x;
    v9 = *(_DWORD *)(LODWORD(x) + 0x1C);
    v10 = *(_DWORD *)(LODWORD(x) + 0x20);
    if ( !v9 )
      return 0;
    v12 = 0xC * (unsigned __int16)v45;
    v53 = *(float *)(v12 + v9);
    v54 = *(float *)(v12 + v9 + 4);
    v55 = *(float *)(v12 + v9 + 8);
    v13 = 0xC * (unsigned __int16)v46;
    v56 = *(float *)(v13 + v9);
    v57 = *(float *)(v13 + v9 + 4);
    v58 = *(float *)(v13 + v9 + 8);
    v14 = v53;
    v50 = v56 + v53;
    v15 = 0xC * (unsigned __int16)v47;
    v59 = *(float *)(v15 + v9);
    v16 = *(float *)(v15 + v9 + 4);
    v17 = v54;
    v18 = *(float *)(v15 + v9 + 8);
    v51 = v57 + v54;
    v60 = v16;
    v19 = v55;
    v61 = v18;
    v52 = v55 + v58;
    v62 = v50 + v59;
    v63 = v60 + v51;
    v64 = v18 + v52;
    v22 = dbl_A7C030;
    v50 = v62 * v22;
    v23 = v63;
    a3->x = v50;
    v51 = v23 * v22;
    v24 = v64;
    a3->y = v51;
    v52 = v24 * v22;
    a3->z = v52;
    if ( !*((_DWORD *)v49 + 0x1C) )
    {
      if ( v10 )
      {
        v62 = *(float *)(v12 + v10);
        v25 = *(float *)(v12 + v10 + 4);
        v26 = *(float *)(v12 + v10 + 8);
        v63 = v25;
        v50 = *(float *)(v13 + v10);
        v27 = *(float *)(v15 + v10);
        v64 = v26;
        v28 = *(float *)(v13 + v10 + 4);
        v29 = *(float *)(v13 + v10 + 8);
        v68 = v50 + v62;
        v51 = v28;
        v30 = v63 + v28;
        v31 = *(float *)(v15 + v10 + 4);
        v52 = v29;
        v32 = *(float *)(v15 + v10 + 8);
        v69 = v30;
        v65 = v27;
        v66 = v31;
        v67 = v32;
        v70 = v64 + v52;
        v62 = v68 + v27;
        v63 = v31 + v69;
        v64 = v32 + v70;
        v50 = v62 * v22;
        v51 = v63 * v22;
        v52 = v22 * v64;
        sub_4BFAA0(&v50);
        v72 = a4->y * a4->y + a4->x * a4->x + a4->z * a4->z;
        v73 = sqrt(v72);
        v68 = v50 * v73;
        v33 = v51;
        a4->x = v68;
        v69 = v33 * v73;
        v70 = v73 * v52;
        v34 = v55;
        v35 = v53;
        v36 = v70;
        v37 = v54;
        a4->y = v69;
        v38 = v37;
        v39 = v35;
        v17 = v38;
        a4->z = v36;
        v40 = v39;
        v19 = v34;
        v14 = v40;
      }
    }
    v41 = v49;
    if ( *((_DWORD *)v49 + 0x1D) == 3 )
    {
      v50 = v56 - v14;
      v51 = v57 - v17;
      v52 = v58 - v19;
      v56 = v59 - v14;
      v57 = v60 - v17;
      v58 = v61 - v19;
      v74 = (double)rand() / dbl_A3D5A8;
      v50 = v50 * v74;
      v51 = v51 * v74;
      v52 = v74 * v52;
      v71 = (double)rand() / dbl_A3D5A8;
      v75 = v71 * (1.0 - v74);
      v56 = v56 * v75;
      v57 = v57 * v75;
      v58 = v75 * v58;
      v68 = v50 + v53;
      v69 = v51 + v54;
      v70 = v52 + v55;
      v65 = v68 + v56;
      v42 = v69;
      a3->x = v65;
      v66 = v42 + v57;
      v43 = v70;
      a3->y = v66;
      v67 = v43 + v58;
      a3->z = v67;
      sub_74A0A0(v41, a2, a3, a4);
    }
    else
    {
      sub_74A0A0(v49, a2, a3, a4);
    }
    return 1;
  }
  v44 = (*(int (__thiscall **)(NiPoint3 *))(LODWORD(a2->x) + 4))(a2);
  if ( !v44 )
    return 0;
  while ( (char *)v44 != dword_B3FCDC )
  {
    v44 = *(_DWORD *)(v44 + 4);
    if ( !v44 )
      return 0;
  }
  return sub_74AE30(this, *(float *)&a2, a3, a4);
}
