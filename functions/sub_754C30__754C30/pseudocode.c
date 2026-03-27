char *__thiscall sub_754C30(float *this, _DWORD **a2)
{
  char *v3; // eax
  char *v4; // esi

  v3 = (char *)FormHeapAlloc(0xB0u);
  if ( v3 )
    v4 = sub_754B20(v3, 1.0, 0, 0, 0, 0, 1.0);
  else
    v4 = 0;
  sub_75ED50(this, (int)v4, a2);
  *((float *)v4 + 0xC) = *(this + 0xC);
  return v4;
}
