void __thiscall sub_4D2720(ExtraDataList *this, float *a2)
{
  float v3; // eax
  float v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // edi
  float *v9; // esi
  BSExtraDataVtbl *i; // eax
  double v11; // st7
  double v12; // st7
  int v13; // esi
  float *v14; // edi
  _DWORD *v15; // ecx
  int v16; // esi
  int v17; // ebp
  int v18; // edi
  double v19; // st7
  double v20; // st6
  double v21; // st4
  double v22; // st4
  bool v23; // c0
  bool v24; // c3
  float *v25; // eax
  int v26; // esi
  int v27; // edi
  float *v28; // eax
  int v29; // esi
  float *v30; // edi
  _DWORD *v31; // ecx
  BSExtraDataVtbl *v32; // esi
  _DWORD *v33; // eax
  BSExtraDataVtbl *v34; // eax
  int v35; // eax
  int v36; // ecx
  int *v37; // eax
  int v38; // eax
  void (__thiscall *v39)(ExtraDataList *, int); // eax
  void (__thiscall *v40)(ExtraDataList *, int); // eax
  int v41; // [esp+14h] [ebp-F8h]
  float v42; // [esp+14h] [ebp-F8h]
  float v43; // [esp+18h] [ebp-F4h]
  int v44; // [esp+18h] [ebp-F4h]
  float v45; // [esp+18h] [ebp-F4h]
  int v46; // [esp+1Ch] [ebp-F0h]
  float v47; // [esp+20h] [ebp-ECh]
  float v48; // [esp+20h] [ebp-ECh]
  float v49; // [esp+20h] [ebp-ECh]
  float v50; // [esp+20h] [ebp-ECh]
  float v51; // [esp+24h] [ebp-E8h]
  float v52; // [esp+24h] [ebp-E8h]
  float v53; // [esp+24h] [ebp-E8h]
  float v54; // [esp+28h] [ebp-E4h]
  float v55; // [esp+28h] [ebp-E4h]
  float v56; // [esp+28h] [ebp-E4h]
  unsigned int v57; // [esp+2Ch] [ebp-E0h]
  unsigned int v58; // [esp+2Ch] [ebp-E0h]
  int v59; // [esp+30h] [ebp-DCh]
  int v60; // [esp+30h] [ebp-DCh]
  int v61; // [esp+34h] [ebp-D8h] BYREF
  float v62; // [esp+38h] [ebp-D4h]
  float v63; // [esp+3Ch] [ebp-D0h]
  float v64; // [esp+40h] [ebp-CCh] BYREF
  float v65; // [esp+44h] [ebp-C8h]
  float v66; // [esp+48h] [ebp-C4h]
  float v67; // [esp+4Ch] [ebp-C0h]
  float v68; // [esp+50h] [ebp-BCh]
  BSExtraDataVtbl *v69; // [esp+54h] [ebp-B8h]
  BSExtraDataVtbl *v70; // [esp+58h] [ebp-B4h]
  int v71; // [esp+5Ch] [ebp-B0h]
  int v72; // [esp+60h] [ebp-ACh]
  _DWORD v73[12]; // [esp+64h] [ebp-A8h] BYREF
  char v74[108]; // [esp+94h] [ebp-78h] BYREF
  unsigned int v75; // [esp+108h] [ebp-4h]

  if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
  {
    v3 = *a2;
    v4 = a2[2];
    v62 = a2[1];
    *(float *)&v61 = v3;
    v63 = v4;
    v43 = sub_420C40(this + 2);
    if ( 0.0 == v43 )
    {
      v70 = 0;
      v71 = 0;
      v72 = 0;
      _memset(v73, 0, sizeof(v73));
      v16 = ((int)*(float *)&v61 - 0x800) >> 0xC;
      v17 = 1;
      v18 = ((int)v62 - 0x800) >> 0xC;
      v69 = sub_4CCEE0(this, v16, v18, 1);
      v45 = (float)((v16 << 0xC) + 0x800);
      *(float *)v73 = v45;
      v42 = (float)((v18 << 0xC) + 0x800);
      v19 = v63;
      v60 = 0;
      v64 = v45;
      *(float *)&v73[1] = v42;
      v20 = v45;
      v65 = v42;
      *(float *)&v73[2] = v63;
      v67 = (float)((v16 << 0xC) + 0x1000800);
      v68 = (float)((v18 << 0xC) + 0x1000800);
      if ( v45 < *(float *)&v61 - fSeenDataUpdateRadius )
      {
        v22 = *(float *)&v61 + fSeenDataUpdateRadius;
        v23 = v67 < v22;
        v24 = v67 == v22;
        v21 = fSeenDataUpdateRadius;
        v58 = v23 || v24;
      }
      else
      {
        v21 = fSeenDataUpdateRadius;
        v58 = 0xFFFFFFFF;
      }
      if ( v65 < v62 - v21 )
      {
        if ( v68 <= v21 + v62 )
          v60 = 1;
      }
      else
      {
        v60 = 0xFFFFFFFF;
      }
      if ( v58 )
      {
        v48 = (float)(int)(((v16 + v58) << 0xC) + 0x800);
        *(float *)&v73[3] = v48;
        *(float *)&v73[4] = (float)((v18 << 0xC) + 0x800);
        *(float *)&v73[5] = v63;
        v19 = v63;
        v20 = v45;
        v70 = sub_4CCEE0(this, v16 + v58, v18, 1);
        v17 = 2;
      }
      if ( v60 )
      {
        v49 = v20;
        v25 = (float *)&v73[3 * v17];
        *v25 = v49;
        v52 = (float)(((v18 + v60) << 0xC) + 0x800);
        v55 = v19;
        v25[1] = v52;
        v25[2] = v55;
        v19 = v63;
        *(&v69 + v17++) = sub_4CCEE0(this, v16, v18 + v60, 1);
      }
      if ( v58 )
      {
        if ( v60 )
        {
          v26 = v58 + v16;
          v27 = v60 + v18;
          v50 = (float)((v26 << 0xC) + 0x800);
          v28 = (float *)&v73[3 * v17];
          v53 = (float)((v27 << 0xC) + 0x800);
          *v28 = v50;
          v56 = v19;
          v28[1] = v53;
          v28[2] = v56;
          *(&v69 + v17) = sub_4CCEE0(this, v26, v27, 1);
        }
      }
      v29 = 0;
      v30 = (float *)v73;
      do
      {
        v31 = *(&v69 + v29);
        if ( !v31 )
          break;
        sub_4126C0(v31, (float *)&v61, v30);
        ++v29;
        v30 += 3;
      }
      while ( v29 < 4 );
    }
    else
    {
      sub_4CCE20(this, a2, &v61, COERCE_FLOAT(1));
      memset(v73, 0, 0x24);
      _memset(v74, 0, sizeof(v74));
      v5 = ((int)*(float *)&v61 - 0x800) >> 0xC;
      v67 = *(float *)&v5;
      v6 = ((int)v62 - 0x800) >> 0xC;
      LODWORD(v64) = (v6 << 0xC) - 0x800;
      v7 = 0;
      v44 = v6;
      v57 = 0xFFFFFFFF;
      v46 = (v5 << 0xC) - 0x800;
      while ( 1 )
      {
        v8 = 0xFFFFFFFF;
        v41 = v5 + v57;
        v9 = (float *)&v74[0xC * v7];
        v59 = LODWORD(v64);
        for ( i = sub_4CCEE0(this, v5 + v57, v6 - 1, 1); ; i = sub_4CCEE0(this, v41, v8 + v44, 1) )
        {
          v11 = (double)v59;
          v59 += 0x1000;
          v51 = v11;
          v12 = v63;
          v73[v7] = i;
          v47 = (float)v46;
          *v9 = v47;
          v54 = v12;
          v9[1] = v51;
          v9[2] = v54;
          ++v8;
          ++v7;
          v9 += 3;
          if ( v8 > 1 )
            break;
        }
        v46 += 0x1000;
        if ( (int)++v57 > 1 )
          break;
        *(float *)&v5 = v67;
        v6 = v44;
      }
      v13 = 0;
      v14 = (float *)v74;
      do
      {
        v15 = (_DWORD *)v73[v13];
        if ( !v15 )
          break;
        sub_4126C0(v15, (float *)&v61, v14);
        ++v13;
        v14 += 3;
      }
      while ( v13 < 9 );
    }
  }
  else if ( (*((_BYTE *)this + 0x25) & 1) == 0 )
  {
    v32 = sub_420B50(this + 2);
    if ( !v32 )
    {
      v33 = (_DWORD *)FormHeapAlloc(0x24u);
      v75 = 0;
      if ( v33 )
        v34 = (BSExtraDataVtbl *)SeenData::SeenData__(v33);
      else
        v34 = 0;
      v75 = 0xFFFFFFFF;
      v32 = v34;
      sub_420B70(this + 2, v34);
      (*((void (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x12))(this, 0x10000000);
    }
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 || (v35 = *((_DWORD *)this + 0xF)) == 0 )
      v36 = 0;
    else
      v36 = *(_DWORD *)(v35 + 4);
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 || (v37 = *((int **)this + 0xF)) == 0 )
      v38 = 0;
    else
      v38 = *v37;
    v64 = (float)(v38 << 0xC);
    v65 = (float)(v36 << 0xC);
    v66 = a2[2];
    if ( sub_4126C0(v32, a2, &v64) )
    {
      sub_420B70(this + 2, 0);
      v39 = *((void (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x11);
      *((_BYTE *)this + 0x25) &= ~1u;
      v39(this, 0x16000000);
      v40 = *((void (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10);
      *((_BYTE *)this + 0x25) |= 1u;
      v40(this, 8);
    }
  }
}
