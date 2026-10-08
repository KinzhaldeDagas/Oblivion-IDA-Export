NiTimeController *__thiscall sub_8AB9B0(float *this, int *a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x64u); /*0x8ab9d7*/
  v4 = 0; /*0x8ab9e3*/
  if ( v3 ) /*0x8ab9eb*/
    v4 = sub_8AA810(v3); /*0x8ab9f4*/
  sub_8AB710(this, (int)v4, a2); /*0x8aba06*/
  return v4; /*0x8aba0d*/
}
