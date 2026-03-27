void __usercall sub_4B1210(int a1@<eax>, int a2@<ecx>)
{
  int v2; // edx
  double v3; // st5
  double v4; // st4
  double v5; // st4
  double v6; // st4
  double v7; // st4
  double v8; // st7
  double v9; // st7
  double v10; // st7
  float v11; // [esp+8h] [ebp-4h]
  float v12; // [esp+8h] [ebp-4h]
  float v13; // [esp+8h] [ebp-4h]
  float v14; // [esp+8h] [ebp-4h]

  if ( (byte_B35AC0 & 1) != 0 )
    v11 = flt_B08178;
  else
    v11 = 0.0;
  *(_DWORD *)(a2 + 0xB8) += 3;
  v2 = *(_DWORD *)(a2 + 0xB8);
  *(float *)(a2 + 0x108) = v11;
  *(float *)(a2 + 0x10C) = 0.0;
  *(float *)(a2 + 0x110) = 0.0;
  v3 = fConstant_Inv100;
  if ( (byte_B35AC0 & 2) != 0 || TES->currentInteriorCell && bOutQuadInLinearAttenuation == 1 )
  {
    v4 = (double)a1;
    if ( a1 < 0 )
      v4 = v4 + flt_A2FC78;
    v12 = v4 * flt_B08188;
    if ( !dword_B08158 )
    {
      *(float *)(a2 + 0x10C) = flt_B08168;
      goto LABEL_17;
    }
    v5 = v12;
    if ( dword_B08158 == 2 )
    {
      if ( v12 != 0.0 )
      {
        *(float *)(a2 + 0x10C) = flt_B08168 / (v5 * v5);
        goto LABEL_17;
      }
    }
    else if ( v12 != 0.0 )
    {
      *(float *)(a2 + 0x10C) = 1.0 / v5 * flt_B08168;
LABEL_17:
      *(_DWORD *)(a2 + 0xB8) = v2 + 1;
      goto LABEL_18;
    }
    *(float *)(a2 + 0x10C) = v3;
    goto LABEL_17;
  }
LABEL_18:
  if ( (byte_B35AC0 & 4) != 0 || !TES->currentInteriorCell && bOutQuadInLinearAttenuation == 1 )
  {
    v6 = (double)a1;
    if ( a1 < 0 )
      v6 = v6 + flt_A2FC78;
    v13 = v6;
    v7 = v13;
    v14 = v13 * flt_B08190;
    if ( dword_B08160 )
    {
      if ( dword_B08160 == 1 )
      {
        if ( 0.0 == v14 )
        {
          ++*(_DWORD *)(a2 + 0xB8);
          *(float *)(a2 + 0x110) = v3;
        }
        else
        {
          v9 = 1.0 / v7 * flt_B08170;
          ++*(_DWORD *)(a2 + 0xB8);
          *(float *)(a2 + 0x110) = v9;
        }
      }
      else if ( v14 == 0.0 )
      {
        ++*(_DWORD *)(a2 + 0xB8);
        *(float *)(a2 + 0x110) = v3;
      }
      else
      {
        v8 = flt_B08170 / (v14 * v14);
        ++*(_DWORD *)(a2 + 0xB8);
        *(float *)(a2 + 0x110) = v8;
      }
    }
    else
    {
      v10 = flt_B08170;
      ++*(_DWORD *)(a2 + 0xB8);
      *(float *)(a2 + 0x110) = v10;
    }
  }
}
