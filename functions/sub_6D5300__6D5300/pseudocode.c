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

  v1 = *(_DWORD *)(this + 0x50);
  *(float *)(this + 0x14) = flt_A32048;
  *(float *)(this + 0x18) = flt_A3B888;
  if ( v1 )
  {
    v2 = *(float **)(v1 + 0xC);
    v3 = *(_DWORD *)(v1 + 8);
    v4 = *(_BYTE *)(v1 + 0x48);
    if ( v2 )
    {
      if ( *v2 < dbl_A3A5B0 )
        *(float *)(this + 0x14) = *v2;
      v5 = (v3 - 1) * v4;
      v6 = *(float *)((char *)v2 + v5);
      v7 = (float *)((char *)v2 + v5);
      if ( v6 > dbl_A40398 )
        *(float *)(this + 0x18) = *v7;
    }
    v8 = *(float **)(v1 + 0x18);
    v9 = *(_DWORD *)(v1 + 0x14);
    v10 = *(_BYTE *)(v1 + 0x49);
    if ( v8 )
    {
      if ( *(float *)(this + 0x14) > (double)*v8 )
        *(float *)(this + 0x14) = *v8;
      v11 = (v9 - 1) * v10;
      v12 = *(float *)((char *)v8 + v11);
      v13 = (float *)((char *)v8 + v11);
      if ( *(float *)(this + 0x18) < v12 )
        *(float *)(this + 0x18) = *v13;
    }
    v14 = *(float **)(v1 + 0x24);
    v15 = *(_DWORD *)(v1 + 0x20);
    v16 = *(_BYTE *)(v1 + 0x4A);
    if ( v14 )
    {
      if ( *(float *)(this + 0x14) > (double)*v14 )
        *(float *)(this + 0x14) = *v14;
      v17 = (v15 - 1) * v16;
      v18 = *(float *)((char *)v14 + v17);
      v19 = (float *)((char *)v14 + v17);
      if ( *(float *)(this + 0x18) < v18 )
        *(float *)(this + 0x18) = *v19;
    }
    v20 = *(_DWORD *)(v1 + 0x2C);
    v21 = *(_BYTE *)(v1 + 0x4B);
    v22 = *(float **)(v1 + 0x30);
    if ( v22 )
    {
      if ( *(float *)(this + 0x14) > (double)*v22 )
        *(float *)(this + 0x14) = *v22;
      v23 = (v20 - 1) * v21;
      v24 = *(float *)((char *)v22 + v23);
      v25 = (float *)((char *)v22 + v23);
      if ( *(float *)(this + 0x18) < v24 )
        *(float *)(this + 0x18) = *v25;
    }
  }
}
