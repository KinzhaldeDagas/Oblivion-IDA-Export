void __thiscall sub_772840(unsigned int *this)
{
  unsigned int *v2; // esi

  FormHeapFree(*this); /*0x772846*/
  v2 = (unsigned int *)*(this + 2); /*0x77284b*/
  if ( v2 ) /*0x772853*/
  {
    sub_772840(v2); /*0x772857*/
    FormHeapFree((unsigned int)v2); /*0x77285d*/
  }
}
