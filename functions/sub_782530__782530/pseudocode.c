char __stdcall sub_782530(void *Src, size_t Size, _DWORD *a3, size_t *a4, _DWORD *a5, _DWORD *a6)
{
  void *v6; // eax

  *(_DWORD *)HIDWORD(Size) = 0; /*0x78254a*/
  *a3 = 0; /*0x782550*/
  *(_DWORD *)a4 = 0; /*0x782556*/
  *a5 = 0; /*0x78255c*/
  if ( Src && (_DWORD)Size ) /*0x78256a*/
  {
    v6 = (void *)FormHeapAlloc(Size); /*0x78256d*/
    *(_DWORD *)HIDWORD(Size) = v6; /*0x782575*/
    memcpy(v6, Src, Size); /*0x782577*/
    *a3 = Size; /*0x782580*/
    return 1; /*0x782584*/
  }
  else
  {
    sub_738460(1, 0, "Invalid shader buffer\n"); /*0x782593*/
    return 0; /*0x78259e*/
  }
}
