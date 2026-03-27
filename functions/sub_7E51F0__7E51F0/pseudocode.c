void __thiscall sub_7E51F0(float *this, float a2, char a3, char a4)
{
  signed int v5; // ebx
  int v6; // eax
  int v7; // eax
  float *v8; // ecx
  double v9; // st7
  int v10; // edi
  double v11; // st7
  int v12; // esi
  double v13; // st6
  float *v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // [esp+0h] [ebp-28h]
  int v18; // [esp+4h] [ebp-24h]
  float v19; // [esp+8h] [ebp-20h]
  float v20; // [esp+8h] [ebp-20h]
  float v21; // [esp+Ch] [ebp-1Ch]
  __int64 v22; // [esp+10h] [ebp-18h]
  float v23; // [esp+18h] [ebp-10h]
  __int64 v24; // [esp+1Ch] [ebp-Ch]
  float v25; // [esp+24h] [ebp-4h]

  v19 = a2 - *(this + 0x3E);
  v20 = fabs(v19);
  v5 = sub_7E2D60();
  v6 = Double_To_SInt32(*(this + 0x20) * (double)v5);
  v17 = v5;
  if ( v5 >= v6 )
    v17 = v6;
  v18 = Double_To_SInt32(v20 / *(this + 0x21) * (double)v17);
  v22 = *(_QWORD *)&Vector3_InitValue_;
  v23 = dword_B3F9B0;
  if ( a3 )
  {
    v7 = *(_DWORD *)(*((_DWORD *)this + 0x48) + 0x1C);
    if ( v7 )
    {
      while ( strcmp(*(const char **)(v7 + 8), "Bip01") )
      {
        v7 = *(_DWORD *)(v7 + 0x1C);
        if ( !v7 )
          goto LABEL_9;
      }
      v8 = *(float **)(v7 + 0x1C);
      v9 = *(float *)(v7 + 0x88) - v8[0x22];
      v8 += 0x22;
      *(float *)&v24 = v9;
      *((float *)&v24 + 1) = *(float *)(v7 + 0x8C) - v8[1];
      v22 = v24;
      v25 = *(float *)(v7 + 0x90) - v8[2];
      v23 = v25;
    }
  }
LABEL_9:
  v10 = 0;
  if ( v5 > 0 )
  {
    v11 = 0.0;
    v12 = 0;
    v13 = flt_A32048;
    while ( 1 )
    {
      v14 = (float *)(v12 + *((_DWORD *)this + 0x1B));
      v21 = a2 - v14[3];
      if ( v21 >= v11 && *(this + 0x21) >= v21 * v14[7] )
        goto LABEL_28;
      if ( *v14 != dbl_A3A5B0 )
      {
        *v14 = v13;
        *(float *)(v12 + *((_DWORD *)this + 0x1B) + 4) = v13;
        *(float *)(v12 + *((_DWORD *)this + 0x1B) + 8) = v13;
        *(float *)(v12 + *((_DWORD *)this + 0x1B) + 0xC) = flt_A91F98;
        *(float *)(v12 + *((_DWORD *)this + 0x1B) + 0x10) = v11;
        *(float *)(v12 + *((_DWORD *)this + 0x1B) + 0x14) = v11;
        *(float *)(v12 + *((_DWORD *)this + 0x1B) + 0x18) = v11;
        --*((_DWORD *)this + 0x1F);
      }
      if ( !a4 || v18 <= 0 || *((_DWORD *)this + 0x1F) >= v17 )
        goto LABEL_28;
      v15 = *((_DWORD *)this + 0x1C);
      if ( !v15 )
      {
        sub_7E4960(this, v10);
        goto LABEL_24;
      }
      v16 = v15 - 1;
      if ( !v16 )
        break;
      if ( v16 == 1 )
      {
        sub_7E5020((int)this, v10);
LABEL_24:
        v11 = 0.0;
      }
      --v18;
      ++*((_DWORD *)this + 0x1F);
      if ( a3 )
      {
        *(float *)(v12 + *((_DWORD *)this + 0x1B)) = *(float *)(v12 + *((_DWORD *)this + 0x1B)) - *(float *)&v22;
        *(float *)(v12 + *((_DWORD *)this + 0x1B) + 4) = *(float *)(v12 + *((_DWORD *)this + 0x1B) + 4)
                                                       - *((float *)&v22 + 1);
        *(float *)(v12 + *((_DWORD *)this + 0x1B) + 8) = *(float *)(v12 + *((_DWORD *)this + 0x1B) + 8) - v23;
      }
      v13 = flt_A32048;
LABEL_28:
      ++v10;
      v12 += 0x20;
      if ( v10 >= v5 )
        goto LABEL_29;
    }
    sub_7E4D20(this, v10);
    goto LABEL_24;
  }
LABEL_29:
  *(this + 0x3E) = a2;
}
