// Sets one fan-0 control while preserving its paired control. matrixChannel 0 updates matrix 0 geometry and matrixChannel 1 updates matrix 2 texture through authored FanControls bases.
void __cdecl FaceGenHeadParameters_SetControlValue(
        FaceGenHeadParameters *parameters,
        int controlIndex,
        int matrixChannel,
        float value)
{
  int i; // esi
  double ControlValue; // st7
  float targetPair[2]; // [esp+10h] [ebp-8h] BYREF

  for ( i = 0; i < 2; ++i ) /*0x555a13*/
  {
    if ( i == controlIndex ) /*0x555a17*/
    {
      ControlValue = value; /*0x555a19*/
    }
    else
    {
      if ( !g_faceGenManager ) /*0x555a1f*/
        FaceGenManager_EnsureInitialized(); /*0x555a28*/
      ControlValue = FaceGenFanControls_GetControlValue( /*0x555a3e*/
                       (char *)g_faceGenManager + 0xC8,
                       0,
                       i,
                       matrixChannel,
                       parameters);
    }
    targetPair[i] = ControlValue; /*0x555a43*/
  }
  if ( !g_faceGenManager ) /*0x555a4f*/
    FaceGenManager_EnsureInitialized(); /*0x555a58*/
  FaceGenFanControls_SetControlPair((char *)g_faceGenManager + 0xC8, 0, matrixChannel, targetPair, parameters);// Set the requested fan-0 control while preserving its paired control in the selected matrix 0/2 channel. /*0x555a72*/
}
