void __thiscall sub_6D5DB0(_DWORD *this, float *a2, float *a3)
{
  int v3; // ecx
  float *v4; // ebp
  float *v5; // edi
  int v6; // edx
  unsigned __int8 v7; // bl
  float *v8; // esi
  int v9; // esi
  unsigned __int8 v10; // bl
  float *v11; // edx
  unsigned __int8 *v12; // ebp
  float **v13; // esi
  float *v14; // edi
  float *v15; // edx
  unsigned __int8 v16; // bl
  int v17; // edx
  unsigned __int8 v18; // bl
  float *v19; // ecx
  char v20; // [esp+Bh] [ebp-9h]
  float v21; // [esp+Ch] [ebp-8h]
  float v22; // [esp+Ch] [ebp-8h]
  float v23; // [esp+Ch] [ebp-8h]
  float v24; // [esp+Ch] [ebp-8h]
  int v25; // [esp+10h] [ebp-4h]
  float v26; // [esp+18h] [ebp+4h]
  float v27; // [esp+18h] [ebp+4h]
  float v28; // [esp+18h] [ebp+4h]
  float v29; // [esp+18h] [ebp+4h]

  v3 = *(this + 0xB);
  v4 = a2;
  *a2 = flt_A7DEB4;
  v5 = a3;
  *a3 = -flt_A7DEB4;
  v20 = 0;
  if ( !v3 )
    goto LABEL_29;
  v6 = *(unsigned __int16 *)(v3 + 0xA);
  v7 = *(_BYTE *)(v3 + 0x1D);
  v8 = *(float **)(v3 + 0x24);
  if ( *(_WORD *)(v3 + 0xA) )
  {
    v21 = *v8;
    if ( *a2 > (double)v21 )
      *a2 = v21;
    v22 = *(float *)((char *)v8 + v7 * (v6 - 1));
    if ( *a3 < (double)v22 )
      *a3 = v22;
    v20 = 1;
  }
  v9 = *(unsigned __int16 *)(v3 + 8);
  v10 = *(_BYTE *)(v3 + 0x1C);
  v11 = *(float **)(v3 + 0x20);
  if ( *(_WORD *)(v3 + 8) )
  {
    if ( *(_DWORD *)(v3 + 0x10) == 4 )
    {
      v12 = (unsigned __int8 *)(v11 + 0xB);
      v13 = (float **)(v11 + 0xC);
      v25 = 3;
      do
      {
        v14 = v13[0xFFFFFFF9];
        if ( v14 )
        {
          v15 = *v13;
          v16 = *v12;
          v23 = **v13;
          if ( *a2 > (double)v23 )
            *a2 = v23;
          v24 = *(float *)((char *)v15 + v16 * ((_DWORD)v14 + 0xFFFFFFFF));
          if ( *a3 < (double)v24 )
            *a3 = v24;
          v20 = 1;
        }
        ++v13;
        ++v12;
        --v25;
      }
      while ( v25 );
      v4 = a2;
      v5 = a3;
    }
    else
    {
      v26 = *v11;
      if ( *v4 > (double)v26 )
        *v4 = v26;
      v27 = *(float *)((char *)v11 + v10 * (v9 - 1));
      if ( *a3 < (double)v27 )
        *a3 = v27;
      v20 = 1;
    }
  }
  v17 = *(unsigned __int16 *)(v3 + 0xC);
  v18 = *(_BYTE *)(v3 + 0x1E);
  v19 = *(float **)(v3 + 0x28);
  if ( v17 )
  {
    v28 = *v19;
    if ( *v4 > (double)v28 )
      *v4 = v28;
    v29 = *(float *)((char *)v19 + v18 * (v17 - 1));
    if ( *v5 < (double)v29 )
      *v5 = v29;
  }
  else
  {
LABEL_29:
    if ( !v20 )
    {
      *v4 = 0.0;
      *v5 = 0.0;
    }
  }
}
