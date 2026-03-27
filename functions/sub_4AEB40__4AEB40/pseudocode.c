int __stdcall sub_4AEB40(int a1, int a2, float a3)
{
  int result; // eax
  int v4; // edx
  float v5; // ecx
  int v6; // ecx
  float *v7; // edx
  double v8; // st6
  float *v9; // edx
  float *v10; // ecx

  result = a1;
  v4 = *((_DWORD *)&Vector3_InitValue_ + 1);
  *(float *)a1 = Vector3_InitValue_;
  v5 = dword_B3F9B0;
  *(_DWORD *)(a1 + 4) = v4;
  *(float *)(a1 + 8) = v5;
  if ( (unsigned int)(a2 - 1) <= 0x13 )
  {
    v6 = 0x10 * a2;
    v7 = *(float **)(0x10 * a2 + 0xB07F38);
    if ( !v7 )
    {
      *(float *)&dword_B35464 = 0.0;
      v7 = (float *)&dword_B35464;
    }
    v8 = *v7;
    v9 = *(float **)(v6 + 0xB07F3C);
    *(float *)a1 = v8;
    if ( !v9 )
    {
      *(float *)&dword_B35464 = 0.0;
      v9 = (float *)&dword_B35464;
    }
    v10 = *(float **)(v6 + 0xB07F40);
    *(float *)(a1 + 4) = *v9;
    if ( v10 )
    {
      *(float *)(a1 + 8) = (a3 - dbl_A2F928) * *v10;
    }
    else
    {
      *(float *)&dword_B35464 = 0.0;
      *(float *)(a1 + 8) = (a3 - dbl_A2F928) * *(float *)&dword_B35464;
    }
  }
  return result;
}
