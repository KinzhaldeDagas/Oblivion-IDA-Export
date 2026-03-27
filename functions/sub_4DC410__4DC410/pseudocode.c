float *__thiscall sub_4DC410(NiObjectNET **this, float *a2)
{
  NiObjectNET *v2; // ecx
  float *ExtraData; // eax
  float v4; // ecx
  float v5; // edx
  double v6; // st7
  double v8; // st7
  int v9; // ecx
  float v10; // edx

  v2 = *(this + 0xF);
  if ( v2 && (ExtraData = (float *)NiObjectNET_GetExtraData(v2, (const char *)&off_A7D2CC)) != 0 )
  {
    flt_B35EF4 = ExtraData[6];
    flt_B35EF8 = ExtraData[7];
    flt_B35EFC = ExtraData[8];
    flt_B35EF4 = ExtraData[3] + flt_B35EF4;
    v4 = flt_B35EF4;
    flt_B35EF8 = ExtraData[4] + flt_B35EF8;
    v5 = flt_B35EF8;
    v6 = ExtraData[5];
    v8 = v6 + flt_B35EFC;
    *a2 = v4;
    a2[1] = v5;
    flt_B35EFC = v8;
    a2[2] = flt_B35EFC;
    return a2;
  }
  else
  {
    v9 = *((_DWORD *)&Vector3_InitValue_ + 1);
    *a2 = Vector3_InitValue_;
    v10 = dword_B3F9B0;
    *((_DWORD *)a2 + 1) = v9;
    a2[2] = v10;
    return a2;
  }
}
