int __thiscall sub_76DAB0(unsigned int *this)
{
  int v2; // eax
  int result; // eax

  v2 = *(this + 3); /*0x76dab3*/
  if ( v2 ) /*0x76dab8*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x76dac0*/
    *(this + 3) = 0; /*0x76dac2*/
  }
  FormHeapFree(*(this + 4)); /*0x76dacd*/
  result = *(this + 5); /*0x76dad2*/
  *(this + 4) = 0; /*0x76dada*/
  if ( result ) /*0x76dae1*/
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x76dae9*/
    *(this + 5) = 0; /*0x76daeb*/
  }
  return result; /*0x76daf2*/
}
