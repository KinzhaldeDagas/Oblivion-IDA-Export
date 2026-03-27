void __thiscall sub_6CD0F0(int this)
{
  char v1; // al
  char v2; // al
  int v3; // edi
  unsigned __int8 v4; // bl
  bool v5; // zf
  int v6; // esi
  int v7; // edx
  char v8; // al
  double v9; // st5
  double v10; // st4
  unsigned __int8 v11; // bl
  double v12; // st3
  int v13; // edx
  int v14; // edx
  char v15; // al
  double v16; // st7
  unsigned __int8 v17; // bl
  int v18; // edx
  int v19; // edx
  double v20; // st3
  double v21; // st6
  unsigned __int8 v22; // dl
  double v23; // st5
  double i; // st7
  int v25; // esi
  double v26; // rt2
  double v27; // st6
  double v28; // st7
  unsigned __int8 v29; // dl
  unsigned __int8 v30; // bl
  double v31; // rtt
  float *v32; // esi
  double v33; // rt0
  double v34; // st6
  double v35; // st7
  float v36; // [esp+0h] [ebp-4h]
  float v37; // [esp+0h] [ebp-4h]
  float v38; // [esp+0h] [ebp-4h]
  float v39; // [esp+0h] [ebp-4h]
  float v40; // [esp+0h] [ebp-4h]
  float v41; // [esp+0h] [ebp-4h]
  float v42; // [esp+0h] [ebp-4h]

  v1 = *(_BYTE *)(this + 0xC);
  if ( (v1 & 4) != 0 )
  {
    *(_BYTE *)(this + 0xC) = v1 & 0xFB;
    v2 = *(_BYTE *)(this + 0xE);
    if ( v2 == 1 )
    {
      *(float *)(*(_DWORD *)(this + 0x14) + 0x18 * *(unsigned __int8 *)(this + 0xF) + 8) = 1.0;
      return;
    }
    if ( v2 == 2 )
    {
      sub_6CC900((_BYTE *)this);
      return;
    }
    v3 = 0;
    if ( -flt_A7DEB4 == *(float *)(this + 0x24) )
    {
      v4 = 0;
      *(float *)(this + 0x24) = 0.0;
      v5 = *(_BYTE *)(this + 0xD) == 0;
      *(float *)(this + 0x28) = 0.0;
      *(float *)(this + 0x2C) = 0.0;
      if ( !v5 )
      {
        v6 = *(_DWORD *)(this + 0x14);
        do
        {
          v7 = v6 + 0x18 * v4;
          if ( *(_DWORD *)v7 )
          {
            v8 = *(_BYTE *)(v7 + 0xC);
            v36 = *(float *)(v7 + 4) * *(float *)(v7 + 0x10);
            if ( v8 == *(_BYTE *)(this + 0x10) )
            {
              *(float *)(this + 0x24) = *(float *)(this + 0x24) + v36;
              if ( *(float *)(this + 0x2C) < (double)*(float *)(v7 + 0x10) )
                *(float *)(this + 0x2C) = *(float *)(v7 + 0x10);
              ++v3;
            }
            else if ( v8 == *(_BYTE *)(this + 0x11) )
            {
              *(float *)(this + 0x28) = *(float *)(this + 0x28) + v36;
            }
          }
          ++v4;
        }
        while ( v4 < *(_BYTE *)(this + 0xD) );
        if ( v3 > 1 && 0.0 != *(float *)(this + 0x24) )
          *(float *)(this + 0x28) = 0.0;
      }
    }
    v37 = 1.0 - *(float *)(this + 0x2C);
    v9 = v37;
    v38 = *(float *)(this + 0x28) * v37 + *(float *)(this + 0x24) * *(float *)(this + 0x2C);
    if ( v38 <= 0.0 )
      v10 = 0.0;
    else
      v10 = 1.0 / v38;
    v11 = 0;
    if ( *(_BYTE *)(this + 0xD) )
    {
      v39 = v10;
      v12 = v39;
      do
      {
        v13 = *(_DWORD *)(this + 0x14);
        v5 = *(_DWORD *)(v13 + 0x18 * v11) == 0;
        v14 = v13 + 0x18 * v11;
        if ( !v5 )
        {
          v15 = *(_BYTE *)(v14 + 0xC);
          if ( v15 == *(_BYTE *)(this + 0x10) )
          {
            *(float *)(v14 + 8) = *(float *)(v14 + 4) * *(float *)(this + 0x2C) * *(float *)(v14 + 0x10) * v12;
          }
          else if ( v15 != *(_BYTE *)(this + 0x11) || 0.0 == *(float *)(this + 0x28) )
          {
            *(float *)(v14 + 8) = 0.0;
          }
          else
          {
            *(float *)(v14 + 8) = *(float *)(v14 + 4) * v9 * *(float *)(v14 + 0x10) * v12;
          }
        }
        ++v11;
      }
      while ( v11 < *(_BYTE *)(this + 0xD) );
    }
    v16 = 0.0;
    if ( *(float *)(this + 0x1C) <= 0.0 )
    {
      v27 = 1.0;
      v28 = 0.0;
LABEL_50:
      if ( (*(_BYTE *)(this + 0xC) & 2) != 0 )
      {
        v29 = 0;
        v30 = 0xFF;
        v42 = flt_A30634;
        if ( *(_BYTE *)(this + 0xD) )
        {
          while ( 1 )
          {
            v32 = (float *)(*(_DWORD *)(this + 0x14) + 0x18 * v29 + 8);
            if ( v42 < (double)*v32 )
            {
              v30 = v29;
              v42 = *v32;
            }
            v33 = v27;
            v34 = v28;
            v35 = v33;
            ++v29;
            *v32 = v34;
            if ( v29 >= *(_BYTE *)(this + 0xD) )
              break;
            v31 = v34;
            v27 = v35;
            v28 = v31;
          }
          *(float *)(*(_DWORD *)(this + 0x14) + 0x18 * v30 + 8) = v35;
        }
        else
        {
          *(float *)(*(_DWORD *)(this + 0x14) + 0x17F0) = v27;
        }
      }
      return;
    }
    v17 = 0;
    v40 = 0.0;
    if ( !*(_BYTE *)(this + 0xD) )
      goto LABEL_44;
    do
    {
      v18 = *(_DWORD *)(this + 0x14);
      v5 = *(_DWORD *)(v18 + 0x18 * v17) == 0;
      v19 = v18 + 0x18 * v17;
      if ( !v5 && 0.0 != *(float *)(v19 + 8) )
      {
        if ( *(float *)(this + 0x1C) > (double)*(float *)(v19 + 8) )
          *(float *)(v19 + 8) = 0.0;
        v40 = *(float *)(v19 + 8) + v40;
      }
      ++v17;
    }
    while ( v17 < *(_BYTE *)(this + 0xD) );
    v20 = v40;
    if ( v40 == 1.0 )
    {
      v21 = 0.0;
      i = 1.0;
LABEL_49:
      v26 = v21;
      v27 = i;
      v28 = v26;
      goto LABEL_50;
    }
    if ( v20 > 0.0 )
    {
      v21 = 0.0;
      v16 = 1.0 / v20;
    }
    else
    {
LABEL_44:
      v21 = 0.0;
    }
    v22 = 0;
    v23 = v16;
    for ( i = 1.0; v22 < *(_BYTE *)(this + 0xD); ++v22 )
    {
      v25 = *(_DWORD *)(this + 0x14) + 0x18 * v22;
      if ( v21 != *(float *)(v25 + 8) )
      {
        v41 = v23;
        *(float *)(v25 + 8) = v41 * *(float *)(v25 + 8);
      }
    }
    goto LABEL_49;
  }
}
