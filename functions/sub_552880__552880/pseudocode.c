// Standard FaceGenHeadParameters dimensions: matrix0 50x1, matrix1 30x1, matrix2 50x1, matrix3 untouched. Thus standard initialized active coefficient count is 130, under PF supported 256 cap. Existing elements survive ResizeFill as documented; this routine is not a full zero reset.
void __cdecl FaceGenHeadParameters_Initialize(FaceGenHeadParameters *parameters)
{
  int v1; // edi

  if ( parameters ) /*0x552887*/
  {
    parameters->matrices[0].rows = 0x32; /*0x552894*/
    parameters->matrices[0].columns = 1; /*0x55289a*/
    FaceGenFloatVector_ResizeFill(&parameters->matrices[0].allocator08, v1, 0x32u, COERCE_INT(0.0)); /*0x5528a1*/
    parameters->matrices[1].rows = 0x1E; /*0x5528b1*/
    parameters->matrices[1].columns = 1; /*0x5528b8*/
    FaceGenFloatVector_ResizeFill(&parameters->matrices[1].allocator08, v1, 0x1Eu, COERCE_INT(0.0)); /*0x5528bf*/
    parameters->matrices[2].rows = 0x32; /*0x5528cf*/
    parameters->matrices[2].columns = 1; /*0x5528d6*/
    FaceGenFloatVector_ResizeFill(&parameters->matrices[2].allocator08, v1, 0x32u, COERCE_INT(0.0)); /*0x5528dd*/
  }
}
