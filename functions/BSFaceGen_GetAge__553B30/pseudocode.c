// Fan-0 control projection wrapper. matrixChannel 0 projects FaceGen matrix 0 geometry; matrixChannel 1 projects matrix 2 texture.
float __cdecl FaceGenHeadParameters_GetControlValue(
        const FaceGenHeadParameters *parameters,
        int controlIndex,
        int matrixChannel)
{
  if ( !g_faceGenManager ) /*0x553b30*/
    FaceGenManager_EnsureInitialized(); /*0x553b39*/
  return FaceGenFanControls_GetControlValue((char *)g_faceGenManager + 0xC8, 0, controlIndex, matrixChannel, parameters);// Fan-0 control projection. matrixChannel 0 selects parameters.matrix[0]; matrixChannel 1 selects parameters.matrix[2]. /*0x553b60*/
}
