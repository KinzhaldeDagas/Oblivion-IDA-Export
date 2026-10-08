// CRT atexit destructor for the process-global Oblivion CWindMatrices object; clears the count, frees the transform array, and nulls the pointer.
void __cdecl OB_CWindMatrices_GlobalDtor_010201A0()
{
  CWindEngine__s_windMatrixContainer.matrixCount = 0; /*0xa27046*/
  FormHeapFree((unsigned int)CWindEngine__s_windMatrixContainer.matrices); /*0xa2704f*/
  CWindEngine__s_windMatrixContainer.matrices = 0; /*0xa27057*/
}
