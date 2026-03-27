void __cdecl sub_55FA50(float *a1, char a2)
{
  double v2; // rt0
  TES *v3; // ecx
  Sky *sky; // eax
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  double v12; // st7
  double v13; // st7
  float v14; // [esp+14h] [ebp-24h]
  float v15; // [esp+18h] [ebp-20h]
  float v16; // [esp+1Ch] [ebp-1Ch]
  float v17[3]; // [esp+20h] [ebp-18h] BYREF
  float v18[3]; // [esp+2Ch] [ebp-Ch] BYREF
  float windSpeed; // [esp+40h] [ebp+8h]

  if ( !a2 )
  {
    flt_B39F18 = flt_B33E9C + flt_B39F18;
    sub_78D3F0(flt_B39F18);
  }
  if ( a1 )
  {
    v18[0] = a1[0x22];
    v18[1] = a1[0x23];
    v18[2] = a1[0x24];
    v2 = dbl_A3D360;
    v14 = a1[0x19] * v2;
    v15 = a1[0x1C] * v2;
    v16 = v2 * a1[0x1F];
    v17[0] = v14;
    v17[1] = v15;
    v17[2] = v16;
    sub_78D140(v18, v17);
  }
  if ( !a2 )
  {
    v3 = TES;
    if ( TES )
    {
      sky = v3->sky;
      if ( sky )
      {
        if ( v3->currentInteriorCell )
        {
          if ( !dword_B39E04 )
            sub_55F750(0);
          *(float *)(dword_B39E04 + 0x1C) = 0.0;
        }
        else
        {
          windSpeed = sky->windSpeed;
          if ( !dword_B39E04 )
            sub_55F750(0);
          *(float *)(dword_B39E04 + 0x1C) = windSpeed;
        }
        if ( *(_DWORD *)(dword_B39E04 + 0xC) )
        {
          if ( sub_53FB50(TES->sky) )
          {
            v5 = (_DWORD *)sub_53FB50(TES->sky);
            v6 = v5[8];
            v7 = v5[9];
            v8 = v5[0xA];
            if ( !dword_B39E04 )
              sub_55F750(0);
            v9 = *(_DWORD **)(dword_B39E04 + 0xC);
            ++v9[0x15];
            v9[7] = v6;
            v9[8] = v7;
            v9[9] = v8;
            if ( !dword_B39E04 )
              sub_55F750(0);
            v10 = *(_DWORD **)(dword_B39E04 + 0xC);
            ++v10[0x15];
            v10[0xA] = v6;
            v10[0xB] = v7;
            v10[0xC] = v8;
            if ( !dword_B39E04 )
              sub_55F750(0);
            v11 = *(_DWORD **)(dword_B39E04 + 0xC);
            ++v11[0x15];
            v11[0x10] = v6;
            v11[0x11] = v7;
            v11[0x12] = v8;
          }
        }
      }
    }
    if ( !dword_B39E04 )
      sub_55F750(0);
    sub_55E060((float *)dword_B39E04);
  }
  v12 = (double)dword_B12630;
  if ( dword_B12630 < 0 )
    v12 = v12 + flt_A2FC78;
  flt_B44F04 = v12;
  v13 = 0.0;
  if ( flt_B12638 < 0.0 || (v13 = flt_B12638, v13 <= 1.0) )
    flt_B2D860 = v13;
  else
    flt_B2D860 = 1.0;
}
