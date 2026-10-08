int __thiscall sub_7E0840(WaterShaderHeightMap *this)
{
  int v1; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // edi
  bool v6; // zf
  float v7; // esi
  double v8; // st6
  float v9; // ecx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  double v13; // st7
  bool v14; // cc
  float v15; // esi
  double v16; // st6
  double v17; // st7
  int v18; // ecx
  double v19; // st7
  float v21; // [esp+0h] [ebp-30h]
  float v22; // [esp+0h] [ebp-30h]
  char a2; // [esp+17h] [ebp-19h] BYREF
  float a2_1; // [esp+18h] [ebp-18h]
  float v25; // [esp+1Ch] [ebp-14h]
  float v26; // [esp+20h] [ebp-10h]
  float v27; // [esp+24h] [ebp-Ch]
  double v28; // [esp+28h] [ebp-8h]

  v1 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e0849*/
  v3 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) + 1; /*0x7e0852*/
  v4 = 0; /*0x7e0855*/
  a2 = 1; /*0x7e085a*/
  if ( v3 > 0 ) /*0x7e085f*/
  {
    do /*0x7e08da*/
    {
      _memset(*(_DWORD *)(this->Unk0F8 + 4 * v4), 0, 4 * v1 + 1); /*0x7e0884*/
      _memset(*(_DWORD *)(this->Unk0FC + 4 * v4), 0, 4 * LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) + 1); /*0x7e08a3*/
      v1 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e08a8*/
      if ( v4 < SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) ) /*0x7e08b2*/
      {
        _memset(*(_DWORD *)(this->Unk0F8 + 4 * v4), 0, 4 * v1); /*0x7e08c5*/
        v1 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e08ca*/
      }
      ++v4; /*0x7e08d2*/
    }
    while ( v4 < v1 + 1 ); /*0x7e08da*/
  }
  *(float *)&v5 = 0.0; /*0x7e08dc*/
  v6 = LOBYTE(OB_ShaderConstantStorage_010201A0[0x6F]) == 0; /*0x7e08de*/
  v25 = 0.0; /*0x7e08e5*/
  if ( v6 ) /*0x7e08e9*/
  {
    if ( v1 >= 0 ) /*0x7e0b17*/
    {
      do /*0x7e0c97*/
      {
        v15 = 0.0; /*0x7e0b21*/
        v16 = (double)SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e0b25*/
        a2_1 = 0.0; /*0x7e0b2b*/
        v25 = ((double)SLODWORD(v25) - v16 * dbl_A2FAA0) * dbl_A78420; /*0x7e0b3d*/
        if ( v1 >= 0 ) /*0x7e0b41*/
        {
          v28 = v25 * v25; /*0x7e0b4d*/
          do /*0x7e0c88*/
          {
            a2_1 = ((double)SLODWORD(a2_1) - (double)SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) * dbl_A2FAA0) /*0x7e0b69*/
                 * dbl_A78420;
            v27 = a2_1 * a2_1 + v28; /*0x7e0b77*/
            v27 = sqrt(v27); /*0x7e0b84*/
            v27 = v27 * dbl_A91B68; /*0x7e0b92*/
            v27 = sqrt(v27); /*0x7e0b9f*/
            *(float *)(*(_DWORD *)(this->Unk0F8 + 4 * v5) + 4 * LODWORD(v15)) = v27; /*0x7e0bb0*/
            v17 = 0.0; /*0x7e0bb3*/
            if ( v25 == 0.0 && 0.0 == a2_1 ) /*0x7e0bd1*/
            {
              a2_1 = 0.0; /*0x7e0bd5*/
            }
            else
            {
              v27 = sqrt(sub_7DF640(v25, a2_1)); /*0x7e0bf7*/
              a2_1 = v27; /*0x7e0bff*/
              v17 = 0.0; /*0x7e0c03*/
            }
            v22 = v17; /*0x7e0c0e*/
            v26 = sub_7DF580(v22, 1.0); /*0x7e0c19*/
            v27 = (double)rand() / dbl_A3D5A8; /*0x7e0c30*/
            v27 = (v27 + v27) * dbl_A3D5B8; /*0x7e0c40*/
            v27 = sin(v27); /*0x7e0c4d*/
            v18 = *(_DWORD *)(this->Unk0FC + 4 * v5); /*0x7e0c5b*/
            ++LODWORD(v15); /*0x7e0c66*/
            v19 = v26 * a2_1; /*0x7e0c69*/
            a2_1 = v15; /*0x7e0c6d*/
            v27 = v19 * v27; /*0x7e0c75*/
            *(float *)(v18 + 4 * LODWORD(v15) - 4) = v27; /*0x7e0c7d*/
            v1 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e0c81*/
          }
          while ( SLODWORD(v15) <= SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) ); /*0x7e0c88*/
        }
        ++v5; /*0x7e0c8e*/
        v25 = *(float *)&v5; /*0x7e0c93*/
      }
      while ( v5 <= v1 ); /*0x7e0c97*/
    }
  }
  else if ( v1 >= 0 ) /*0x7e08f1*/
  {
    while ( 1 ) /*0x7e08fb*/
    {
      v7 = 0.0; /*0x7e08fb*/
      v8 = (double)SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e08ff*/
      a2_1 = 0.0; /*0x7e0905*/
      v25 = ((double)SLODWORD(v25) - v8 * dbl_A2FAA0) * dbl_A78420; /*0x7e0917*/
      if ( v1 >= 0 ) /*0x7e091b*/
        break; /*0x7e091b*/
LABEL_27:
      ++v5; /*0x7e0af3*/
      v25 = *(float *)&v5; /*0x7e0af8*/
      if ( v5 > v1 ) /*0x7e0afc*/
        return sub_7E06B0(this, (volatile LONG *)&a2); /*0x7e0afc*/
    }
    v28 = v25 * v25; /*0x7e0927*/
    while ( 1 ) /*0x7e0943*/
    {
      a2_1 = ((double)SLODWORD(a2_1) - (double)SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) * dbl_A2FAA0) /*0x7e0943*/
           * dbl_A78420;
      v26 = a2_1 * a2_1 + v28; /*0x7e0951*/
      v26 = sqrt(v26); /*0x7e095e*/
      v26 = v26 * dbl_A91B68; /*0x7e096c*/
      v26 = sqrt(v26); /*0x7e0979*/
      *(float *)(*(_DWORD *)(this->Unk0F8 + 4 * v5) + 4 * LODWORD(v7)) = v26; /*0x7e098d*/
      if ( v5 < 0x20 && SLODWORD(v7) < 0x20 ) /*0x7e0995*/
        goto LABEL_26; /*0x7e0995*/
      v9 = OB_ShaderConstantStorage_010201A0[0x6D]; /*0x7e099b*/
      v10 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) - 0x20; /*0x7e09a1*/
      if ( v5 <= v10 || SLODWORD(v7) >= 0x20 ) /*0x7e09ab*/
      {
        if ( v5 < 0x20 && SLODWORD(v7) > v10 ) /*0x7e09d3*/
        {
          v11 = *(_DWORD *)(this->Unk0FC + 4 * v5); /*0x7e09db*/
          v12 = *(float *)(v11 + 4 * (LODWORD(v7) - LODWORD(v9)) + 0x100); /*0x7e09e2*/
LABEL_25:
          *(float *)(v11 + 4 * LODWORD(v7)) = v12; /*0x7e0adc*/
          goto LABEL_26; /*0x7e0adc*/
        }
        if ( v5 <= v10 || SLODWORD(v7) <= v10 ) /*0x7e09f4*/
        {
          v13 = 0.0; /*0x7e0a19*/
          if ( v25 == 0.0 && 0.0 == a2_1 ) /*0x7e0a37*/
          {
            a2_1 = 0.0; /*0x7e0a3b*/
          }
          else
          {
            v26 = sqrt(sub_7DF640(v25, a2_1)); /*0x7e0a5d*/
            a2_1 = v26; /*0x7e0a65*/
            v13 = 0.0; /*0x7e0a69*/
          }
          v21 = v13; /*0x7e0a74*/
          v26 = sub_7DF580(v21, 1.0); /*0x7e0a7f*/
          v27 = (double)rand() / dbl_A3D5A8; /*0x7e0a96*/
          v27 = (v27 + v27) * dbl_A3D5B8; /*0x7e0aa6*/
          v27 = sin(v27); /*0x7e0ab3*/
          v11 = *(_DWORD *)(this->Unk0FC + 4 * v5); /*0x7e0ac1*/
          v27 = v26 * a2_1 * v27; /*0x7e0ad4*/
          v12 = v27; /*0x7e0ad8*/
          goto LABEL_25; /*0x7e0ad8*/
        }
        *(float *)(*(_DWORD *)(this->Unk0FC + 4 * v5) + 4 * LODWORD(v7)) = *(float *)(*(_DWORD *)(this->Unk0FC /*0x7e0a11*/
                                                                                                + 4
                                                                                                * (0x40
                                                                                                 - LODWORD(v9)
                                                                                                 + v5))
                                                                                    + 4
                                                                                    * (LODWORD(v7) + 0x40 - LODWORD(v9)));
      }
      else
      {
        *(float *)(*(_DWORD *)(this->Unk0FC + 4 * v5) + 4 * LODWORD(v7)) = *(float *)(*(_DWORD *)(this->Unk0FC /*0x7e09c4*/
                                                                                                + 4 * (v5 - LODWORD(v9))
                                                                                                + 0x100)
                                                                                    + 4 * LODWORD(v7));
      }
LABEL_26:
      v1 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e0adf*/
      v14 = ++LODWORD(v7) <= SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e0ae7*/
      a2_1 = v7; /*0x7e0ae9*/
      if ( !v14 ) /*0x7e0aed*/
        goto LABEL_27; /*0x7e0aed*/
    }
  }
  return sub_7E06B0(this, (volatile LONG *)&a2); /*0x7e0b0e*/
}
