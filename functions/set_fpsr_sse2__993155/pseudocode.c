int __cdecl __set_fpsr_sse2(unsigned int a1)
{
  int result; // eax

  result = 0; /*0x993161*/
  if ( unk_BAABE0 ) /*0x993169*/
  {
    if ( (a1 & 0x40) != 0 && dword_B31C68 ) /*0x993177*/
      _mm_setcsr(a1); /*0x99317c*/
    else
      _mm_setcsr(a1 & 0xFFFFFFBF); /*0x9931bd*/
  }
  return result; /*0x9931c1*/
}
