void __thiscall sub_5AD380(_DWORD *this, float *a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]
  float v9; // [esp+Ch] [ebp+4h]
  float v10; // [esp+Ch] [ebp+4h]

  flt_B3B3DC[0] = *a2;
  v3 = *a2;
  *(this + 0xB) = 0;
  v7 = v3 + dbl_A2FC68;
  flt_B3B3E0 = a2[1];
  v4 = a2[1];
  *(this + 0xC) = 0;
  v8 = v4 + v7;
  flt_B3B3E4 = a2[2];
  v5 = a2[2];
  *(this + 0xD) = 0;
  v9 = v5 + v8;
  flt_B3B3E8 = a2[3];
  v6 = a2[3];
  *(this + 0xE) = 0;
  v10 = v6 + v9;
  if ( v10 != 1.0 )
    PrintError(
      "Total value of [LoadingBar] percentages is not equal to 1.0f in SetSectionPercentages(). It is currently %0.2f",
      v10);
}
