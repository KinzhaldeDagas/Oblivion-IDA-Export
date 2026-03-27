float *__cdecl sub_4DC4B0(float *a1, NiObjectNET *a2)
{
  float *ExtraData; // eax
  float v3; // ecx
  float v4; // edx
  double v5; // st7
  double v7; // st7
  int v8; // ecx
  float v9; // edx

  if ( a2 && (ExtraData = (float *)NiObjectNET_GetExtraData(a2, (const char *)&off_A7D2CC)) != 0 )
  {
    flt_B35EF4 = ExtraData[6];
    flt_B35EF8 = ExtraData[7];
    flt_B35EFC = ExtraData[8];
    flt_B35EF4 = ExtraData[3] + flt_B35EF4;
    v3 = flt_B35EF4;
    flt_B35EF8 = ExtraData[4] + flt_B35EF8;
    v4 = flt_B35EF8;
    v5 = ExtraData[5];
    v7 = v5 + flt_B35EFC;
    *a1 = v3;
    a1[1] = v4;
    flt_B35EFC = v7;
    a1[2] = flt_B35EFC;
    return a1;
  }
  else
  {
    v8 = *((_DWORD *)&Vector3_InitValue_ + 1);
    *a1 = Vector3_InitValue_;
    v9 = dword_B3F9B0;
    *((_DWORD *)a1 + 1) = v8;
    a1[2] = v9;
    return a1;
  }
}
