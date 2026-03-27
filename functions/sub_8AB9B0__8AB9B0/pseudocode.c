NiTimeController *__thiscall sub_8AB9B0(float *this, int *a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x64u);
  v4 = 0;
  if ( v3 )
    v4 = sub_8AA810(v3);
  sub_8AB710(this, (int)v4, a2);
  return v4;
}
