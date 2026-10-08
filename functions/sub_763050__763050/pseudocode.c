void __stdcall sub_763050(_DWORD *a1)
{
  unsigned int v1; // [esp-8h] [ebp-Ch]

  FormHeapFree(a1[8]); /*0x763059*/
  v1 = a1[0xA]; /*0x763061*/
  a1[7] = 0; /*0x763062*/
  a1[9] = 4; /*0x763069*/
  a1[8] = 0; /*0x763070*/
  FormHeapFree(v1); /*0x763077*/
  a1[0xA] = 0; /*0x76307f*/
}
