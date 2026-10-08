NiTimeController *__thiscall sub_6C5CC0(float *this, int *a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x80u); /*0x6c5cea*/
  v4 = 0; /*0x6c5cf6*/
  if ( v3 ) /*0x6c5cfe*/
    v4 = sub_6C5520(v3); /*0x6c5d07*/
  sub_6C5A10(this, (int)v4, a2); /*0x6c5d19*/
  return v4; /*0x6c5d20*/
}
