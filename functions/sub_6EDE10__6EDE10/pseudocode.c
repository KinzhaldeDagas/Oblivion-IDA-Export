// Clamps an age/sex target pair, computes target-current deltas, couples them through the authored 2x2 transform, and adds two basis-transpose corrections to parameters.matrix[2*matrixChannel].
void __thiscall FaceGenFanControls_SetControlPair(
        void *this,
        int fanIndex,
        int matrixChannel,
        const float *targetPair,
        FaceGenHeadParameters *parameters)
{
  int controlIndex; // esi
  int v8; // eax
  float *v9; // ecx
  double currentControl; // st7
  int v11; // eax
  double v12; // st7
  float *v13; // eax
  unsigned int basisIndex; // esi
  const FaceGenMatrix *basis; // edi
  FaceGenMatrix *transposedBasis; // eax
  FaceGenMatrix *scaledBasis; // eax
  float scale; // [esp+0h] [ebp-74h]
  float v19; // [esp+14h] [ebp-60h]
  float v20; // [esp+18h] [ebp-5Ch]
  float v21; // [esp+1Ch] [ebp-58h]
  float v22[2]; // [esp+20h] [ebp-54h] BYREF
  float v23; // [esp+28h] [ebp-4Ch]
  float v24; // [esp+2Ch] [ebp-48h]
  double v25; // [esp+30h] [ebp-44h]
  FaceGenMatrix v26; // [esp+38h] [ebp-3Ch] BYREF
  FaceGenMatrix out; // [esp+50h] [ebp-24h] BYREF
  unsigned int v28; // [esp+70h] [ebp-4h]
  int fanIndexa; // [esp+78h] [ebp+4h]
  const float *targetPaira; // [esp+80h] [ebp+Ch]
  FaceGenHeadParameters *parametersa; // [esp+84h] [ebp+10h]

  if ( fanIndex >= 5 ) /*0x6ede40*/
    FaceGen_ReportAssertionViolation(".\\FanControls.cpp", 0xD9); /*0x6ede4c*/
  if ( *(_BYTE *)this ) /*0x6ede54*/
  {
    v22[0] = flt_A468FC;                        // Per-pair target clamps: age control 0 is [15,65]; absolute sex control 1 is [-4,4]. /*0x6ede6c*/
    v22[1] = flt_A63CD4; /*0x6ede7a*/
    controlIndex = 0; /*0x6ede7e*/
    v8 = (char *)targetPair - (char *)v22; /*0x6ede86*/
    v23 = flt_A47800; /*0x6ede88*/
    targetPaira = (const float *)((char *)targetPair - (char *)v22); /*0x6ede8c*/
    v24 = flt_A46B10; /*0x6ede96*/
    v20 = 0.0; /*0x6ede9c*/
    v21 = 0.0; /*0x6edea0*/
    while ( 1 ) /*0x6edeb4*/
    {
      v9 = &v22[controlIndex]; /*0x6edeb4*/
      fanIndexa = *(int *)((char *)v9 + v8); /*0x6edebb*/
      if ( *v9 > (double)*(float *)&fanIndexa ) /*0x6edecc*/
        fanIndexa = *(int *)v9; /*0x6eded0*/
      if ( *(&v23 + controlIndex) < (double)*(float *)&fanIndexa ) /*0x6edee3*/
        fanIndexa = *((int *)&v23 + controlIndex); /*0x6edee9*/
      v25 = *(float *)&fanIndexa; /*0x6edef9*/
      currentControl = FaceGenFanControls_GetControlValue(this, fanIndex, controlIndex++, matrixChannel, parameters);// Compute each control adjustment independently as clampedTarget - currentProjectedControl. /*0x6edf02*/
      *(&v19 + controlIndex) = v25 - currentControl; /*0x6edf11*/
      if ( controlIndex >= 2 ) /*0x6edf15*/
        break; /*0x6edf15*/
      v8 = (int)targetPaira; /*0x6edeb0*/
    }
    v11 = 0x10 * (matrixChannel + 2 * fanIndex);// Selects the authored 2x2 coupling transform for (fanIndex, matrixChannel). /*0x6edf1a*/
    v12 = *(float *)((char *)this + v11 + 0xC38); /*0x6edf1d*/
    v13 = (float *)((char *)this + v11 + 0xC34); /*0x6edf24*/
    basisIndex = 0; /*0x6edf48*/
    parametersa = (FaceGenHeadParameters *)((char *)parameters + 0x30 * matrixChannel);// Apply the coupled basis corrections to parameters.matrix[2 * matrixChannel]. /*0x6edf4c*/
    v23 = *v13 * v20 + v12 * v21;               // Coupled correction scale uses cached 2x2 transform and projected deltas; no finite-value or success check before matrix updates. Prettier Faces 1.19.6 verifies coefficients after restoring control projections and rolls back the final candidate when normalization produces invalid output. Native setter returns void; checking only finite requested controls does not validate the result. /*0x6edf59*/
    basis = (const FaceGenMatrix *)((char *)this + 0x80 * fanIndex + 0x20 * matrixChannel + 0x25C); /*0x6edf6b*/
    v24 = v20 * v13[2] + v21 * v13[3]; /*0x6edf77*/
    do /*0x6edff3*/
    {
      transposedBasis = FaceGenMatrix_Transpose(basis, &out); /*0x6edf87*/
      scale = *(&v23 + basisIndex); /*0x6edf95*/
      v28 = 0; /*0x6edf9d*/
      scaledBasis = FaceGenMatrix_Scale(transposedBasis, &v26, scale); /*0x6edfa1*/
      LOBYTE(v28) = 1; /*0x6edfae*/
      FaceGenMatrix_AddInPlace(parametersa->matrices, scaledBasis); /*0x6edfb3*/
      if ( v26.begin ) /*0x6edfbe*/
        FormHeapFree((unsigned int)v26.begin); /*0x6edfc1*/
      memset(&v26.begin, 0, 0xC); /*0x6edfcf*/
      v28 = 0xFFFFFFFF; /*0x6edfdb*/
      if ( out.begin ) /*0x6edfdf*/
        FormHeapFree((unsigned int)out.begin); /*0x6edfe2*/
      ++basisIndex; /*0x6edfea*/
      basis = (const FaceGenMatrix *)((char *)basis + 0x40); /*0x6edfed*/
    }
    while ( basisIndex < 2 ); /*0x6edff3*/
  }
}
