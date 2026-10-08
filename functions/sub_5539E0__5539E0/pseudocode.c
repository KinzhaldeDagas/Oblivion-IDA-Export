// Sets a manual FaceGen slider by projecting its current value, transposing the authored basis, scaling by target-current, and adding the adjustment into the selected parameter matrix.
void __cdecl FaceGenHeadParameters_SetSliderValue(
        FaceGenHeadParameters *parameters,
        int matrixGroup,
        int matrixChannel,
        unsigned int sliderIndex,
        float value)
{
  char *v5; // ecx
  int v6; // esi
  int v7; // eax
  const FaceGenMatrix *v9; // eax
  FaceGenMatrix *v10; // eax
  FaceGenMatrix *v11; // eax
  FaceGenMatrix v12; // [esp+18h] [ebp-3Ch] BYREF
  FaceGenMatrix out; // [esp+30h] [ebp-24h] BYREF
  int v14; // [esp+50h] [ebp-4h]
  float parametersb; // [esp+58h] [ebp+4h]
  float parametersa; // [esp+58h] [ebp+4h]

  if ( parameters ) /*0x553a0c*/
  {
    v5 = (char *)g_faceGenManager; /*0x553a12*/
    if ( !g_faceGenManager ) /*0x553a12*/
    {
      FaceGenManager_EnsureInitialized(); /*0x553a1c*/
      v5 = (char *)g_faceGenManager; /*0x553a21*/
    }
    v6 = 0x10 * (matrixChannel + 2 * matrixGroup); /*0x553a35*/
    v7 = *(_DWORD *)&v5[v6 + 0x8C]; /*0x553a38*/
    if ( v7 ) /*0x553a41*/
    {
      if ( sliderIndex < (*(_DWORD *)&v5[v6 + 0x90] - v7) / 0x34 ) /*0x553a67*/
      {
        parametersb = FaceGenHeadParameters_GetSliderValue(parameters, matrixGroup, matrixChannel, sliderIndex); /*0x553a7e*/
        parametersa = value - parametersb; /*0x553a94*/
        if ( !g_faceGenManager ) /*0x553a89*/
          FaceGenManager_EnsureInitialized(); /*0x553a9a*/
        v9 = (const FaceGenMatrix *)sub_54F6C0((char *)g_faceGenManager + v6 + 0x88, sliderIndex); /*0x553ab1*/
        v10 = FaceGenMatrix_Transpose(v9, &out); /*0x553ab8*/
        v14 = 0; /*0x553ace*/
        v11 = FaceGenMatrix_Scale(v10, &v12, parametersa); /*0x553ad2*/
        LOBYTE(v14) = 1; /*0x553adf*/
        FaceGenMatrix_AddInPlace(&parameters->matrices[2 * matrixGroup + matrixChannel], v11); /*0x553ae4*/
        if ( v12.begin ) /*0x553aef*/
          FormHeapFree((unsigned int)v12.begin); /*0x553af2*/
        memset(&v12.begin, 0, 0xC); /*0x553b00*/
        if ( out.begin ) /*0x553b0c*/
          FormHeapFree((unsigned int)out.begin); /*0x553b0f*/
      }
    }
  }
}
