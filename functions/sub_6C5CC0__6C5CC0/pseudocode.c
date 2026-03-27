NiTimeController *__thiscall sub_6C5CC0(float *this, int *a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x80u);
  v4 = 0;
  if ( v3 )
    v4 = sub_6C5520(v3);
  sub_6C5A10(this, (int)v4, a2);
  return v4;
}
