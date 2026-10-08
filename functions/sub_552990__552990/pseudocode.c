// Four-matrix combine. Normal branch adds base+delta; optional positive maximumRms rescales using sqrt(sumSquares/rows), NOT sqrt(sumSquares/(rows*columns)). Equivalent to coefficient RMS only for columns=1. Special second-bank branch copies base matrices 2/3 rather than adding delta. No claim of malformed multi-column asset impact without callers/asset evidence.
void __cdecl FaceGenHeadParameters_Combine(
        const FaceGenHeadParameters *base,
        const FaceGenHeadParameters *delta,
        FaceGenHeadParameters *outParameters,
        bool specialSecondBankMode,
        float maximumRms)
{
  FaceGenHeadParameters *v5; // edx
  const FaceGenHeadParameters *v6; // eax
  int v7; // ebx
  int v8; // ecx
  int *v9; // esi
  FaceGenMatrix *v10; // ebp
  int v11; // eax
  const FaceGenMatrix *v12; // edi
  int v13; // ecx
  int rows; // edi
  double v15; // st7
  double v16; // st6
  FaceGenMatrix *v17; // eax
  int v18; // edi
  double v19; // st7
  double v20; // st6
  int v21; // [esp+1Ch] [ebp-30h]
  float v22; // [esp+20h] [ebp-2Ch]
  float v23; // [esp+20h] [ebp-2Ch]
  float v24; // [esp+20h] [ebp-2Ch]
  float v25; // [esp+20h] [ebp-2Ch]
  float v26; // [esp+20h] [ebp-2Ch]
  float v27; // [esp+20h] [ebp-2Ch]
  FaceGenMatrix v28; // [esp+28h] [ebp-24h] BYREF
  unsigned int v29; // [esp+48h] [ebp-4h]

  v5 = outParameters; /*0x5529b7*/
  if ( outParameters ) /*0x5529bd*/
  {
    v6 = base; /*0x5529c3*/
    if ( !base ) /*0x5529c9*/
    {
      v6 = delta; /*0x5529cb*/
      if ( !delta ) /*0x5529d1*/
        return; /*0x5529d1*/
      goto LABEL_4; /*0x5529d1*/
    }
    if ( !delta ) /*0x5529fb*/
    {
LABEL_4:
      FaceGenHeadParameters_Copy(v6, outParameters); /*0x5529d7*/
      return; /*0x5529f4*/
    }
    v7 = 0; /*0x552a05*/
    v8 = (char *)base - (char *)outParameters; /*0x552a07*/
    while ( 1 ) /*0x552a1e*/
    {
      v9 = (int *)((char *)v5 + 0x30 * v7); /*0x552a1e*/
      v10 = &v5->matrices[2]; /*0x552a20*/
      v21 = 2; /*0x552a23*/
      while ( 1 ) /*0x552a3e*/
      {
        v11 = *(int *)((char *)v9 + v8); /*0x552a34*/
        v12 = (const FaceGenMatrix *)((char *)v9 + v8); /*0x552a3b*/
        if ( v11 && (v13 = *(int *)((char *)v9 + v8 + 4)) != 0 ) /*0x552a4a*/
        {
          *v9 = v11; /*0x552a50*/
          v9[1] = v13; /*0x552a56*/
          FaceGenFloatVector_ResizeFill(v9 + 2, (int)v12, v13 * v11, COERCE_INT(0.0)); /*0x552a60*/
          if ( v7 == 1 && specialSecondBankMode ) /*0x552a73*/
          {
            FaceGenMatrix_Assign(v10, 1, (unsigned int *)((char *)&v10->rows + (char *)base - (char *)outParameters)); /*0x552a82*/
            if ( maximumRms > 0.0 ) /*0x552a92*/
            {
              rows = v10->rows; /*0x552a98*/
              v15 = FaceGenMatrix_SumSquares(&v10->rows);// Special second-bank limiter computes sqrt(sumSquares / matrix.rows), then scales when greater than maximumRms; denominator omits columns. /*0x552a9d*/
              v16 = (double)rows; /*0x552aa8*/
              if ( rows < 0 ) /*0x552aac*/
                v16 = v16 + flt_A2FC78; /*0x552aae*/
              v22 = v15 / v16; /*0x552ab6*/
              v23 = sqrt(v22); /*0x552ac3*/
              if ( maximumRms < (double)v23 ) /*0x552ade*/
              {
                v24 = maximumRms / v23; /*0x552ae9*/
                FaceGenMatrix_ScaleInPlace(v10, v24); /*0x552af4*/
              }
            }
          }
          else
          {
            v17 = FaceGenMatrix_Add(v12, &v28, (const FaceGenMatrix *)((char *)v12 + (char *)delta - (char *)base));// Normal combine path adds corresponding base and delta matrices element by element. /*0x552b0d*/
            v29 = 0; /*0x552b17*/
            FaceGenMatrix_Assign(v9, v7, v17); /*0x552b1b*/
            v29 = 0xFFFFFFFF; /*0x552b26*/
            if ( v28.begin ) /*0x552b2e*/
              FormHeapFree((unsigned int)v28.begin); /*0x552b31*/
            memset(&v28.begin, 0, 0xC); /*0x552b3b*/
            if ( maximumRms > 0.0 ) /*0x552b50*/
            {
              v18 = *v9; /*0x552b56*/
              v19 = FaceGenMatrix_SumSquares((unsigned int *)v9);// Normal combined-matrix limiter computes sqrt(sumSquares / matrix.rows); coefficient RMS interpretation assumes columns==1. /*0x552b5a*/
              v20 = (double)v18; /*0x552b65*/
              if ( v18 < 0 ) /*0x552b69*/
                v20 = v20 + flt_A2FC78; /*0x552b6b*/
              v25 = v19 / v20; /*0x552b73*/
              v26 = sqrt(v25); /*0x552b80*/
              if ( maximumRms < (double)v26 ) /*0x552b9b*/
              {
                v27 = maximumRms / v26; /*0x552ba2*/
                FaceGenMatrix_ScaleInPlace(v9, v27); /*0x552bad*/
              }
            }
          }
        }
        else
        {
          *v9 = 0; /*0x552bbd*/
          v9[1] = 0; /*0x552bc3*/
          FaceGenFloatVector_ResizeFill(v9 + 2, (int)v12, 0, COERCE_INT(0.0)); /*0x552bca*/
        }
        ++v10; /*0x552bd5*/
        v9 += 6; /*0x552bd8*/
        if ( !--v21 ) /*0x552be0*/
          break; /*0x552be0*/
        v8 = (char *)base - (char *)outParameters; /*0x552a30*/
      }
      if ( ++v7 >= 2 ) /*0x552bec*/
        break; /*0x552bec*/
      v8 = (char *)base - (char *)outParameters; /*0x552a10*/
      v5 = outParameters; /*0x552a14*/
    }
  }
}
