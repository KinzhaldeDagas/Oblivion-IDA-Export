int sub_9FE610()
{
  _DWORD *v0; // eax

  v0 = (_DWORD *)FormHeapAlloc(8u); /*0x9fe612*/
  if ( v0 ) /*0x9fe61c*/
  {
    *v0 = 0; /*0x9fe61e*/
    v0[1] = 0; /*0x9fe624*/
    LODWORD(qword_B3BB2C[0xA1]) = v0; /*0x9fe630*/
  }
  else
  {
    qword_B3BB2C[0xA1] = 0.0; /*0x9fe643*/
  }
  return atexit(sub_A25DB0); /*0x9fe63b*/
}
