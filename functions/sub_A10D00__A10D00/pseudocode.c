// CRT dynamic initializer for the process-global Oblivion CWindMatrices object; constructs the four-matrix default and registers the matching atexit destructor.
int __cdecl OB_CWindMatrices_GlobalCtor_010201A0()
{
  OB_CWindMatrices_ctor_010201A0(&CWindEngine__s_windMatrixContainer); /*0xa10d05*/
  return atexit(OB_CWindMatrices_GlobalDtor_010201A0); /*0xa10d15*/
}
