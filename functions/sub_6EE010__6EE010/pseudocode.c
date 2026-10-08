// FaceGen coefficient generator: resizes all four matrices, then writes base[i] + FaceGen_RandomStandardNormal()*geneticVariation*1.5 for every coefficient. The normal call at 0x6EE070 is the only normal source in this pass.
void __thiscall FaceGenHeadParameters_AddGaussianVariation(
        void *this,
        float geneticVariation,
        const FaceGenHeadParameters *baseParameters,
        FaceGenHeadParameters *outParameters)
{
  unsigned int j; // edi
  const FaceGenHeadParameters *v5; // esi
  int v6; // ebx
  unsigned int rows; // eax
  unsigned int columns; // edx
  OB_stVector4_010201A0 *v9; // ecx
  double standardNormal; // st7
  float *begin; // eax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int i; // [esp+10h] [ebp-1Ch]
  int v15; // [esp+14h] [ebp-18h]
  int v16; // [esp+18h] [ebp-14h]
  float *v17; // [esp+1Ch] [ebp-10h]
  float v18; // [esp+1Ch] [ebp-10h]
  double scaledVariation; // [esp+24h] [ebp-8h]

  v5 = baseParameters; /*0x6ee01e*/
  v6 = (char *)outParameters - (char *)baseParameters; /*0x6ee022*/
  v16 = 2; /*0x6ee024*/
  do /*0x6ee116*/
  {
    v15 = 2; /*0x6ee02c*/
    do /*0x6ee10b*/
    {
      rows = v5->matrices[0].rows; /*0x6ee034*/
      columns = v5->matrices[0].columns; /*0x6ee038*/
      *(unsigned int *)((char *)&v5->matrices[0].rows + v6) = v5->matrices[0].rows; /*0x6ee03b*/
      v9 = (OB_stVector4_010201A0 *)((char *)&v5->matrices[0].allocator08 + v6);// FaceGen Gaussian generator computes 32-bit rows*columns for output ResizeFill. Subsequent row/column loops use original dimensions; a wrapped product can leave output too small before indexed writes at 0x6EE0E8. Prettier Faces 1.19.13 now checks the race base's total coefficient count <= its supported 256-element candidate capacity before calling TESNPC_RandomizeFaceGen. Native standard initializer 0x552880 uses 50+30+50=130 coefficients. This is a plugin preflight guard, not proof stock race data can trigger overflow. /*0x6ee041*/
      v9[0xFFFFFFFF].capacity = (unsigned int *)columns; /*0x6ee046*/
      FaceGenFloatVector_ResizeFill(v9, j, columns * rows, COERCE_UNSIGNED_INT(0.0));// Resize output using an unchecked 32-bit columns*rows product. The subsequent nested loops retain the original rows and columns, so a wrapped product permits writes beyond the resized vector. /*0x6ee04d*/
      for ( i = 0; i < v5->matrices[0].rows; ++i )// Iterate the original row count, independent of the potentially wrapped allocation count. /*0x6ee052*/
      {                                         // Iterate the original column count and write output[row*columns+column]; no check proves the resized output range covers the original dimension product.
        for ( j = 0; j < v5->matrices[0].columns; (*(float **)((char *)&v5->matrices[0].begin + v6))[v13] = v18 ) /*0x6ee065*/
        {
          standardNormal = FaceGen_RandomStandardNormal();// Only direct native call to FaceGen_RandomStandardNormal during FaceGen coefficient generation. PF 1.19.15 optional RandomSeed provides deterministic private Gaussian stream inside character Randomize Face scope; when unset it uses file time/QPC/process/thread/address entropy. Outside scope this hook forwards native RNG. /*0x6ee070*/
          begin = v5->matrices[0].begin; /*0x6ee078*/
          scaledVariation = standardNormal * geneticVariation * kFaceGenVariationScale1_5;// scaledVariation = standardNormal * geneticVariation * 1.5; the value is added directly to the current race coefficient. /*0x6ee083*/
          if ( !begin || !(v5->matrices[0].end - begin) ) /*0x6ee08e*/
            _invalid_parameter_noinfo(v6, j, (int)v5); /*0x6ee093*/
          v12 = *(int *)((char *)&v5->matrices[0].begin + v6); /*0x6ee0a8*/
          v17 = &v5->matrices[0].begin[j + i * v5->matrices[0].columns]; /*0x6ee0ae*/
          if ( !v12 || !((*(int *)((char *)&v5->matrices[0].end + v6) - v12) >> 2) ) /*0x6ee0ba*/
            _invalid_parameter_noinfo(v6, j, (int)v5); /*0x6ee0bf*/
          v13 = j + i * *(unsigned int *)((char *)&v5->matrices[0].columns + v6); /*0x6ee0d5*/
          ++j; /*0x6ee0d9*/
          v18 = *v17 + scaledVariation; /*0x6ee0e0*/
        }
      }
      v5 = (const FaceGenHeadParameters *)((char *)v5 + 0x18); /*0x6ee103*/
      --v15; /*0x6ee106*/
    }
    while ( v15 ); /*0x6ee10b*/
    --v16; /*0x6ee111*/
  }
  while ( v16 ); /*0x6ee116*/
}
