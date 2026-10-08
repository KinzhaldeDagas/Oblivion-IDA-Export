// Projects a manual FaceGen slider value by multiplying its authored basis row by the selected parameter matrix (matrix index = matrixChannel + 2*matrixGroup).
float __cdecl FaceGenHeadParameters_GetSliderValue(
        const FaceGenHeadParameters *parameters,
        int matrixGroup,
        int matrixChannel,
        unsigned int sliderIndex)
{
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  const FaceGenMatrix *v8; // eax
  FaceGenMatrix *v9; // esi
  float *begin; // eax
  float v13; // [esp+0h] [ebp-1Ch]
  FaceGenMatrix out; // [esp+4h] [ebp-18h] BYREF

  v13 = 0.0; /*0x5538fa*/
  if ( parameters ) /*0x5538fd*/
  {
    v4 = g_faceGenManager; /*0x553904*/
    if ( !g_faceGenManager ) /*0x553904*/
    {
      FaceGenManager_EnsureInitialized(); /*0x55390e*/
      v4 = g_faceGenManager; /*0x553913*/
    }
    v5 = matrixChannel + 2 * matrixGroup; /*0x553922*/
    v6 = 4 * v5; /*0x553928*/
    v7 = v4[4 * v5 + 0x23]; /*0x55392b*/
    if ( v7 ) /*0x553934*/
    {
      if ( sliderIndex < (v4[v6 + 0x24] - v7) / 0x34 ) /*0x55395b*/
      {
        if ( !v4 ) /*0x55395f*/
        {
          FaceGenManager_EnsureInitialized(); /*0x553961*/
          v4 = g_faceGenManager; /*0x553966*/
        }
        v8 = (const FaceGenMatrix *)sub_54F6C0(&v4[v6 + 0x22], sliderIndex); /*0x553984*/
        v9 = FaceGenMatrix_Multiply(v8, &out, &parameters->matrices[v5]); /*0x553990*/
        begin = v9->begin; /*0x553992*/
        if ( !begin || !(v9->end - begin) ) /*0x55399e*/
          _invalid_parameter_noinfo(v5, (int)v4, (int)v9); /*0x5539a3*/
        v13 = *v9->begin; /*0x5539b3*/
        if ( out.begin ) /*0x5539b7*/
          FormHeapFree((unsigned int)out.begin); /*0x5539ba*/
      }
      return v13; /*0x5539c2*/
    }
    else
    {
      return v13; /*0x5539d5*/
    }
  }
  else
  {
    return v13; /*0x5539ce*/
  }
}
