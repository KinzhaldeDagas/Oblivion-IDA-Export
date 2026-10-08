void __thiscall sub_6D5300(int this)
{
  int v1; // edx
  float *v2; // esi
  int v3; // edi
  unsigned __int8 v4; // bl
  int v5; // eax
  double v6; // st7
  float *v7; // esi
  float *v8; // esi
  int v9; // edi
  unsigned __int8 v10; // bl
  int v11; // eax
  double v12; // st7
  float *v13; // esi
  float *v14; // esi
  int v15; // edi
  unsigned __int8 v16; // bl
  int v17; // eax
  double v18; // st7
  float *v19; // esi
  int v20; // esi
  unsigned __int8 v21; // bl
  float *v22; // edx
  int v23; // eax
  double v24; // st7
  float *v25; // edx

  v1 = *(_DWORD *)(this + 0x50); /*0x6d5306*/
  *(float *)(this + 0x14) = flt_A32048; /*0x6d530b*/
  *(float *)(this + 0x18) = flt_A3B888; /*0x6d5316*/
  if ( v1 ) /*0x6d531a*/
  {
    v2 = *(float **)(v1 + 0xC); /*0x6d5320*/
    v3 = *(_DWORD *)(v1 + 8); /*0x6d5325*/
    v4 = *(_BYTE *)(v1 + 0x48); /*0x6d5328*/
    if ( v2 ) /*0x6d532b*/
    {
      if ( *v2 < dbl_A3A5B0 ) /*0x6d533a*/
        *(float *)(this + 0x14) = *v2; /*0x6d533e*/
      v5 = (v3 - 1) * v4; /*0x6d5347*/
      v6 = *(float *)((char *)v2 + v5); /*0x6d534a*/
      v7 = (float *)((char *)v2 + v5); /*0x6d5353*/
      if ( v6 > dbl_A40398 ) /*0x6d535a*/
        *(float *)(this + 0x18) = *v7; /*0x6d535e*/
    }
    v8 = *(float **)(v1 + 0x18); /*0x6d5369*/
    v9 = *(_DWORD *)(v1 + 0x14); /*0x6d536e*/
    v10 = *(_BYTE *)(v1 + 0x49); /*0x6d5371*/
    if ( v8 ) /*0x6d5374*/
    {
      if ( *(float *)(this + 0x14) > (double)*v8 ) /*0x6d5382*/
        *(float *)(this + 0x14) = *v8; /*0x6d5386*/
      v11 = (v9 - 1) * v10; /*0x6d538f*/
      v12 = *(float *)((char *)v8 + v11); /*0x6d5392*/
      v13 = (float *)((char *)v8 + v11); /*0x6d539a*/
      if ( *(float *)(this + 0x18) < v12 ) /*0x6d53a1*/
        *(float *)(this + 0x18) = *v13; /*0x6d53a5*/
    }
    v14 = *(float **)(v1 + 0x24); /*0x6d53b0*/
    v15 = *(_DWORD *)(v1 + 0x20); /*0x6d53b5*/
    v16 = *(_BYTE *)(v1 + 0x4A); /*0x6d53b8*/
    if ( v14 ) /*0x6d53bb*/
    {
      if ( *(float *)(this + 0x14) > (double)*v14 ) /*0x6d53c9*/
        *(float *)(this + 0x14) = *v14; /*0x6d53cd*/
      v17 = (v15 - 1) * v16; /*0x6d53d6*/
      v18 = *(float *)((char *)v14 + v17); /*0x6d53d9*/
      v19 = (float *)((char *)v14 + v17); /*0x6d53e1*/
      if ( *(float *)(this + 0x18) < v18 ) /*0x6d53e8*/
        *(float *)(this + 0x18) = *v19; /*0x6d53ec*/
    }
    v20 = *(_DWORD *)(v1 + 0x2C); /*0x6d53f3*/
    v21 = *(_BYTE *)(v1 + 0x4B); /*0x6d53f6*/
    v22 = *(float **)(v1 + 0x30); /*0x6d53f9*/
    if ( v22 ) /*0x6d53fe*/
    {
      if ( *(float *)(this + 0x14) > (double)*v22 ) /*0x6d540c*/
        *(float *)(this + 0x14) = *v22; /*0x6d5410*/
      v23 = (v20 - 1) * v21; /*0x6d5419*/
      v24 = *(float *)((char *)v22 + v23); /*0x6d541c*/
      v25 = (float *)((char *)v22 + v23); /*0x6d5424*/
      if ( *(float *)(this + 0x18) < v24 ) /*0x6d542b*/
        *(float *)(this + 0x18) = *v25; /*0x6d542f*/
    }
  }
}
