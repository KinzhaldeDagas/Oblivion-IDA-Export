// Oblivion FaceGen randomizer wrapper. Ensures the manager exists, then fills all four output matrices as race base plus independent Gaussian variation.
void __cdecl FaceGen_GenerateRandomizedHeadParameters(
        float geneticVariation,
        const FaceGenHeadParameters *raceParameters,
        FaceGenHeadParameters *outParameters)
{
  if ( outParameters ) /*0x553b77*/
  {
    if ( raceParameters ) /*0x553b80*/
    {
      if ( !g_faceGenManager ) /*0x553b82*/
        FaceGenManager_EnsureInitialized(); /*0x553b8b*/
      FaceGenHeadParameters_AddGaussianVariation( /*0x553ba6*/
        (char *)g_faceGenManager + 0xC8,
        geneticVariation,
        raceParameters,
        outParameters);                         // Call the manager+0xC8 random-generator method with (geneticVariation, raceParameters, outParameters). The method receives but does not otherwise use its manager subobject.
    }
  }
}
