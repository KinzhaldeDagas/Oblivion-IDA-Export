float *__thiscall sub_4A0400(char **this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x10u);
  v4 = 0;
  if ( v3 )
    v4 = sub_4A0200(v3);
  sub_721170(this, (int)v4, a2);
  return v4;
}
