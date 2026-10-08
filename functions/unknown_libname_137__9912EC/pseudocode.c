void __userpurge unknown_libname_137(__int16 a1@<fpstat>, double a2@<st1>, double a3@<st0>, float a4)
{
  if ( (LODWORD(a4) & 0x7F800000) != 0x7F800000 ) /*0x9912fb*/
  {
    if ( (a1 & 0x3800) != 0 ) /*0x991304*/
      unknown_libname_135(a2, a3); /*0x99130a*/
    else
      unknown_libname_135(a4, a2); /*0x99131f*/
  }
}
