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

  dword_B3B0B4[0xCA] = *(int *)a2; /*0x5ad388*/
  v3 = *a2; /*0x5ad38e*/
  *(this + 0xB) = 0; /*0x5ad390*/
  v7 = v3 + dbl_A2FC68; /*0x5ad399*/
  dword_B3B0B4[0xCB] = *((int *)a2 + 1); /*0x5ad3a0*/
  v4 = a2[1]; /*0x5ad3a6*/
  *(this + 0xC) = 0; /*0x5ad3a9*/
  v8 = v4 + v7; /*0x5ad3b0*/
  dword_B3B0B4[0xCC] = *((int *)a2 + 2); /*0x5ad3b7*/
  v5 = a2[2]; /*0x5ad3bd*/
  *(this + 0xD) = 0; /*0x5ad3c0*/
  v9 = v5 + v8; /*0x5ad3c7*/
  dword_B3B0B4[0xCD] = *((int *)a2 + 3); /*0x5ad3ce*/
  v6 = a2[3]; /*0x5ad3d4*/
  *(this + 0xE) = 0; /*0x5ad3d7*/
  v10 = v6 + v9; /*0x5ad3de*/
  if ( v10 != 1.0 ) /*0x5ad3f1*/
    PrintError( /*0x5ad3fe*/
      "Total value of [LoadingBar] percentages is not equal to 1.0f in SetSectionPercentages(). It is currently %0.2f",
      v10);
}
